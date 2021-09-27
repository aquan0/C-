#include<iostream>
using namespace std;

float luyThua(float x, int n) {
    if(n == 0) return 1;
    return luyThua(x, n - 1) * x;
}

float tongLuyThua(float x, int n) {
    if(n == 1) return x;
    return luyThua(x, n) + tongLuyThua(x, n - 1);
} 

int main() {
    int n, x;
    cout << "Nhap x, n: ";
    cin >> x >> n;
    cout << "Gia tri cua bieu thuc la " << tongLuyThua(x, n);
}