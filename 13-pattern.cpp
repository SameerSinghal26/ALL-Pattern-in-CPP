#include<iostream>
using namespace std;

void pattern13(int n){
    int number=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout << number << " ";
            number++;
        } 
        cout<<"\n";
}
}
int main(){
    int n;
    cout << "Enter the number" << "\n";
    cin >> n;
    pattern13(n);
    
}