#include<iostream>
#include <fstream>

using namespace std;

#define MAX  30

typedef struct {
    int weight;
    int value;
    int number;
    char name;
} Item ;

void readFile(char name[], Item list[], int& n);

void swap(Item& a, Item& b);

void print(Item i);

int greedy(Item list[], int n, int weight, int number[]);

void sort(Item list[], int n);

int main() {
    Item list[MAX];
    int number[] = {};
    int n;
    char file_name[] = "C:\\Users\\quan0\\Desktop\\balo.txt";
    readFile(file_name, list, n);
    cout << "Tong gia tri la " + greedy(list, n, 37, number);
    for (int i = 0; i < n; i++) {
        print(list[i]);
        cout << endl;
    }
    return 0;
}

void readFile(char name[], Item list[], int& n) {
    ifstream fp;
    fp.open(name);
    //1. Kiem tra 
    if(!fp.is_open()) {
        cout << "Khong mo duoc tap tin " << endl;
        return;
    }
    //Doc du lieu 
    fp >> n;//Doc so luong do vat
    for(int i = 0; i < n; i++) {
        fp >> list[i].weight;
        list[i].value = 0;
        fp >> list[i].number;
        fp >> list[i].name;
    }
    //Dong tap tin
    fp.close();
}

void swap(Item& a, Item& b) {
    Item temp;
    temp = a;
    a = b;
    b = temp;
}

void print(Item i) {
    cout << "(" + i.weight << ", " << i.value << ", " << i.name << "): " << i.number << endl;  
}

void sort(Item list[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            float giaTriTruoc = (float) list[i].value / list[i].weight;
            float giaTriSau = (float) list[j].value / list[j].weight;
            if(giaTriTruoc < giaTriSau) {
                swap(list[i], list[j]);
            }
        }
    }
}

int greedy(Item list[], int n, int weight, int number[]) {
    int sumValue = 0;
    sort(list, n);
    for(int i = 0; i < n; i++) {
        number[i] = weight / list[i].weight;
        weight -= number[i]*list[i].weight;
        sumValue += number[i] * list[i].value;
        list[i].number = number[i];
    }
    return sumValue;
}