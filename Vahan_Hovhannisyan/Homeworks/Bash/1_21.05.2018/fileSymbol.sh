#!/bin/bash/

createDir() {
    if [ ! -d "dir" ]; then
        mkdir dir
    fi
}

createFiles() {
    for i in {1..5}
    do
        touch "file$i"
        < /dev/urandom tr -dc "[:alnum:]" | head -c25 >> "file$i"
    done
}

searchForCharacters() {
    for i in {1..5}
    do
        grep -li "^N" $(pwd)/"file$i"
    done
}

createDir
cd $(pwd)/dir/
createFiles
searchForCharacters
