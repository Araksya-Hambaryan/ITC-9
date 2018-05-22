#!/bin/bash

ls -lt $1 | head -$2 >file
cat file
rm file
