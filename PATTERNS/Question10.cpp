// A 
// A B
// A B C
// A B C D
// A B C D E
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter n:";
    cin>>n;
     for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
        cout<<(char)(j+64)<<" ";
    }
    cout<<endl;
  }
    return 0;
}