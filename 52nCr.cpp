#include<iostream>
using namespace std;

int factorial(int num) {
    int fact = 1;
    for(int i=1; i<=num; i++) {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r) {
    int num = factorial(n);
    int den = factorial(r) * factorial(n-r);

    return num/den;
}

int main() {
    
    int n,r;
    cout << "Enter n and r in nCr: " << endl;
    cin >> n >> r;

    cout << "Answer: " << nCr(n,r) << endl;

    return 0;
}