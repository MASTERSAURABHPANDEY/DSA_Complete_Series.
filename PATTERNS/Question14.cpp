// A         
// B C       
// D E F     
// G H I J   
// K L M N O 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no of rows :";
    cin>>n;
    int num=1;
    for(int i=1;i<=n;i++){
        for(int j=i;j>=1;j--){
            cout<<(char)(num+64)<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}