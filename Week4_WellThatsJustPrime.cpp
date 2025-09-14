#include <iostream>
#include <vector>
using namespace std;

int primeFactors(int n);
int primeFactorsHelper(int n, int d, vector<int> arrayList);    // Helper function
int printArray(vector<int> arrayList);                          // Function to print vector

int main(){

    primeFactors(0);
    primeFactors(1);
    primeFactors(9);
    primeFactors(10);

    primeFactors(100);
    
    return 0;
}

int primeFactors(int n){
    vector<int> arrayList;          // vector to hold factors
    return primeFactorsHelper(n, 2, arrayList);
}

int primeFactorsHelper(int n, int d, vector<int> arrayList){

    if (n <= 1){
        return printArray(arrayList);       // Calls function to print vector if the number has no factors
    }else if((n % d) == 0){                 
        arrayList.push_back(d);             // Adds divisor to vector
        return primeFactorsHelper(n/d, d, arrayList);        // Calls function again with a smaller n
    }else{
        return primeFactorsHelper(n, d+1, arrayList);        // Moves onto next divisor
    }

    return 1;
}

int printArray(vector<int> arrayList){
    for (int i=0; i<arrayList.size(); i++){
        cout << arrayList[i] << "  ";
    }
    cout << endl << endl;
    return 1;
}