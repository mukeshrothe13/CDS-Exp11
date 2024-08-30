//Mukesh Rothe 23070123089 EXP11  
#include<iostream>
using namespace std;
class Rectangle{
private:
double length;
double width;

public:
void setDimensions(double leng,double widt)
{
  length = leng;
  width = widt;
}
double calculateArea()
{
return length*width;
}
};
int main() {
Rectangle rect;
rect.setDimensions(5.0, 3.0);
cout<< "Area: "<<rect.calculateArea()<<endl;
return 0;
}
