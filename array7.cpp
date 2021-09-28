#include<iostream>
using namespace std;

void inputArray(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

string check(int arr[], int n) {
    if(n == 1) return "It's const function";
    bool covariance = false;
    bool inverse = false;
    for(int i = 1; i < n; i++) {
        if(arr[i] > arr[i-1]) covariance = true;
        else if(arr[i] < arr[i-1]) inverse = true;
    }
    if(!covariance && !inverse) return "It's const function";
    return !(covariance && inverse)? "YES" : "NO";
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    inputArray(arr, n);
    cout << check(arr, n);
    return 0;
}