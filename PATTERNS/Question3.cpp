// ABCD
// ABCD       This is questions
// ABCD
// ABCD
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter n :";
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n;j++){cout<<(char)(j+65)<<" ";}
        cout<<endl;
    }return 0;;
}