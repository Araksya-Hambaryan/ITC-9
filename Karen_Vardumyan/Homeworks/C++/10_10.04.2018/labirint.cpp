#include<iostream>
void  move (char arr[12][12],char &,int &, int & );
int main () {
    int i;               //syuneri indeksnery
    int j;               //toxeri indeksnery
    char uxutyun = '>';  // skzbnakan pahin obyekti gtnvelu vayry ev uxutyuny
    i = 2;               //
    j = 0;               //
    std::cout<<"\nSexmeq ENTER vorpesi tesneq obyekti hajord qaylery\n";
    char arr[12][12] = {

        '#','#','#','#','#','#','#','#','#','#','#','#',
        '#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','#',
        ' ',' ','#',' ','#',' ','#','#','#','#',' ','#',
        '#','#','#',' ','#',' ',' ',' ',' ','#',' ','#',
        '#',' ',' ',' ',' ','#','#','#',' ','#',' ',' ', //<--- kety ete poxenq # nshanov
        '#','#','#','#',' ','#',' ','#',' ','#',' ','#', //     obyekty elq chgtnelov het kga ir 
        '#',' ',' ','#',' ','#',' ','#',' ','#',' ','#', //     skzbnakan vichak. cragiry kasi
        '#','#',' ','#',' ','#',' ','#',' ','#',' ','#', //     vor eql chka
        '#',' ',' ',' ',' ',' ',' ',' ',' ','#',' ','#',
        '#','#','#','#','#','#',' ','#','#','#',' ','#',
        '#',' ',' ',' ',' ',' ',' ','#',' ',' ',' ','#',
        '#','#','#','#','#','#','#','#','#','#','#','#'};    

    move(arr,uxutyun,i,j);
    return 0;
}
void  move (char arr[12][12],char &uxutyun,int &i, int &j ){
    if (11 == j || 11 == i || 0 == i){    //ete obrkty durs ga labirinti > ^ v nshvac 3 uxutyunneric
        std::cout<<"Hasanq tex!!!\n\n";   //apa labirintic elq ka,hakarak dequm ete elqy lini labirinti 
        return;                           // < koxmic uremn obyekty elq chgtnelov het e ekel 
    }
    if(0 == j && '<' == uxutyun){
	std::cout<<"Elq chka(((\n\n";
	return;
    }
    if ('o' ==  arr[i][j]){
        arr[i][j] = ' ';
    }
    switch(uxutyun){
    	case '>' :{ 
            if ('#' != arr[i+1][j]){
                i = i + 1;
                uxutyun = 'v';
                break;
            } else if ('#' != arr[i][j+1]){
	        j = j + 1;
	        break;
	    } else if ('#' != arr[i-1][j]) {
	        i = i - 1;
                uxutyun = '^';
	        break;
	    } else {
	    	uxutyun = '<';
	    	break;
       	    }

        }  
        case '<':{
	    if('#' != arr[i-1][j]){
	    	i = i - 1;
            	uxutyun = '^';
	    	break;
	    } else if ('#' != arr[i][j-1]){
	    	j = j - 1;
	    	break;
	    } else if ('#' != arr[i+1][j]){
	    	i = i + 1;
	    	uxutyun = 'v';
	    	break;
	    } else {
	    	uxutyun = '>';
	    }
        }
	case '^': {
	    if('#' != arr[i][j+1]){
	        j = j + 1;
	        uxutyun = '>';
	        break;
	    } else if ('#' != arr[i-1][j]){
	    	i = i - 1;
	    	break;
	    } else if ('#' != arr[i][j-1]){
	    	j = j - 1;
	    	uxutyun = '<';
	    	break;
	    } else {
	    	uxutyun = 'v';
	    	break;
	    }
	}
        case 'v': {
	    if('#' != arr[i][j-1]){
	     	j = j - 1;
	    	uxutyun = '<';
	    	break;
	    } else if ('#' != arr[i+1][j]){
	    	i = i + 1;
	    	break;
	    } else if ('#' != arr[i][j+1]){
	    	j = j + 1;
	    	uxutyun = '>';
	    	break;
	    } else {
	    	uxutyun = '^';
	    	break;
	    }
	}
    }
    if (' ' == arr[i][j]){
	arr[i][j] = 'o';
    }
    std::cout<<"\n\ni = "<<i<<"\n";
    std::cout<<"j = "<<j<<"\n";
    std::cout<<"Uxutyun  "<<uxutyun<<"\n";
    for(int k = 0; k < 12; ++k){
        for(int n = 0; n <12; ++n){
            std::cout<<arr[k][n]<<" ";
        }
        std::cout<<"\n";
    }
    std::cin.ignore();
    move(arr,uxutyun,i,j);
}

