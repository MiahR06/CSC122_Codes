#include <iostream>
using namespace std;

void practice1(void);
void practice2(void);
void practice3(void);
void practice4(void);
void practice5(void);

int linearSearch(int arr[5], int size, int target);     // Linear search for practice2

int main(){

    //practice1();

    //practice2();

    practice3();

}

void practice1(void){
    int a, b;
    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter another integer: ";
    cin >> b;

    int* ptr_a = &a;        // Pointer for a
    int* ptr_b = &b;        // Pointer for b

    cout << "\nYou entered " << *ptr_a << " and " << *ptr_b;    // Dereferences pointers to print out original variables
}

void practice2(void){

    int arr[5] = {24, 9, 13, 53, 21};       // Unsorted array
    linearSearch(arr, 5, 53);               // LinearSearch to find the max number
    int* max_ptr = arr;                     // Pointer set equal to array

    cout << "maximum value: " << *max_ptr;  // Dereferenced

}

void practice3(void){

    char str[] = "This is a c-Style String";

    char* ptr = str[];          // Char pointer because it has to point to a character
    int count = 0;

    while (ptr != '\0'){        // Loops until pointer reaches the null character
        ptr++;                  // Moves pointer to the next char
        count++;                // Increases each time the pointer moves
    }

    cout << "The pointer visited " << count << " cells";

}

/*
Write a program to calculate the length of a string using a pointer.

Create a C-style string which is an array of chars. Then, create a pointer that points to the start of the array. Move the pointer through the string until you reach the null character \0, and then print out how many cells it visited.
*/

void practice4(void){


}

void practice5(void){


}



int linearSearch(int arr[5], int size, int target){

    for (int i=0; i<size; i++){
        if (arr[i] == target){
            arr[0] = target;
            return i;
        }
    }
    return -1;
}