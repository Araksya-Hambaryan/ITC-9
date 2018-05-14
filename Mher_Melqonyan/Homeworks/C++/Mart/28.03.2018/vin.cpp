#include <iostream>
#include <iomanip>

int
main (){
  int taretiv;
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
  if (taretiv > 2018 || taretiv < 1970 || amis > 12 || amis < 1
      || amsativ > 31 || amsativ < 1){
      std::cout << "tvyalner@ sxal en" << std::endl;
    }else{
      if (amis == 4 || amis == 6 || amis == 9 || amis == 11){
	  if (amsativ > 30){
	      std::cout << "hetevyal amis@ uni 30 or" << std::endl;
	    }
	}else if (amis == 2 && taretiv % 4 == 0 && amsativ > 29){
	  std::cout << "ayd tari petrvar@ uner 29 or " << std::endl;
    }else if (amis == 2 && taretiv % 4 != 0 && amsativ > 28){
	  std::cout << "ayd tari petrvar@ uner 28 or " << std::endl;
	}else{
	  if (amis == 1 || amis == 2 || amis == 3 || amis == 10 || amis == 11
	      || amis == 12){
	      if (amsativ == 1 || amsativ == 20 || amsativ == 30 && amis != 2
		  || amsativ == 10 || amsativ == 11 || amsativ == 12
		  || amsativ == 21){
		  for (int i = 0; i < 2; ++i){
		      res = amis % 10;
		      amis1 = amis1 * 10 + res;
           
		      amis /= 10;
		      res1 = amsativ % 10;
		      amsativ1 = amsativ1 * 10 + res1;
		      amsativ  /= 10;
		    }

		}
	      std::cout << "aylmolorakainner@ kgan" << std::endl;
	      std::cout << taretiv << " " << amsativ1<< "_" << amis1;

	    } else {
	      std::cout << "aylmolorakainner@ chen ga" << std::endl;

	    }

	}
    }
return 0;
}




