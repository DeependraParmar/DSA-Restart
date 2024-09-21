#include <iostream>
using namespace std;

void changeValue(int arr[], int n){
    for(int i=0; i<n; i++)
        arr[i] *= 2;
    
    return;
}
void print(int arr[], int n){
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
}
int main(){
    // Pass by reference is used to get the changes made by the function in the original data structure by passing the address. Generally used for non-primitive data types or structures.

    int arr[] = {1, 2, 3};   
    cout << "Array before: ";
    print(arr, 3);

    changeValue(arr, 3);

    cout << endl << "Array after: ";
    print(arr, 3);
    
    return 0;
}