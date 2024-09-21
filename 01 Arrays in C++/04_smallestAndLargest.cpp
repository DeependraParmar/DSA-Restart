#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int arr[] = {10, -19, 48, 92, 58, 74};
    
    int minimum = INT_MAX;
    int maximum = INT_MIN;

    for(int i=0; i<6; i++){
        minimum = min(minimum, arr[i]);
        maximum = max(maximum, arr[i]);
    }

    cout << "Smallest element in the array is: " << minimum << endl;
    cout << "Largest element in the array is: " << maximum << endl;
    return 0;
}