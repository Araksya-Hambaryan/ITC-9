#!/usr/bin/env bash
ARG=${1:-~/}
cd $ARG
tree | tail -n $2 
