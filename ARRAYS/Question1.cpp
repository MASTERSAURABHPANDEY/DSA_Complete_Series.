#include<iostream>
using namespace std;
int main(){
   // int marks[5]={5,3,6,7,8};
    int size=5;
    int marks[size];
    for(int i=0;i<size;i++){
        cin>>marks[i];
    }
    for(int i = 0;i <size;i++){
        cout<<marks[i];    }
   // cout<<sizeof(marks)/sizeof(int);
return 0;
}