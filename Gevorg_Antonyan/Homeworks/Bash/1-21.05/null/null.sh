#!/bin/bash

source ./lib.sh
count=$(cat text | wc -l)
change $count
