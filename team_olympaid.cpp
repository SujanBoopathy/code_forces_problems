#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int findMin(int a,int b,int c){
    if(a<b and a<c)
        return a;
    else if(b<a and b<c)
        return b;
    else
        return c;
}
int main(){
    int n,t,p=0,m=0,s=0;
    cin>>n;
    vector<int> vect;
    vector<int> a,b,c;
    for(int i=0;i<n;i++){
        cin>>t;
        vect.push_back(t);
        if(t==1){
            p++;
            a.push_back(i);
        } 
        else if(t==2){
            m++;
            b.push_back(i);
        }
        else{
            s++;
            c.push_back(i);
        }
    }
    int res=findMin(p,m,s);
    cout<<res<<endl;
    
    
    return 0;
}