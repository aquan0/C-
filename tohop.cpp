#include<iostream>
using namespace std;

void Try(int i, int a[], int n, int k);
void xuat(int a[], int k);

int main() {
    int n, k;
    int a[100] = {0};
    cout << "Nhap n: ";
    cin >> n;
    cout << "Nhap k: ";
    cin >> k;
    Try(1, a, n, k);
    return 0;
}


void Try(int i, int arr[], int n, int k) {
    for(int j = arr[i - 1] + 1; j <= n - k + i; j++) {
        arr[i] = j;
        if(i == k) {
            xuat(arr, k);
        } else {
            Try(i + 1, arr, n, k);
        }
    }
}

void xuat(int a[], int k) {
    for(int i = 1; i <= k; i++) {
        cout << a[i];
    }
    cout << "      ";
}