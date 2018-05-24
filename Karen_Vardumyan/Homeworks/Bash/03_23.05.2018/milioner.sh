#!bin/bash
gumar=0
count=5000
mrcanak=50000

harc1 () {
echo " "
echo "Harc1: Nashvacneric vorn e ashxarum taracqov amenamec erkiry?"
echo "             1.Brazilia     2.Chinastan"
echo "             3.Rusastan    4.Kanada"
read -p "Dzer patasxany " patasxan
if [ $patasxan = "Rusastan" ]
    then
    let gumar=$gumar+$count
    echo "Chisht patasxan duq vastakum eq $gumar dram"
    if [ $gumar = $mrcanak ]
   	then
	echo "Duq patasxaneciq bolor harcerin" 
	exit
    fi
else
    echo "Sxal patasxan"
    exit
fi
echo " "
}

harc2 () {
echo " "
echo "Harc2: Vor tvakanin e qristoneutyuny hayastanum yndunvel vorpes petakan kron?"
echo "             1. 451     2. 301"
echo "             3. 358     4. 601"
read -p "Dzer patasxany " patasxan
if [ $patasxan = "301" ]
    then
    let gumar=$gumar+$count
    echo "Chisht patasxan duq vastakum eq $gumar dram"
    if [ $gumar = $mrcanak ]
        then
        echo "Duq patasxaneciq bolor harcerin" 
        exit
    fi
else
    echo "Sxal patasxan"
    exit
fi
echo " "
}
harc3 () {
echo " "
echo "Harc3: Vorn e ashxari amenaerkar gety"
echo "             1. Amazon     2. Nexos"
echo "             3. Yanczi     4. Volga"
read -p "Dzer patasxany " patasxan
if [ $patasxan = "Nexos" ]
    then
    let gumar=$gumar+$count
    echo "Chisht patasxan duq vastakum eq $gumar dram"
    if [ $gumar = $mrcanak ]
        then
        echo "Duq patasxaneciq bolor harcerin" 
        exit
    fi
else
    echo "Sxal patasxan"
    exit
fi
echo " "
}
harc4 () {
echo " "
echo "Harc4: Ov e qimiakan tarreri parberakan axyusaki hexinaky?"
echo "             1. Tesla       2. Nyuton"
echo "             3. Enshtein    4. Mendeleyev"
read -p "Dzer patasxany " patasxan
if [ $patasxan = "Mendeleyev" ]
    then
    let gumar=$gumar+$count
    echo "Chisht patasxan duq vastakum eq $gumar dram"
    if [ $gumar = $mrcanak ]
        then
        echo "Duq patasxaneciq bolor harcerin" 
        exit
    fi
else
    echo "Sxal patasxan"
    exit
fi
echo " "
}
harc5 () {
echo " "
echo "Harc5: Vorn e Italiai mayraqaxaqy?"
echo "             1. Hrom       2. London"
echo "             3. Berlin     4. Marsel"
read -p "Dzer patasxany " patasxan
if [ $patasxan = "Hrom" ]
    then
    let gumar=$gumar+$count
    echo "Chisht patasxan duq vastakum eq $gumar dram"
    if [ $gumar = $mrcanak ]
        then
        echo "Duq patasxaneciq bolor harcerin" 
        exit
    fi
else
    echo "Sxal patasxan"
    exit
fi
echo " "
}
harc6 () {
echo " "
echo "Harc6: Qani ovkianios ka erkir moloraki vra?"
echo "             1. 3     3. 4"
echo "             3. 2     4. 5"
read -p "Dzer patasxany " patasxan
if [ $patasxan = "4" ]
    then
    let gumar=$gumar+$count
    echo "Chisht patasxan duq vastakum eq $gumar dram"
    if [ $gumar = $mrcanak ]
        then
        echo "Duq patasxaneciq bolor harcerin" 
        exit
    fi
else
    echo "Sxal patasxan"
    exit
fi
echo " "
}
harc7 () {
echo " "
echo "Harc7: Nshvacneric vorn e uji chapman miavory?"
echo "             1. Paskal     3. Nyuton"
echo "             3. Joul       4. Kilogram"
read -p "Dzer patasxany " patasxan
if [ $patasxan = "Nyuton" ]
    then
    let gumar=$gumar+$count
    echo "Chisht patasxan duq vastakum eq $gumar dram"
    if [ $gumar = $mrcanak ]
        then
        echo "Duq patasxaneciq bolor harcerin" 
        exit
    fi
else
    echo "Sxal patasxan"
    exit
fi
echo " "
}
harc8 () {
echo " "
echo "Harc8: Ov e haytnaberel amerika mayrcamaqy?"
echo "             1. Kolombos        3. Vasko Da Gama"
echo "             3. Magelan         4. Garibaldi"
read -p "Dzer patasxany " patasxan
if [ $patasxan = "Kolombos" ]
    then
    let gumar=$gumar+$count
    echo "Chisht patasxan duq vastakum eq $gumar dram"
    if [ $gumar = $mrcanak ]
        then
        echo "Duq patasxaneciq bolor harcerin" 
        exit
    fi
else
    echo "Sxal patasxan"
    exit
fi
echo " "
}
harc8 () {
echo " "
echo "Harc8: Vor tvakanin e texi unecel avarayri chakatamarty?"
echo "             1. 502        3. 451"
echo "             3. 452        4. 455"
read -p "Dzer patasxany " patasxan
if [ $patasxan = "451" ]
    then
    let gumar=$gumar+$count
    echo "Chisht patasxan duq vastakum eq $gumar dram"
    if [ $gumar = $mrcanak ]
        then
        echo "Duq patasxaneciq bolor harcerin" 
        exit
    fi
else
    echo "Sxal patasxan"
    exit
fi
echo " "
}
harc9 () {
echo " "
echo "Harc9: Neshvacneric vorn e hosanqi chpaman miavory?"
echo "             1. Volt        3. Amper"
echo "             3. Tesla       4. Joul"
read -p "Dzer patasxany " patasxan
if [ $patasxan = "Amper" ]
    then
    let gumar=$gumar+$count
    echo "Chisht patasxan duq vastakum eq $gumar dram"
    if [ $gumar = $mrcanak ]
        then
        echo "Duq patasxaneciq bolor harcerin" 
        exit
    fi
else
    echo "Sxal patasxan"
    exit
fi
echo " "
}

harc10 () {
echo " "
echo "Harc10: Nshvac tarberakneric vorn e avelodrdy"
echo "             1. Ubuntu        3. Fedora"
echo "             3. Windows       4. Linux Mint"
read -p "Dzer patasxany " patasxan
if [ $patasxan = "Windows" ]
    then
    let gumar=$gumar+$count
    echo "Chisht patasxan duq vastakum eq $gumar dram"
    if [ $gumar = $mrcanak ]
        then
        echo "Duq patasxaneciq bolor harcerin" 
        exit
    fi
else
    echo "Sxal patasxan"
    exit
fi
echo " "
}
echo -e "harc2\nharc1\nharc3\nharc4\nharc5\nharc6\nharc7\nharc8\nharc9\nharc10" | sort -R >> $0
