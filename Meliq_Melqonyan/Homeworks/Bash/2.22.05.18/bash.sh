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





