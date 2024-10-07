#include <iostream>
#include <vector>
using namespace std;

int main(){
    // Vector is a dynamic array offered by STL, which can be used to solve a particular problem. Its main advantage is that it expands when data is stored progressively.

    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int> vec(3, 0);

    for( int value: arr )
        cout << value << " ";
    
    cout << endl;
    cout << "Size of arr is: " << arr.size() << endl;

    // Pushing a new element to arr

    arr.push_back(6);
    cout << "Size of arr after push is: " << arr.size() << endl;
    
    arr.pop_back();
    cout << "Size of arr after pop is: " << arr.size() << endl;

    cout << "Front element is: " << arr.front() << endl;
    cout << "Back element is: " << arr.back() << endl;

    // at function is used to find or get value at a particular index

    cout << "Element at index 3 is: " << arr.at(3) << endl;

    return 0;
}