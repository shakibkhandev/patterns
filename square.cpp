#include <iostream>

using namespace std;

void normal_square_pattern(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


void square_num_pattern1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<i+1<<" ";
        }
        cout<<endl;
    }

}

void square_num_pattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}


void square_num_pattern3(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<n-i<<" ";
        }
        cout<<endl;
    }
}

void square_num_pattern4(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<n-j<<" ";
        }
        cout<<endl;
    }
}


void square_num_pattern5(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<char(65+i)<<" ";
        }
        cout<<endl;

    }
}

void square_num_pattern6(int n){
    int num = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<< num ++ <<" ";
        }
        cout<<endl;
    }
}


int main(){

    // normal_square_pattern(5);

    // square_num_pattern1(5);

    // square_num_pattern2(5);

    // square_num_pattern3(5);

    // square_num_pattern4(5);

    // square_num_pattern5(5);

    // square_num_pattern6(5);


    return 0;
}