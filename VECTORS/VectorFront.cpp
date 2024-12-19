#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vec={23,45,56,67};
    cout<<"size ="<<vec.size()<<endl;
    vec.push_back(24);
    cout<<"new size after push back="<<vec.size()<<endl;
    vec.pop_back();
     cout<<"new size after pop back3="<<vec.size()<<endl;
     vec.front();
     cout<<"front ="<<vec.front()<<endl;
     vec.back();
     cout<<"back is "<<vec.back()<<endl;
return 0;
}