#!/bin/bash

proc1() {
    var=$(ps -eo pid | grep "1$")
    ps -eo pid,comm | grep "$var"
}
