#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){

    string b;                       // Variable for business names
    vector<string> business;        // Vector for business names

    string answer = "y";
    int amount = 0;             // Keep track of # of businesses

    cout << "Welcome to the Business Sorting Program!\n";

    do {
        cout << "\nPlease enter the name of a business: ";

        getline(cin, b);        // Getline is used to read spaces in input
        business.push_back(b);  // Add element to end of vector
        amount++;               // Increase amount by 1

        cout << "\nList of your business(es): " << endl;

        sort(business.begin(), business.end());     // Sorts vector from highest to lowest value

        for (int i=0; i < amount; i++){
            cout << business[i] << endl;            // Displays every element in the vector
        }
        
        cout << "\nAnother business? ";
        
        getline(cin, answer);
        
        while (true){
            if (answer[0] == 'y' || answer[0] == 'Y'){
                answer = "y";
                break;
            }else if (answer[0] == 'n' || answer[0] == 'N'){
                answer = "n";
                break;
            }else{
                cout << "Please enter yes or no: ";
                getline(cin, answer);
            }
        }

    }while (answer != "n");

    cout << "\nThank you for using the Business Sorting Program!";

    return 0;
}