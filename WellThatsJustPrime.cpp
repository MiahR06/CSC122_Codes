#include <iostream>
#include <vector>
using namespace std;

int primeFactorsHelper(int n, int divisor, vector<int> arrayList);
int printArray(vector<int> arrayList);
//int primeFactor(int n);

int main(){

    //primeFactors(10);
    
    return 0;
}

int primeFactorsHelper(int n, int divisor, vector<int> arrayList){

    if (n <= 1){
        return printArray(arrayList);
    }else if(n % divisor == 0){
        arrayList.push_back(divisor);
        return primeFactorsHelper(n/divisor, divisor, arrayList);
    }
}

int printArray(vector<int> arrayList){
    for (int i=0; i<arrayList.size(); i++){
        cout << arrayList[i] << "  ";
    }
}

/*int primeFactor(int n){

}*/