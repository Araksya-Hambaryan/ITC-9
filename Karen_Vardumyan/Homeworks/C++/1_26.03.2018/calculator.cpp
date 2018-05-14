#include<iostream>

int main()
{
    float num1;
    float num2;
    char gorcoxutyun;
    std::cout<<"Nermuceq artahaytutyuny  tiv gorcoxutyun tiv  formatov ";
    std::cin>>num1>>gorcoxutyun>>num2;
    
    if(gorcoxutyun == '/'  &&  0 == num2){
        std::cout<<"Tivy chi kareli bajanel 0-i vra";
    } else if(gorcoxutyun == '+'){
        std::cout<< num1 + num2;
    }else if (gorcoxutyun == '-'){
        std::cout<< num1 - num2;
    }else if (gorcoxutyun == '*'){
        std::cout<< num1 * num2;
    }else if (gorcoxutyun == '/'){
        std::cout<< num1 / num2;
    }
    else {
        std::cout<<"Hashvichi mej kan miayn  +  -  *  / nshvac chors gorcoxutyunnery";
    }
    std::cout<<"\n";
    return 0;
}
