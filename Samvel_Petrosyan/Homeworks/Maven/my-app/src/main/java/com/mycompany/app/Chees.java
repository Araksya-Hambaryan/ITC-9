package com.itc9.app;

class Chees {
    public static void main(String[] args) {
        Bord bord = new Bord();
        char [][] newBord = bord.creatBordDef();    

        for (int i=0; i < 26; ++i) {
            for(int j=0; j<34; ++j) {
                System.out.print(newBord[i][j]) ;     
            }
            System.out.println();
        }
    }
}
