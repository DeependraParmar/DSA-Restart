#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int arr[] = {10, -19, 48, 92, 58, 74};
    
    int min = INT_MAX;

    for(int i=0; i<6; i++){
        if(arr[i] < min)
            min = arr[i];
    }

    cout << "Smallest element in the array is: " << min << endl;
    return 0;
}