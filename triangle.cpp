#include <iostream>

using namespace std;

void one_sided_triangle(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void two_sided_triangle(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i; j++){
            cout << " ";
        }
        for (int j = 0; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}


void triangle_pattern_for_num1(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++){
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}


void triangle_pattern_for_num2(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++){
            cout << j + 1 << " ";
        }
        cout << endl;
        
    }
}

void triangle_pattern_for_num3(int n){
    int num = 1;

    for(int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void triangle_pattern_for_num4(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i; j++){
            cout << " ";
        }
        for (int j = 0; j <= i; j++){
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}


void triangle_pattern_for_num5(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        for (int j = 0; j < n - i; j++){
            cout << j + 1 << " ";
        }
        cout << endl;

    }
}

void triangle_pattern_for_num6(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        for (int j = 0; j < n - i; j++){
            cout << n - j << " ";
        }
        cout << endl;
    }
}

void triangle_pattern_for_num7(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i; j++){
            cout << " ";
        }
        for (int j = 0; j < n - i; j++){
            cout << j + 1 ;
        }
        cout << endl;
    }
}


void pyramid_shape(int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            cout << " ";
        }
        for (int j = 1; j <= i+1; j++){
            cout << j;
        }
        for (int j = i; j >= 1; j--){
            cout << j ;
        }
        cout << endl;
    }
}




int main(){

    int n = 5;
    // one_sided_triangle(n);
    // two_sided_triangle(n);

    // triangle_pattern_for_num1(n);
    // cout << endl;
    // triangle_pattern_for_num2(n);
    // cout << endl;
    // triangle_pattern_for_num3(n);
    // cout << endl;
    // triangle_pattern_for_num4(n);
    // cout << endl;
    // triangle_pattern_for_num5(n);
    // cout << endl;
    // triangle_pattern_for_num6(n);
    // cout << endl;
    // triangle_pattern_for_num7(n);
    // cout << endl;
    pyramid_shape(n);

    return 0;
}
