//
// Created by Luzh on 2018/10/30.
//

#ifndef SINGLETONMODE_SINGLETON_H
#define SINGLETONMODE_SINGLETON_H

class Singleton {
public:
    ~Singleton();
    void show();
    static Singleton* getInstance();
    static void releaseInstance();
private:
    static Singleton *mSingleton;
    // 注意构造函数一定要声明并且定义, 否者会出现如下错误:
    // Undefined symbols for architecture x86_64:
    // "Singleton::Singleton()", referenced from:
    // Singleton::GetInstance() in Singleton.cpp.o
    // ld: symbol(s) not found for architecture x86_64
    // clang: error: linker command failed with exit code 1 (use -v to see invocation)
    Singleton();
};

#endif //SINGLETONMODE_SINGLETON_H
