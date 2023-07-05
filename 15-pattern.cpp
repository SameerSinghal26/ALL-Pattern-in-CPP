#include<iostream>
using namespace std;

void pattern14(int n){
    for(int i=n;i>0;i--){
        for(char ch='A';ch<'A'+i;ch++){
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