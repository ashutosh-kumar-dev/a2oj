#include<iostream>
using namespace std;

int main(){

    string a;
    int n;

    cin>>n;
    cin>>a;
    int s=0;
    int c=0;


    for(int i=0;i<=n;i++){
            if(a[i]=='U'){
                s++;
                if(s==0){
                    c++;
                }
            }
            else{
                s--;
            }
    }
    cout<<c;

}
