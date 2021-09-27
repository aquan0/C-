
#include<iostream>
using namespace std;



int findBySorted(int arr[],const int& left,const int& right, const int& k) {
    if(left > right)  return -1;

    int mid = (left + right)/2;
    if (k == arr[mid]) {
        return mid;
    }
    else if (k < arr[mid]) {
        return findBySorted(arr, left, mid - 1, k);
    }     
    else if (k > arr[mid]) {
        return findBySorted(arr, mid + 1, right, k);
    } 
    return 0;
}

int arr[] = {1, 5, 6, 7, 9};
int main() {
    int n;
    do {
        cin >> n;
        unsigned int num = sizeof(arr)/sizeof(arr[0]);
        cout << "Vi tri cua k = " << n << ": " << findBySorted(arr, 0, num - 1, n) << endl << endl;
    } while (true);

    return 0;
}
