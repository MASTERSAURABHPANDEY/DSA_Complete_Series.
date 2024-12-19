#include<iostream>
using namespace std;
int main(){
    char ch;
cout<<"Enter ch :";
cin>>ch;
// if(ch>='a'&&ch<='z'){
//     cout<<"Lower case Statement";
// }
// else{cout<<"Upper case statement";}
//     return 0;
//HERE WE ARE DOING IMPLICIT TYPE CONVERSION
if(ch>=65&&ch<=90){
    cout<<"upper case Statement";
}
else{cout<<"lower case statement";}
    return 0;
}