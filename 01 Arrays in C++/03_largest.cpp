#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int arr[] = {10, -19, 48, 92, 58, 74};
    
    int max = INT_MIN;

    for(int i=0; i<6; i++){
        if(arr[i] > max)
            max = arr[i];
    }

    cout << "Largest element in the array is: " << max << endl;
    return 0;
}