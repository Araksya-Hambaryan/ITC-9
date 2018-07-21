package com.itc9.app;

import java.*;
import www.itclib.lib.MyLib;

//import www.itclib.lib.MyLib.fileProc;

/**
 * Hello world!
 *
 */
public class App 
{
    public static void main( String[] args )
    {
        System.out.println( "Hello World!" );
        MyLib lib1 = new MyLib(); 
        lib1.fileProc("input.txt");
    }
}
