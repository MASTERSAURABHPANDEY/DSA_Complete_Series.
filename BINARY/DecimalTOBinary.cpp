#include<iostream>
using namespace std;
int decTObinary(int decNum){
    int ans=0,pow=1;
    while(decNum>0){
        int rem=decNum%2;
        decNum /=2;
        ans+=(rem*pow);
        pow*=10;
    }
    return ans;
}
int main(){
        cout<<decTObinary(37)<<endl;
    
}