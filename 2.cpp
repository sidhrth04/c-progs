#include<iostream>
using namespace std;
int main(){
    int a[20];
    int n;
    cout<<"enter a no.";
    cin>>n;
    for (int i=0;i<20;i++){
        a[i]=n;
    }
    for (int i=0;i<20;i++){
        cout<<a[i]<<endl; 
    }
    return 0;
}