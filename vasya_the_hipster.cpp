#include<iostream>
using namespace std;
int main(){
    int red,blue;
    cin>>red>>blue;
    int dif=0,same=0;
    while(true){
        if(red>=1 && blue>=1){
            red-=1;
            blue-=1;
            dif+=1;
        }
        else if(red>=2){
            red-=2;
            same+=1;

        }
        else if(blue>=2){
            blue-=2;
            same+=1;
        }
        else{
            break;
        }
    }
    cout<<dif<<" "<<same<<endl;
    return 0;
}