#include <iostream>
#include <iomanip>

int main () {
  int taretiv;
  int memAmis;
  int memAms;
  int amis;
  int amsativ;
  int amsativ1;
  int amis1;
  int res;
  int res1;
  std::cout<<"nermuceq taretiv" << std::endl;
  std::cin >> taretiv;
  std::cout<<taretiv<<"nermuceq amis@" << std::endl;
  std::cin >> amis;
  std::cout << taretiv << " " << amis <<"nermuceq amsativ@"<< std::endl;
  std::cin >> amsativ;
  memAmis = amis;
  memAms  = amsativ;
  if (2018 < taretiv || 1970 > taretiv || 12 < amis || 1 > amis
      || 31 < amsativ || 1 > amsativ) {
      std::cout << "tvyalner@ sxal en" << std::endl;
    } else {
      if (4 == amis || 6 == amis || 9 == amis ||11 == amis) {
	  if ( 30 < amsativ) {
	      std::cout << "hetevyal amis@ uni 30 or" << std::endl;
	    }
	} else if ( 2 == amis && 0 == taretiv % 4 && 29 < amsativ) {
	  std::cout << "ayd tari petrvar@ uner 29 or " << std::endl;
    } else if (2 == amis && 0 != taretiv % 4 && 28 < amsativ) {
	  std::cout << "ayd tari petrvar@ uner 28 or " << std::endl;
	} else {
	  if ( 1 == amis || 2 == amis || 3 == amis || 10 == amis || 11 == amis
	      || 12 == amis) {
	      if ( 1 == amsativ || 20 == amsativ || 30 == amsativ && 2 != amis
		  || 10 == amsativ || 11 == amsativ || 12 == amsativ
		  || 21 == amsativ) {
		  for (int i = 0; i < 2; ++i) {
		      res = amis % 10;
		      amis1 = amis1 * 10 + res;
           
		      amis /= 10;
		      res1 = amsativ % 10;
		      amsativ1 = amsativ1 * 10 + res1;
		      amsativ  /= 10;
		    }

		}
 std::cout << "amis amsativ" <<memAmis <<" "<< memAms << std::endl;
              std::cout << " " << amsativ1<< "_" << amis1;

	      if (amsativ1 * 100 + amis1 == memAmis * 100 + memAms) {	
	      std::cout << "aylmolorakainner@ kgan jamanakin" << std::endl;
	      std::cout << taretiv << " " << amsativ1<< "_" << amis1;
	         }
	      if (amsativ1 * 100 + amis1 < memAmis * 100 + memAms) {
	      std::cout << "aylmolorakainner@ kgan jamanakic shut" << std::endl;
              std::cout << taretiv << " " << amsativ1<< "_" << amis1;
                 }
              if (amsativ1 * 100 + amis1 > memAmis * 100 + memAms) {
              std::cout << "aylmolorakainner@ kushanan" << std::endl;
              std::cout << taretiv << " " << amsativ1<< "_" << amis1;
                 }

	    } else {
	      std::cout << "aylmolorakainner@ chen ga" << std::endl;

	    }

	}
    }
return 0;
}




