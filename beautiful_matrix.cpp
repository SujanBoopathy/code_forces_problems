#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x;
    int temp[2];
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>x;
            if(x==1){
                temp[0]=i;
                temp[1]=j;
            }
        }
    }
    cout<< abs(temp[0]-3) + abs(temp[1]-3) <<endl;
    return 0;
}