#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, newElement;
    cout << "Enter the number of elements you want to store in the dynamic array: ";
    cin >> n;
    
    vector<int> dynamicArray;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;
        dynamicArray.push_back(element);
    }

    cout << "Elements in the vector are: ";
    for (int elem : dynamicArray) {
        cout << elem << " ";
    }
    cout << endl;

    cout << "Enter a new element to add to the vector: ";
    cin >> newElement;
    dynamicArray.push_back(newElement);

    cout << "Updated vector elements are: ";
    for (int elem : dynamicArray) {
        cout << elem << " ";
    }
    cout << endl;

    return 0;
}
