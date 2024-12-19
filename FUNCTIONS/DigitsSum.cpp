#include<iostream>
using namespace std;
int SumOfDigits(int num){
   int digSum=0;
   while(num>0){
    int LastDig=num%10;
    num /=10;
    digSum += LastDig;
   }
   return digSum;
}
int main(){
    cout<<"sum = "<<SumOfDigits(12345)<<endl;
    return 0;
}