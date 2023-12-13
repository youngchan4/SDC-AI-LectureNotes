//
// Created by eddi on 23. 12. 11.
//

#ifndef YOUNGCHANHWANG_SINGLETON_H
#define YOUNGCHANHWANG_SINGLETON_H
#include<iostream>

class Singleton{
private:
    static Singleton* instance;
    Singleton(const Singleton& other);
    Singleton(){value = 5;};
    ~Singleton(){}; //생략가능
    int value;
public:
    static Singleton* GetInstance(){
        if(instance == NULL){
            instance = new Singleton();
        }
        return instance;
    }
    int GetValue(){return value;};
    void SetValue(int a){value = a;};
};
Singleton* Singleton::instance = nullptr;

#endif //YOUNGCHANHWANG_SINGLETON_H
