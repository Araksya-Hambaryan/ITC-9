git --version 
git clone $1 
if [ $? -ne 0 ] 
then
    echo error
    exit 
fi
a=$(find -name *.cpp)
c=1
mkdir cpp
for b in $a
do
    g++ --std=c++11 $b -o $c.out
    mv $c.out cpp
    let c=$c+1
done
find -name Makefile > file
sed 's/Makefile//gc' > file
h=$(cat file)
for t in $h
do
    cd $t
    make
    cd -
    r=$(ls -l $t | sort -r | head)
   mv $b$r cpp 
done





