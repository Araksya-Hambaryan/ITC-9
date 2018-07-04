class Bord {
    public char[][] creatBordDef() {
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
	for(int i=3; i<34; i=i+4) {
            arr[6][i] = 'S';
        }
	for(int i=3; i<34; i=i+4) {
            arr[21][i] = 's';
        }
        arr[3][3] = 'R';
	arr[3][31] = 'R';
	arr[3][7] = 'H';
	arr[3][27] = 'H';
	arr[3][11] = 'B';
	arr[3][23] = 'B';
	arr[3][15] = 'Q';
	arr[3][19] = 'K';
	arr[24][3] = 'r';
        arr[24][31] = 'r';
        arr[24][7] = 'h';
        arr[24][27] = 'h';
        arr[24][11] = 'b';
        arr[24][23] = 'b';
        arr[24][15] = 'q';
        arr[24][19] = 'k';
	return arr;
    }
}
