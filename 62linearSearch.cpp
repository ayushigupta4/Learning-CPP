#include<iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key ) {
    for(int i=0; i<size; i++) {
        if( arr[i]==key )
            return 1;
    }

    return 0;
}

int main() {
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 23, 1};
    cout << "Enter element to be searched: ";
    int key;
    cin >> key;

    bool found = linearSearch(arr, 10, key);

    if(found)
        cout << "Found!";
    else
        cout << "Not Found!";

    return 0;
}