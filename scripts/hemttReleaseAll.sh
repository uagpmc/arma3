#!/bin/sh

cd ./mods/ && for modDir in ./*/; do (
    cd "$modDir" && \
        echo "Running HEMTT Release for $modDir" && \
        hemtt release --no-archive --expsqfc
) done