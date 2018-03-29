#include <iostream>
# include <iomanip>
using namespace std;
 
int main()
{
    char underscore;
    int taretiv;
    int amis;
    int amsativ;
    cin>>taretiv; //год
    cin.ignore();    //точка
    cin>>amis; //месяц
    cin>>underScore;    //точка
    cin>>setw(2)>>amsativ; //дата
    cout<<"\n\n"<<taretiv<<'\t'<<amis<<'\t'<<amsativ;
}
