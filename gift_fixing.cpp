#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    while(n--){
        int size,count=0;
        cin>>size;
        int a[size],b[size];
        for(int i=0;i<size;i++)
            cin>>a[i];
        for(int i=0;i<size;i++)
            cin>>b[i];
        sort(a,a+size);
        sort(b,b+size);
        int t1=a[0],t2=b[0];
        for(int i=1;i<size;i++){
            if(a[i]!=t1 && b[i]!=t2){
                a[i]--;
                b[i]--;
                count++;
            }
            else if(a[i]!=t1 ){
                a[i]--;
                count++;
            }
            else if(b[i]!=t2){
                b[i]--;
                count++;
            }
            
        }
        cout<<count<<endl;
    }
    
    return 0;
}