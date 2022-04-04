#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[1000];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    int least=a[n-1]-a[0];
    for(int i=1;i<=m-n;i++){
        if(a[i+n-1]-a[i]<least){
            least=a[i+n-1]-a[i]<least;
        }
    }
    cout<<least<<endl;
    return 0;
}