#include <iostream>
#include <functional>
#include <cassert>
using namespace std;

int until(int x, function<int(int)> f, function<bool(int)> g){
    while (!g(x)){
        x = f(x);
    }
    
    return x;
}

int double_number(int x){       // Case 1
    return x * 2;
}

int halve_number(int x){        // Case 2
    return x / 2;
}

int add_5(int x){               // Case 3
    return x + 5;
}

int sub_5(int x){               // Case 4
    return x - 5;
}

int greater_than_100(int x){    // Case 1 Condition
    return x > 100;
}

int less_than_2(int x){         // Case 2 Condition
    return x < 2;
}

int positive_num(int x){        // Case 3 Condition
    return x > 0;
}

int negative_num(int x){        // Case 4 Condition
    return x < 0;
}

int main(){

    // Test case 1
    assert(until(1, double_number, greater_than_100));

    // Test case 2
    assert(until(80, halve_number, less_than_2));

    // Test case 3
    assert(until(-100, add_5, positive_num));

    // Test case 4
    assert(until(39, sub_5, negative_num));

}