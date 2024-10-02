#include <iostream>
using namespace std;

int linearSearch(int arr[],int target, int n){
    for(int i=0; i<n; i++){
        if(arr[i] == target)
            return i;
    }

    return -1;
}
int main(){
    int arr[5] = {10, 18, 93, 32, 20};
    int target;
    cout << "Enter the target to search: ";
    cin >> target;

    cout << "Element found at index: " << linearSearch(arr, target, 5) << endl;
    return 0;
}