#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int size,maxi=0,count=0,c=0;
        cin>>size;
        int a[size];
        for(int i=0;i<size;i++){
            cin>>a[i];
            int temp=a[i];
            maxi=max(temp,maxi);
        }
        for(int i=0;i<size;i++){
            count=maxi-a[i];
            c=max(c,count);
        }
        cout<<c<<endl;
    }
    return 0;
}