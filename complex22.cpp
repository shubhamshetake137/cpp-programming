#include<iostream>
using namespace std;
class complex
{
float real,imag;
public:
void getData()
{
cout<<"enter real part:";
cin>>real;
cout<<"enter imaginary part:";
cin>>imag;
}
void add(complex c1,complex c2)
{
real=c1.real+c2.real;
imag=c1.imag+c2.imag;
}
void substract(complex c1,complex c2)
{
real=c1.real-c2.real;
imag=c1.imag-c2.imag;
}
void display()
{
cout<<real<<"+"<<imag<<"i"<<endl;
}
};
int main()
{
complex c1,c2,sum,difference;
cout<<"enter first complex number:"<<endl;
c1.getData();
cout<<"\nenter second complex number:"<<endl;
c2.getData();
sum.add(c1,c2);
difference.substract(c1,c2);
cout<<"\naddition=";
sum.display();
cout<<"substraction=";
difference.display();
return 0;
}

