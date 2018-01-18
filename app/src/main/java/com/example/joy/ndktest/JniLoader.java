package com.example.joy.ndktest;

/**
 * Created by joy on 18-1-18.
 */

public class JniLoader {
    static {
        System.loadLibrary("firstndk");
    }

    public native String getHelloString();
}
