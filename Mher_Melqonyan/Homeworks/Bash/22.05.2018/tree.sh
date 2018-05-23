#!bin/bash
`cd $1` | 2>err
if ! [ -s error ]; then
ls -1t | head -$2
fi
