#include<iostream>
using namespace std;
int SumN(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
        
    }
    return sum;
}
int main(){
cout << SumN(5)<<endl;
cout << SumN(10)<<endl;
return 0;
}