#include<iostream>
using namespace std;
int main(){
    int n,x,y,capacity=0,maxCapacity=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        capacity-=x;
        capacity+=y;
        if(capacity>maxCapacity)
            maxCapacity=capacity;
    }
    cout<<maxCapacity<<endl;
    return 0;
}