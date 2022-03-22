#include<iostream>
#include<unistd.h>
using namespace std;
int main(){
    int h,m,s,a,err;
    err=a=0;
    while(err==0){
        cout<<"Enter Hour,Minute and second in the same order";cin>>h>>m>>s;
        if(h<24 and m<60 and s<60)err++;
        else system("cls");
    }
    while (a==0)
    {
        system("cls");
        cout<<h<<":"<<m<<":"<<s<<"\n";
        sleep(1000);
        s++;
        if(s>59){
            s=0;m++;
        }
        if(m>59){
            m=0;h++;
        }
        if(h>24){
            h=0;
        }
    }return 0;
    
}