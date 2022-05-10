#include<iostream>
using namespace std;
int main(){
    long long int tc,n;
    cin>>tc;
    while(tc--){
        cin>>n;
        int temp;
        long long int sum=0,c1=0;
        for(long long int i=0;i<n;i++){            
            cin>>temp;
            if(temp==1){
                c1++;
                sum++;
            }
            else{
                sum+=2;
            }

        }
        
            if(sum%2==0){
                int div=sum/2;
                if(div%2==0){
                    cout<<"YES"<<endl;
                }
                else{
                    if(c1){
                        cout<<"YES"<<endl;
                    }
                    else{
                        cout<<"NO"<<endl;
                    }
                }
            }
            else{
                cout<<"NO"<<endl;
            }
    }
}