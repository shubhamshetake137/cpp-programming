#include<iostream>
#include<math>
using namespace std;
class Circle{
private:
double radius;
public:
Circle(double r){
radius=r;
}
double calculatearea(){
return M_PI*radius*radius;
}
double calculateCircumference(){
return 2*M_PI*radius;
}
};
int main(){
double userRadius;
cout<<"enter rad";
cin>>userRadius;
Circle myCircle(userRadius);
cout<<"area of circle:";<<myCircle.calculateArea();
cout<<"Circumference of circle:";<<myCircle.calculateCircumference();
return 0;
}


