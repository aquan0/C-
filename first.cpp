#include<iostream>
using namespace std;

int n;
int x[30] = {0};
void Try(int i);

int main() {
    cout << "Nhap so n: ";
    cin >> n;
    Try(1);
    return 0;
}

void Try(int i) {
    int j, k;
    for(j = 1; j >= 0; j--) {
        x[i] = j;
        if(i == n) {
            for (k = 1; k <= n; k++) {
                cout << x[k];
            }
            cout << endl;
        } else {
            Try(i + 1);
        }
    }
}