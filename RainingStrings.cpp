#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){

    string bNames;          // variable for business names
    vector<string> business = {""};

    cout << "Welcome to the Business Sorting Program!\n";

    cout << "Please enter the name of a business: ";
    cin >> bNames;

    business.push_back(bNames);

    cout << "Your business is: " << business[0];

    return 0;
}