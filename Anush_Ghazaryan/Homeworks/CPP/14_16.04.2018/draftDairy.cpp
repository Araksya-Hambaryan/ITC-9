#include <iostream>
#include <string>
#include <vector>
struct Info {

    std::string name;
    std::string date;

    Info( std::string name1, std::string date1 ) {

	name = name1;
	date = date1;
    }
};

int main() {

    Info* info1 = new Info( "Anahit", "12/03/2016" );
    Info* info2 = new Info( "Elya", "15/01/2014" );
    Info* info3 = new Info( "Garik", "10/04/2015" );
    Info* info4 = new Info( "Razmik", "02/09/2017" );
    Info* info5 = new Info( "Amalya", "13/12/2012" );

    std::vector<Info> data;
    data.push_back(info1);
    data.push_back(info2);
    data.push_back(info3);
    data.push_back(info4);
    data.push_back(info5);
    

    

    

return 0;
}
