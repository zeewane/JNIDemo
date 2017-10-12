package com.github.zeewane.jni;

/**
 * 
 * @author zeewane
 */
public class JavaNative {

    public static void main(String[] args) {
        new JavaNative().helloJNI();
    }

    public native void helloJNI();

    
    // 加载dll
    static {
        System.load("E:\\code\\study\\c\\JNIDemo\\JNIDemo.dll");
    }

}
