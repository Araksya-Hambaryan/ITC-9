#!/bin/bash

array=$(ps -eo pid | grep "1$")
> procFile
ps -eo pid,comm | grep "$array" >> procFile
