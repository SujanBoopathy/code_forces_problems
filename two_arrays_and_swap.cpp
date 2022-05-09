#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int size,itr,sum=0;
        cin>>size>>itr;
        int a[size],b[size];
        for(int i=0;i<size;i++){
            cin>>a[i];
        }
        for(int i=0;i<size;i++){
            cin>>b[i];
        }
        sort(a,a+size);
        sort(b,b+size);
        for(int i=0;i<itr;i++){
            if(a[i]<b[size-i-1]){
                swap(a[i],b[size-i-1]);
            }
        }
        for(int i=0;i<size;i++){
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}