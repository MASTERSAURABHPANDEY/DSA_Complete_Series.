#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter n :";
    cin>>n;
    int oddsum=0;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            oddsum=oddsum+i;
        }
         }
    cout<<"sum of odd numbers is :"<<oddsum;
       cout<<endl;
    }