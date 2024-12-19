#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter n :";
    cin>>n;
    //Top part ke liye
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<n-1;j++){
            cout<<" ";
            }
            cout<<"*";
            if(i!=0){
                //spaces
                for(int j=0;j<2*i-1;j++){
                    cout<<" ";
                }
               
            }
                     cout<<"*";
    }
    return 0;
}