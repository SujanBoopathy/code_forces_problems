#include<iostream>
using namespace std;

int main(){
    int n,count,capacity,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>count>>capacity;
        if(capacity-count>=2){
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}