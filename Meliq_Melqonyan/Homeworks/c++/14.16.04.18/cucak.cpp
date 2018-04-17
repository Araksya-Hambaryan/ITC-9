#include <iostream>
#include <string>

struct File {
    std :: string anun;
    std :: string amisAmsativ;
};

int main() {
    File arr[3] = {{"Meliq", "15/02/18 10:30"}, {"Arman", "11/03/25 11:15"}, {"Anush", "15/12/06 21:15"}};
    std :: string str;
    do {
        std :: cout << "nermuceq exit cragir@ kangnecnelu hamar" << std :: endl;
        std :: cout << "karoxeq nermucel  Meliq,Anush,Arman,15/02/18 10:30,11/03/25 11:15,15/12/06 21:15" << std :: endl;
        std :: getline (std :: cin, str);
        for(int i = 0; i < 3; ++i) {
            if(str == arr[i].anun || str == arr[i].amisAmsativ) {
                if(str[0] != '1') {
                    std :: cout << arr[i].amisAmsativ << std :: endl << std :: endl;
                    break;
                } else  {
                    std :: cout << arr[i].anun << std :: endl << std :: endl;
                    break;
                } 
            } 
        }
    } while(str != "exit");
    return 0;
}
