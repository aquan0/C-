#include<iostream>
using namespace std;

class Input {
private: 
    int a;
    int c;

public: 
    Input(int a, int c) {
        this->a = a;
        this->c = c;
    }   
    void show() {
            cout << "a = " << a << " va c = " << c;
    }
    int getA() {
        return a;
    }
    int getC() {
        return c;
    }
};

int main() {
    Input a(5, 6);
    a.show();
    cout << endl;
    cout << a.getA() + a.getC();
}