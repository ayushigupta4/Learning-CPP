#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col) {
    for(int row=0; row<3; row++){
        for(int col=0; col<4; col++) {
            if( arr[row][col] == target) return 1;
        }
    }

    return 0;
}

int main() {
    //create array
    int arr[3][4];
    //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
    //int arr[3][4] = {{1,11,111,1111}, {2,22,222,2222}, {3,33,333,3333}};

    //input array -> row wise input
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++) {
            cin >> arr[i][j];
        }
    }

    //input array -> col wise input
    // for(int j=0; j<4; j++){
    //     for(int i=0; i<3; i++) {
    //         cin >> arr[i][j];
    //     }
    // }

    //output array 
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //Search an element
    cout << "Enter an element to be searched: ";
    int target;
    cin >> target;
    if(isPresent(arr, target, 3, 4)) {
        cout << "Found";
    }
    else {
        cout << "Not found";
    }

    return 0;
}