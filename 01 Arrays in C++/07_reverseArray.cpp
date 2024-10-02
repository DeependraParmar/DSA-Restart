#include <iostream>
using namespace std;

void reverseArray(int arr[], int n){
    int start = 0;
    int end = n-1;

    while(start <= end)
        swap(arr[start++], arr[end--]);
    
    return;
}

void print(int arr[], int n){
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    cout << "Before reversing: ";
    print(arr, 10);

    reverseArray(arr, 10);

    cout << endl << "After reversing: ";
    print(arr, 10);

    return 0;
}