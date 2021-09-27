#include<iostream>
using namespace std;

void merge(int arr[], int l, int m, int r) {
    int i, j, k;

    //Lấy tổng số phần tử num1, num2 
    int num1 = m - l + 1;
    int num2 = r - m;

    //Tạo các mảng tạm
    int L[num1], R[num2];

    //Copy dữ liệu sang mảng tạm
    for(i = 0; i < num1; i++) {
        L[i] = arr[l + i];
    }

    for(j = 0; j < num2; j++) {
        R[j] = arr[m + j + 1];
    }

    // Gộp mảng tạm vừa rồi vào mảng
    i = 0;
    j = 0;
    k = l;

    while(i < num1 && j < num2) {
        if(L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    //Copy các mảng còn lại của mảng L vào arr nếu có
    while(i < num1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while(j < num2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if(l < r) {
        //Tránh tràn số 
        int m = l + (r - l) / 2;

        //Gọi hàm đệ quy tiếp tục chia đôi từng nửa mảng
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}


void print(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << "  ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Mang truoc sap xep: " << endl;
    print(arr, n);
    mergeSort(arr, 0, n - 1);
    cout << "Mang sau khi sap xep " << endl;
    print(arr, n);
    return 0;
}