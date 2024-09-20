#include <iostream>
using namespace std;

int main(){
    // Arrays are used to store multiple variables in a single variable.
    // 1. Stores same type of data ------> Homogenous Data
    // 2. Contiguous in memory --------------> in memory, data is stored in continuous memory
    // 3. linear data structure

    // defining an array
    int marks1[5];

    // defining and initializing an array with values
    int marks2[] = {1, 2, 3, 4, 5};

    // accessing values of the array

    for(int i=0; i<5; i++)
        cout << marks2[i] << " ";

    return 0;
}