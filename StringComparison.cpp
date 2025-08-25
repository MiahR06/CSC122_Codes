#include <iostream>
#include <string>
using namespace std;

int strcmp_case_insensitive(string str1, string str2);

int main() {
    
    strcmp_case_insensitive("string one", "string two");        // Should return -1
    strcmp_case_insensitive("string one", "string one");        // Should return 0
    strcmp_case_insensitive("string two", "string one");        // Should return 1

    return 0;
}

int strcmp_case_insensitive(string str1, string str2){
 
    if (str1 < str2){           // Checks if string1 is less than string2
        cout << "The comparison of '" << str1 << "' and '" << str2 << "' returns -1.\n";
        return -1;
    }else if(str1 == str2){     // Checks if string1 is equal to string2
        cout << "The comparison of '" << str1 << "' and '" << str2 << "' returns 0.\n";
        return 0;
    }else if(str1 > str2){      // Checks if string1 is greater than string2
        cout << "The comparison of '" << str1 << "' and '" << str2 << "' returns 1.\n";
        return 1;
    }

    return 0;
}