#include<iostream>



int main (){

	char array[10]; /*nermucvac teksty */
	int i;
	char arajin;/* arajin pakvox pakagic, aysinqn ayn pakagicy vory petk e arajiny pakvi*/
	char pakox; /* ete arajiy { ays pakagicn e pakoxy klini } */
	char chpakox; /*ete arajiny { ays e chpakoxy klini ] */
	int qanak = 0; /*pakagceri yndanur qanak */

	std::cout<<"Nermuceq 10 simvolic baxkacac tekst vory kparunaki pakagcer ";
	for (i=0; i<10; i++){
	    std::cin>>array[i];
	}

	int arajinindex; /*arajin handipac pakagci indeksy */
	i = 0;
	while(i<10){
	    if(array[i] == ']' || array[i] == '}'){
		std::cout<<"Error "<<i<<" indkesi pakagicy chi karox pakvel aranc bacvelu\n";
		break;
	    } else if (array[i] == '[' || array[i] == '{'){
	    	arajin = array[i];
		arajinindex = i;
		break;
	    }else{
	 	i++;
	    }
	}
	
	for(i=0; i<10; i++){
	    if(array[i] == ']' || array[i] == '}' || array[i] == '[' || array[i] == '{'){
		qanak++;
	    }
	}
	
	
	if(arajin == '['){
	    pakox = ']';
	    chpakox = '}';
	}else{
	    pakox = '}';
	    chpakox = ']';
	}

        char maspak[qanak];/*masivi mej lcrel em bolor pakagcer miayn*/
	int indeks[qanak]; /*masivi mej lcrel em nranc indeksnery*/

	int k = arajinindex + 1; /*hamematucyuny sksvum e arajin pakagcic heto */
	int m = 1; /*pakagcery parunakox masivi indeksnery*/
	int d = 1; /*indeksnery parunakox masivi indeksnery*/

	maspak[0] = arajin;
	indeks[0] = arajinindex;

 	
	while (k < 10){
	
		if(arajin == '['){
	            pakox = ']';
        	    chpakox = '}';
    	        }else{
            	    pakox = '}';
                    chpakox = ']';
                }

     



          if (array[k] == '['){
		arajin = '[';
		maspak[m] = '[';
		m = m+1;
		indeks[d] = k;
		d = d +1;
		k++;		
	    }else if (array[k] == '{'){
		arajin = '{';
		maspak[m]= '{';
		m = m +1;
		indeks[d]= k;
		d = d+1;
		k++;
	    }else if(array[k] == chpakox){
		std::cout<<"Error ----- "<<indeks[d-1]<<" indeksc heto  \n";
		break;

	    }else if (array[k] == pakox){
		arajin = maspak[m-1];
		m = m - 1;
		indeks[d-1] = k;
		d = d -1;
		k++;
		
	    }else {
  		k++;
	    }
	

	}

	if(qanak/2 != 0){
                std::cout<<indeks[d-1]<<" indeksic ic heto pakagicy chi pakvel \n";
	}

	return 0;
}
