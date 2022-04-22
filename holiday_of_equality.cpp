#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,res=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        res=0;
    }
    else{
        sort(a,a+n);
        int m=a[n-1];
        for(int i=0;i<n;i++){
            if(a[i]==m)
                continue;
            else{
                res+=m-a[i];
            }
        }
    }
    cout<<res<<endl;
    return 0;
}