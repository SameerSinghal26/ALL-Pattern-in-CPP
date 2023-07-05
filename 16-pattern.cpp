#include<iostream>
using namespace std;

void pattern14(int n){
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout << ch << " ";
        } 
        cout<<"\n";
}
}
int main(){
    int n;
    cout << "Enter the number" << "\n";
    cin >> n;
    pattern14(n);
    
}