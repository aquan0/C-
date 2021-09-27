#include<iostream>
using namespace std;

int atm(int a[],int  x[], int n, int i, int size_x) {
    int sum = 0;
    x[i] = n / a[i];
    size_x++;
    sum = n - x[i] * a[i];
    if(sum == 0) {
        for(int j = 0; j < size_x; j++) {
            cout << a[j]  << " x " << x[j] << endl;
        }
    } else {
        return atm(a,x, sum, i + 1, size_x);
    }
    return 0;
}
int a[] = {100, 50, 20, 10};
int main() {
    
    int x[] = {0};
    int n = 1260;
    int sum = 0;
    atm(a, x, n, 0, 0); 
}