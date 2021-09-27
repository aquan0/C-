#include<iostream>
using namespace std;

int giaithua(int n) {
    if(n == 1) return 1;
    return n * giaithua(n - 1);
}

int dequy(int n) {
    if(n == 1) return 1;
    return giaithua(n) + dequy(n - 1);
}

int main() {
    int n;
    cout <<"Nhap so n: ";
    cin >> n;
    cout << "Bieu thuc co gia tri: " << dequy(n);
    return 0;
}

