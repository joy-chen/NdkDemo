package com.example.joy.ndktest;

import android.util.Log;

import java.security.PublicKey;

/**
 * Created by joy on 18-1-18.
 */

public class JniLoader {
    static {
        System.loadLibrary("firstndk");
        System.loadLibrary("jnidynamic");
    }

    public String getJniHelloString() {
        return getHelloString();
    }

    public int initNative() {
        return doTwo(1, 2);
    }

    private native String getHelloString();
    public native int doTwo(int param1, int param2);
}
