package com.phone;

public class OperatingSystemFactory {

    public OS getInstance(String str){

        if(str.equals("OpenPlatform")) {

            return new Android();

        }else if(str.equals("ClosedPlatform")){

            return new IOS();

        } else {

            return  new Windows();
        }
    }
}
