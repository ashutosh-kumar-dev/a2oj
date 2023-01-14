
#include<iostream>

using namespace std;

int main(){


    int n;

    cin>>n;
    int s;



    int fst;
    int a=0,b=1;
    int b_sum,a_sum;
    int a_c=0,b_c=0;

    int c=1;//del

    //if(fst==a) b_sum=0;
    //if(fst==b) a_sum=0;

    for(int i=0;i<n;i++){
        cin>>s;
        if(c=1){
                cout<<"hello";
        fst=s;
        if(fst==a) b_sum=0;
        if(fst==b) a_sum=0;}

        if(b_sum==0){
            a_c++;
            if(a==0){
                    a_sum++;
                    cout<<endl<<a_sum<<"aaaa" ;
            }
            else{a_sum--;}

        }
         if(a_sum==0){
            b_c++;
            if(b==1){
                    b_sum++;
            }
            else{b_sum--;}

        }

    }
    cout<<endl<<b_c;




}
