#include<iostream>
using namespace std;

void pattern10(int n){

    for(int i=1;i<=2*n-1;i++){
        int star = i;
        if(i>n){
            star=2*n-i;
        }
        for(int j=1;j<=star;j++){
            cout << "*" ;
        }
        cout << "\n" ;
    }
}
int main(){
    int n;
    cout << "Enter the number" << "\n";
    cin >> n;
    pattern10(n);
    
}