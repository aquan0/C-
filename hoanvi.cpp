#include<iostream>
using namespace std;

int Bool[30] = {0};
int arr[30] = {0};
int n;

void xuat();
void Try(int i);

int main() {
    cin >> n;
    Try(1);
}

void xuat() {
    for(int i = 1; i <= n; i++) {
        cout << arr[i];
    }
    cout << "    ";
}

void Try(int k) {
    for(int i = 1; i <= n; i++) {
        if(!Bool[i]) {
            arr[k] = i;
            Bool[i] = 1;
            if(k == n) {
                xuat();
            } else {
                Try(k+1);
            }
            Bool[i] = 0;
        }

    }
}