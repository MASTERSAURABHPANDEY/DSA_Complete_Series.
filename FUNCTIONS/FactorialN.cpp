#include<iostream>
using namespace std;
int FactorialN(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
    cout<<FactorialN(5)<<endl;
    cout<<FactorialN(6)<<endl;
    return 0;
}