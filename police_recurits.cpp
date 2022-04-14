#include<iostream>
using namespace std;
int main(){
    int n,police=0,unsolved=0,crime=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        if(temp>=1){
            police+=temp;
        }
        else{
            if(police>0){
                police+=temp;
            }
            else{
                unsolved++;
            }
        }
    }
    cout<<unsolved<<endl;
    return 0;
}