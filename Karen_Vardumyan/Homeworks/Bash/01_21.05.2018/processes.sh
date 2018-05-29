#!/bin/bash
find_proces () {
    echo "Name              PID" > files_of_process
    echo >> files_of_process
    ps -eo comm,pid | grep '1$' >> files_of_process
}
find_proces
