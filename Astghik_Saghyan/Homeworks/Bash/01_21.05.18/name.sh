#while getopts "n:" OPTION
#do
#    case $OPTION in
#        n)
#            echo $OPTARG
#            exit
#            ;;
#        \?)
#            echo "Used for the help menu"
#            exit
#            ;;
#    esac
#done

#Urish tarberak chkaroghaca gtnel

while [ ! $# -eq 0 ]
do
    case "$1" in
        -name)
            echo $2
            exit
            ;;
        *)
            echo "Try again"
            exit
            ;;
    esac
    shift
done

