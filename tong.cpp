#include <iostream>
using namespace std;

int tong(int n) {
    if(n == 1) return 1;
    else return n + tong(n - 1);
}

int main() {
    int n;
    cout << "Nhap so n: ";
    cin >> n;
    cout << "Tong n so tu nhien la :  " << tong(n);
}