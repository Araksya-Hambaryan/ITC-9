class Chees {
    public static void main(String[] args) {
        char[][] arr = new char[26][34];
	int num = 8;
	for (int i = 0; i < 25; ++i) {
		if (i%3 == 2) {
			arr[i+1][0] = Integer.toString(num).charAt(0);
			--num;	
		} else {
			arr[i+1][0] = ' ';
		}
	}
	char symb = 'A';
	for (int i = 0; i < 34; ++i) {
		if (i%4 == 3) {
			arr[0][i] = symb;
			++symb;
		} else {
			arr[0][i] = ' ';
		}
	}
	for (int i = 1; i < 34; ++i) {
		arr[1][i] = '_';
	}
	for (int i = 2; i < 26; ++i) {
		for (int j = 1; j < 34; ++j) {
			if ( i%3 == 1 ) {
				if(j%4 == 1 ) {
					arr[i][j] = '|';
				} else {
					arr[i][j] = '_';
				}
			} else {
				if(j%4 == 1 ) {
					arr[i][j] = '|';
				} else {
					arr[i][j] = ' ';
 				}
			}				
		}
	}
	for(int i = 0; i<26; ++i ) {
	    for(int j = 0; j<34; ++j) {
		System.out.print(arr[i][j]); 
	    }
            System.out.println();
  	}
    }

  

}
 




