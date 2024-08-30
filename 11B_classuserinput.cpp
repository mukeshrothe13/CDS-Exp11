//Mukesh Rothe 23070123089 EXP11
#include<iostream>
using namespace std;
class Car{
  public:
  string manu;
  string model;
  int year;
  void userInput(){
  cout<<"Enter Car manufacturer- "<<endl;
  cin>>manu;

cout<< "Enter Car model- "<<endl;
cin>>model;

cout<<"Enter Car manufacturing year- "<<endl;
cin>>year;
  }
  
void displayInfo(){
    cout<<"Car Details: "<<manu<<" "<< model<< " "<<"("<<year<<")"<<endl;

}

};
int main()
{
    Car myCar;
    myCar.userInput();
    myCar.displayInfo();
    return 0;
}
