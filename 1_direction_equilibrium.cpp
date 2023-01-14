#include<iostream>
using namespace std;

int main(){

    int n;
    int a,b,c;
    int s1=0,s2=0,s3=0;

    cin>>n;
    for(int i=0;i<n;i++){
        cin >> a;
        cin >> b;
        cin >> c;

        s1+=a;
        s2+=b;
        s3+=c;



    }
    if(s1==0 && s2==0 && s3==0){
        cout<<"yes";
    }
    else cout<<"no";


}
