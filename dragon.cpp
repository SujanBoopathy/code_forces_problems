#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    long int s,n,f=0;
    cin>>s>>n;
    pair<int,int> a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(s<=a[i].first){
            f=1;
            break;
        }
        else{
            s+=a[i].second;
        }
    }
    if(f==1){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    return 0;
}