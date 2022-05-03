#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int size,m=1001;
        cin>>size;
        int a[size];
        for(int i=0;i<size;i++)
            cin>>a[i];
        sort(a,a+size);
        for(int i=1;i<size;i++){
            if(m>a[i]-a[i-1])
                m=a[i]-a[i-1];
        }
        cout<<m<<endl;
    }
    return 0;
}