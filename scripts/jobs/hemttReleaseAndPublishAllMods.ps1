# HEMTT Release and Publish All Mods Job

# store location of Arma 3 Tools PublisherCmd
$PublisherCMD = "C:\Program Files (x86)\Steam\steamapps\common\Arma 3 Tools\Publisher\PublisherCmd.exe"

# enter mods directory
Push-Location "mods\"

# do we have an arg?
if ($args.Length -eq 0) {
    # no, so we'll just get all mod subdirectories
    Write-Host "Running HEMTT Release and Arma 3 Tools PublisherCmd for all mods"
    $modDirs = Get-ChildItem -Directory -Path .\ -Exclude .git
} else {
    # yes, so we'll get the mod subdirectory specified by the arg
    Write-Host "Running HEMTT Release and Arma 3 Tools PublisherCmd for mod: $($args[0])"
    $modDirs = dir -Filter $args[0] -Directory
}

# do we have any directories?
if ($modDirs.Length -eq 0) {
    # no, so we'll just exit
    Write-Host "No mod directories found"
    Pop-Location
    return
}

# wait for user input to proceed
Write-Host "Press any key to proceed..."
$null = $Host.UI.RawUI.ReadKey("NoEcho,IncludeKeyDown")

# iterate over all mod directories
foreach ($modDir in $modDirs) {
    # enter mod directory
    Push-Location $modDir.FullName

    # run HEMTT release if mod has a .hemtt/project.toml file
    if (Test-Path ".hemtt\project.toml") {
        Write-Host "Running HEMTT Release for $($modDir.Name)"
        & hemtt release --no-archive --expsqfc
    }

    # run Arma 3 Tools PublisherCmd if mod has a steam\workshop_id.txt file
    if (Test-Path "steam\workshop_id.txt") {
        # read workshop id from file
        $workshopId = Get-Content "steam\workshop_id.txt"

        Write-Host "Running Arma 3 Tools PublisherCmd for $($modDir.Name)"
        & $PublisherCMD update /id:$workshopId /path:.hemttout\release\ /changeNote:"automated release"
    }

    # return to mods directory
    Pop-Location
}

# return to root directory
Pop-Location