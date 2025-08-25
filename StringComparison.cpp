#include <iostream>
#include <string>
using namespace std;

void strcmp_case_insensitive(string str1, string str2);

int main() {
    
    strcmp_case_insensitive("", "");

    return 0;
}

void strcmp_case_insensitive(string str1, string str2){
    
    if (str1 < str2){
        cout << "The comparison of 'String one' and 'string two' returns -1.\n";
        return -1;
    }else if(str1 == str2){
        cout << "The comparison of 'String one' and 'string one' returns 0.\n";
        return 0;
    }else if(str1 > str2){
        return 1;
    }
    

}