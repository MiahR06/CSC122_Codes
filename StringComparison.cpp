#include <iostream>
#include <string>
using namespace std;

int strcmp_case_insensitive(string str1, string str2);

int main() {
    
    strcmp_case_insensitive("string one", "string two");
    strcmp_case_insensitive("string one", "string one");
    strcmp_case_insensitive("string two", "string one");

    return 0;
}

int strcmp_case_insensitive(string str1, string str2){
 
    if (str1 < str2){
        cout << "The comparison of '" << str1 << "' and '" << str2 << "' returns -1.\n";
        return -1;
    }else if(str1 == str2){
        cout << "The comparison of '" << str1 << "' and '" << str2 << "' returns 0.\n";
        return 0;
    }else if(str1 > str2){
        cout << "The comparison of '" << str1 << "' and '" << str2 << "' returns 1.\n";
        return 1;
    }

    return 0;
}