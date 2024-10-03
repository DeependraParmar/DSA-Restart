#include <iostream>
using namespace std;

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum = 0, product = 1;

    for(int i=0; i<10; i++){
        sum += arr[i];
        product *= arr[i];
    }

    cout << "Sum of the elements of the array is: " << sum << endl;
    cout << "Product of the elements of the array is: " << product << endl;

    return 0;
}