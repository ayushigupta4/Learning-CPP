//Print 1 to n
#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: " << endl;
    cin >> n;
    int i = 1;
    while(i <= n){
        cout << i << " ";
        i++;
    }
}