#!bin/bash
mkdir dir1
cd dir1/
touch f{1,2,3,4}

for i in {1,2,3,4}; do
base64 /dev/urandom | head -c 1024 > f$i
done
for i in {1..4}; do 
    cnt=$(head -n 1 "f$i" | grep a)
   if ! [ ${#cnt} == 0 ] 
   then
       rm -rf "f$i"
   fi
   done
   cd ..
 rm -R dir1/

