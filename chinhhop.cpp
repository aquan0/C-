#include<iostream>
using namespace std;

// int Comb(int k, int n) {
//     if(k == 0 || n == k) {
//         return 1;
//     } else {
//         return Comb(k - 1, n - 1) + Comb(k, n - 1);
//     }
// }

int Comb(int k, int n) {
    int C[n+1][n+1];
    int i, j;
    C[0][0] = 1;
    //k index
    for(i = 1; i <= n; i++) {
        C[0][i] = 1;
        C[i][i] = 1;
        //n index
        for(j = 1; j < i; j++) {
            C[j][i] = C[j-1][i -1] + C[j][i - 1];
        }
    }
    return C[k][n];
}

int main() {
    int k, n;
    cout << "Nhap k, n:";
    cin >> k >> n;
    cout << "Chinh hop la: " << Comb(k, n);
}