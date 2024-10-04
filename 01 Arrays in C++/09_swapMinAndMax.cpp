#include <iostream>
#include <limits.h>
using namespace std;

void print(int arr[], int n){
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    
    return;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int minIndex = -1, maxIndex = -1;
    int max = INT_MIN, min = INT_MAX;

    cout << "Array before swap: ";
    print(arr, 10);

    for(int i=0; i<10; i++){
        if(arr[i] > max){
            max = arr[i];
            maxIndex = i;
        }

        if(arr[i] < min){
            min = arr[i];
            minIndex = i;
        }
    }  

    swap(arr[minIndex], arr[maxIndex]);

    cout << endl << "Array after swap:  ";
    print(arr, 10); 

    return 0;
}