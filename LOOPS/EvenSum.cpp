#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter n :";
    cin>>n;
    int evensum=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            evensum=evensum+i;
        }
         }
    cout<<"sum of even numbers is :"<<evensum;
       cout<<endl;
    }