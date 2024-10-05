#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 1, 5, 7, 8, 5, 8, 9, 8};
    cout << "Unique elements in the array are: ";

    for(int i=0; i<10; i++){
        bool isUnique = true;

        for(int j=0; j<10; j++){
            if(i==j)
                continue;

            if(arr[i] == arr[j]){
                isUnique = false;
                break;
            }
        }

        if(isUnique)
            cout << arr[i] << " ";
    }   
    return 0;
}