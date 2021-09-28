#include<iostream>
#include<set>
#include<iterator>
using namespace std;

#define MAX 10
int b[MAX * MAX];
int temp=0;

int** inputArray(int** arr, int n, int m) {
    arr = new int*[MAX];
    for(int i = 0; i < MAX; i++) {
        arr[i] = new int[MAX];
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    return arr;
}

void insertRow(int** arr, int& n, int m) {
    int newRow, b[m];
    cout << "\nNhap vi tri hang moi: ";
    cin >> newRow;
    cout << "\nNhap dong moi: ";
    for(int i = 0; i < m; i++){
        cout << "\nb[" << i << "]=";
        cin >> b[i];
    }
    for(int i = n; i > newRow; i--){
        for(int j = 0; j < m; j++) {
            arr[i][j] = arr[i-1][j];
        }
    }
    for(int i = 0; i < m; i++){
        arr[newRow][i] = b[i];
    }
    n++;
}

void insertCol(int** arr, int n, int& m) {
    int newCol, b[n];
    cout << "\nNhap vi tri cot moi";
    cin >> newCol;
    cout << "\nNhap cot moi: ";
    for(int i = 0; i < n; i++){
        cout << "\nb[" << i << "]=";
        cin >> b[i];
    }
    for(int i = 0; i < n; i++){
        for(int j = m; j > newCol; j--) {
            arr[i][j] = arr[i][j-1];
        }
    }
    for(int i = 0; i < n; i++){
        arr[i][newCol] = b[i];
    }
    m++;
}

void print(int* arr) {
    for(int i = 0; i < temp; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

void print(int** arr, int n, int m) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cout << arr[i][j] << "   ";
        }
        cout << endl;
    }
}

int sumArray(int** arr, int n, int m) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            sum += arr[i][j];
        }
    }
    return sum;
}

int sumEvenColumnArray(int** arr, int n, int m) {
    int sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(j % 2 == 0) sum += arr[i][j];
        }
    }
    return sum;
}

int* nonDuplicateArray(int** arr, int n, int m) {
    set<int> list;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            list.insert(arr[i][j]);
        }
    }
    for(set<int>::iterator iter = list.begin(); iter != list.end(); iter++) {
        b[temp++] = *iter;
    }
    // for(int i = 0; i < temp; i++) {
    //     cout << b[i] << "  ";
    // }
    // cout << endl;
    return b;
}

int main() {
    int n, m;
    cout << "Nhap so dong, so cot: ";
    cin >> n >> m;
    int** arr;
    arr = inputArray(arr, n, m);
    print(arr, n, m);
    cout << "Cac du lieu khong trung trong mang 2 chieu la :";
    print(nonDuplicateArray(arr, n, m));
    return 0;
}