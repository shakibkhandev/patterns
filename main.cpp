#include <iostream>


using namespace std;


void triangle(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++){
            cout << "*  ";
        };
        cout << endl;
    }
}

void square(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cout << "*  ";
        };
        cout << endl;
    }
}

void rectangle(int n, int m){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cout << "*  ";
        };
        cout << endl;
    }
}

namespace Patterns {
    void triangle_pattern(int n){
        triangle(n);
    }
    void square_pattern(int n){
        square(n);
    }
    void rectangle_pattern(int n, int m){
        rectangle(n, m);
    }
}



int main () {
    // Patterns Demo
    // triangle(8);
    // cout << endl;
    // square(8);
    // cout << endl;
    // rectangle(2, 6);

    // Patterns::triangle_pattern(8);
    // cout << endl;
    // Patterns::square_pattern(8);
    // cout << endl;
    // Patterns::rectangle_pattern(2, 6);

    return 0;
}