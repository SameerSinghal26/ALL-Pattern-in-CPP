#include<iostream>
using namespace std;

void pattern7(int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(int j=0;j<2*i+1;j++){
            cout << "*" ;
        }
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        cout << "\n" ;
    }
}

int main(){
    int n;
    cout << "Enter the number" << "\n";
    cin >> n;
    pattern7(n);
    
}