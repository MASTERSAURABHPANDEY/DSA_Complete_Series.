#include<iostream>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=1;i<=x;i++){
        f*=i;
    }
    return f;
}
int nCr(int n,int r){
       int a=fact(n);
       int b=fact(r);
       int c=fact(n-r);
    return a/(b*c);
}
int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    int r;
    cout<<"enter r :";
    cin>>r;
    cout<<nCr(n,r);
return 0;
}