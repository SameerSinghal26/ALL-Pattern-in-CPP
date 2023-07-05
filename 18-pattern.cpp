#include<iostream>
using namespace std;

void pattern18(int n){
    for(int i=0;i<n;i++){
        for(char ch='E'-i;ch<='E';ch++){
            cout << ch << " ";
        } 
        cout<<"\n";
}
}
int main(){
    int n;
    cout << "Enter the number" << "\n";
    cin >> n;
    pattern18(n);
    
}