#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a[250];
    int n;
    cin>>n;
    int p,q,count=0;
    cin>>p;
    for(int i=0;i<p;i++){
        cin>>a[i];
    }
    cin>>q;
    for(int i=p;i<p+q;i++){
        cin>>a[i];
    }
    sort(a,a+(p+q));
    for(int i=0;i<(p+q);i++){
        if(a[i]!=a[i+1]){
            count++;
        }
    }
    if(n==count)
        cout<<"I become the guy."<<endl;
    else
        cout<<"Oh, my keyboard!"<<endl;
    return 0;
}

