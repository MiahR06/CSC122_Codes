#include <iostream>
#include <vector>
#include <string>
using namespace std;

int checkSymbol(char symbol);
int calculator(vector<string> digits);

int main(){

    vector<string> digits = {
        "257*233+6v790-12", 
        "61247833212+*9^3"
    };

    calculator(digits);

    return 0;
}

int checkSymbol(char symbol, int num, int total){
    if (symbol == '+'){
        return total + num;
    }else if (symbol == '-'){
        return total - num;
    }else if (symbol == '*'){
        return total * num;
    }
    return -1;
}

int calculator(vector<string> digits){

    
    
    

    return 1;
}

/*
Input:

257*233+6v790-12
61247833212+*9^3

We see 257, so we add those digits and get 14

Now, we reach a *, so we switch to multiplication.

We see 233, so we multiply those digits by our 14.

14 * 2 * 3 * 3 = 252

We reach a +, so we switch to addition.

We have a 6, so we add that and get 258.

We have a down arrow, so we go down a row

We have a 12, and we're still in addition, so we add those digits to 258 and get 261

Now we have a + so we switch to addition (which we were already in).

Now there's immediately a * so we go to multiplication.

We have a 9. 261 * 9 = 2349

Now we go up.

We have a 12. 2349 * 1 * 2 = 4698

We return to the up arrow and continue right.

We have a 3. 4698 * 3 = 14094

We return to the down arrow. Remember, we were in addition mode when we reached this point.

We have a 790. 14094 + 7 + 9 = 14110

We reach a - and switch to subtraction. 14110 - 1 - 2 = 14107.
*/