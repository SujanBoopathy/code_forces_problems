#include<iostream>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;

    for(int i=0;i<n;i++){
        int temp[3];
        int c=0;
        for(int j=0;j<3;j++){
            cin>>temp[j];
        }
        for(int k=0;k<3;k++){
            if(temp[k]==1) c++;
        }
        if(c>=2) count++;
    }
    cout<<count<<endl;

    return 0;
}