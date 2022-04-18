#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a,res;
        cin>>a;
        res=a.substr(0,2);
        for(int i=2;i<a.length();i++){
            if(i%2!=0){
                res+=a[i];
            }
        }
        cout<<res<<endl;
    }
    return 0;
}