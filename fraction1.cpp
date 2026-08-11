#include<iostream>
using namespace std;
int main(){
int a,b,c,d,add,mult;
cout<<"Enter 1st fraction no:";
cin>>a>>b;
cout<<"Enter 2nd fraction no:";
cin>>c>>d;
cout<<"the 1st fraction no is:"<<a<<"/"<<b;
cout<<"\nthe 2nd fraction no is:"<<c<<"/"<<d;
add=(a*d)+(c*b);
mult=b*d;
cout<<"\nthe addition of fraction no is:"<<add<<"/"<<mult;
}
