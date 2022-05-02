#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int a,i=1;
        cin>>a;
        vector<int> v;
        while(v.size()!=a){
            if(i%3!=0 && i%10!=10){
                v.push_back(i);
            }
            i++;   
        }
        cout<<v[a-1]<<endl;
    }
    return 0;
}


