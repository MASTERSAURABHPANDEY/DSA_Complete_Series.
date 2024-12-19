// its sum of numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int n=10;
//     int i=1;
//     int sum=0;
//     while (i<=n)
//     {
        
//         sum=sum+i;
//         i++;
//     }
//      cout<<sum<<" ";
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n=10;
    int i=1;
    int oddsum=0;
    while (i<=n)
    {
        if(i%2!=0)
        oddsum=oddsum+i;
        i++;
    }
     cout<<oddsum<<" ";
    return 0;
}