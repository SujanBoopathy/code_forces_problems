#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    sort(a,a+3);
    int count=0;
    count+=a[2]-a[1];
    count+=a[1]-a[0];
    cout<<count<<endl;
    return 0;
}