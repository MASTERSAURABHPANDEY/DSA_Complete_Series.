// 1111
//  222
//   33
//    4
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows :";
    cin>>n;
    for(int i=0;i<n;i++){
        //spaces
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //nums
        for(int j=0;j<n-i;j++){
            cout<<(i+1);
        }
        cout<<endl;
    }
    return 0;
}