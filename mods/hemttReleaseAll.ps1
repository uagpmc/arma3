$modDirs = Get-ChildItem -Directory -Path .\ -Exclude .git

foreach ($modDir in $modDirs) {
    Push-Location $modDir.FullName
    Write-Host "Running HEMTT Release for $($modDir.Name)"
        & hemtt release --no-archive
    Pop-Location
}