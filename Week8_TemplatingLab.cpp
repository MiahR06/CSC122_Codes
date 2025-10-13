#include <iostream>
#include <functional>
#include <vector>
#include <cassert>
using namespace std;

template<class T> vec_fill(T elem){
    vector<T> vec;
    int addToElem = 0;
    for (int i=0; i <= 10; i++){
        vec.push_back(elem + addToElem);
        addToElem++;
    }
    return elem;
}

template<class T>
until(T elem, function<T(T)> func, function<bool(T)> predicate){
    while(!predicate(elem)){
        elem = func(elem);
    }
}

template<class T> order(T& a, T& b, T& c){
    T hold;
    if (a > b && a > c){
        a = a;
        if (b > c){
            b = b;
        }else if (c > b){
            hold = c;
            c = b;
        }
    }else if (b > a && b > c){
        hold = a;
        a = b;
        if (a > c){
            b = hold;
        }else if (c > a){
            b = c;
            c = hold;
        }
    }else if (c > a && c > b){
        hold = a;
        a = c;
        if (a > b){
            c = b;
            b = hold;
        }else if (b > a){
            a = hold;
        }
    }
}

int main(){

    return 0;
}