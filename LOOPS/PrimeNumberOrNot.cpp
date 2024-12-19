#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter n:";
    cin>>n;
    bool isprime=true;
    for(int i=2;i<=n-1;i++){//here n-1 ke jggh hm i*i<n bhi likh sakte h
        if(n%i ==0){
            isprime=false;
            break;
        }
    } 
    if(isprime=true){cout<<"prime number\n";
    }else{cout<<"non prime number\n";}
}