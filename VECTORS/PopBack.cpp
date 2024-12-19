#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec;
    cout<<"size ="<<vec.size()<<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    vec.pop_back();
    cout<<"size  after pop back ="<<vec.size()<<endl;
    for(int val : vec){
        cout<<"value = "<<val<<endl;
    }
    return 0;
}