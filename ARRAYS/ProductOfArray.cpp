#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int size=4;
    int fact=1;
    for(int i=0;i<size;i++){
        fact=fact*arr[i];
    }
    cout<<fact;
}