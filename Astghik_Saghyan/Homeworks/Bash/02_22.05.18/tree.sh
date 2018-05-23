#The task is to print the last created files by given path and quantity



#%T@ gives you the modification time like a unix timestamp, sort -n sorts numerically, tail -$2 takes the last lines (highest timestamp), cut -f2 -d" " cuts away the first field (the timestamp) from the output.





find $1 -type f -printf '%T@ %p\n'  | sort -n  | tail -$2 | cut -f2- -d" "
