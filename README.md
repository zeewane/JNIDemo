# JNIDemo
近期工作需要用java去调用c那边的方法，中间使用JNI层，所以学习了一些JNI的基本使用。主要从下面几点来整理和学习，均为从csdn大神 [阁楼猫](http://blog.csdn.net/tsdfk1455/article/category/6554867) 的博客和百度其他的资料中获得。
- JNI是什么
- c & c++的基本语法
- 命令行编译java
- hello jni
- c传递参数给JNI函数
- JNI函数调用java的方法
- JNI函数使用java传递进来的对象的属性
- JNI函数对字符串的处理
- 开发流程整理
- c代码编译
- tips




主要就是遇到过的一些坑，首先就是编译java的时候，因为都会有带着包名，所以命令行执行的时候尤其要注意

其次就是load的时候，其实是支持两种方式的load dll，一个是写路径和文件名，一个就是写dll名字，后者需要将dll的目录给加到系统的path环境变量中去，前者使用更方便


update at 2017-11-14 13:39:08
今天晚上更新JNI常用的转换工具类