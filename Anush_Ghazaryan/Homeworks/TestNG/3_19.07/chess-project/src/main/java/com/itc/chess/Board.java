package com.itc.chess;

import java.util.Scanner;
public class Board {
    public static char[][] board = { 
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                            };
    public static void defaultBoard() {
        for (int i = 0; i < 8; ++i) {
            for (int j = 0; j < 8; ++j) {
                board[7][0] = '\u2656';
                board[7][7] = '\u2656';
                board[7][1] = '\u2658';
                board[7][6] = '\u2658';
                board[7][2] = '\u2657';
                board[7][5] = '\u2657';
                board[7][3] = '\u2655';
                board[7][4] = '\u2654';
                board[0][0] = '\u265C';
                board[0][7] = '\u265C';
                board[0][1] = '\u265E';
                board[0][6] = '\u265E';
                board[0][2] = '\u265D';
                board[0][5] = '\u265D';
                board[0][3] = '\u265B';
                board[0][4] = '\u265A';
                if (i == 1) {
                    board[i][j] = '\u265F';
                }
                if (i == 6) {
                    board[i][j] = '\u2659';
                }
            }
        }
    }
    public static void printBoard() {
        System.out.print("   _______________________________");
        System.out.print("\n");
        for (int i = 0; i < 8; ++i) {
            System.out.print(i+1);
            for (int j = 0; j < 8; ++j) {
                System.out.print(" | ");
                System.out.print(board[i][j]);
            }
            System.out.print(" | ");
            System.out.print("\n");
            System.out.print("  |___|___|___|___|___|___|___|___|");
            System.out.print("\n");
        }
        System.out.println();
        System.out.println("    A   B   C   D   E   F   G   H");
        System.out.println();

    }
    public static char getSimb(int x, int y) {
        return board[x][y];
    }
    public static void remove(int x, int y) {
        board[x][y] = ' ';
    }
    public static void add(int x, int y, char simb) {
        board[x][y] = simb;
    }
}
