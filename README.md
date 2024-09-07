## AIM

To learn about Object-Oriented Programming (OOP) using classes and methods.

## Software Used

- VS Code

## Problem Statements

1. **Car Details Program**: Write a C++ program to display car details using a class.
2. **Class Using Functions**: Write a C++ program to create a class utilizing functions.
3. **Rectangle Area Calculation**: Write a C++ program to calculate the area of a rectangle using a class.
4. **User Input Class**: Write a C++ program to create a class that takes inputs from the user.

## Theory

Object-Oriented Programming (OOP) revolves around the use of objects. Its primary goal is to model real-world entities and concepts—such as inheritance, encapsulation, and polymorphism—in programming. OOP aims to encapsulate data and functions into a single unit, known as a class, ensuring that only the methods within the class can access and manipulate its data.

### Class

A class is a user-defined data type that includes data members and member functions. It serves as a blueprint for creating objects. In C++, a class defines the structure and behavior of objects that are instances of that class.

### Class Methods

Class methods, also known as member functions, are functions defined within a class that operate on the class's data members. They define the actions and behaviors that objects of the class can perform and interact with the class's data members.

## Program Codes

```javascript
//Mukesh Rothe 23070123089 EXP11
#include<iostream>
using namespace std;
class Car{
    public:
    string make = "Kia";
    string model = "Seltos";
    int year = 2024;
};
int main()
{
    Car myCar;
    cout<< "Car details: "<<myCar.make<<" "<<myCar.model<<"("<<myCar.year<<")"<<endl;
    return 0;

}
```
```javascript
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
```
```javascript
//Mukesh Rothe 23070123089 EXP11
#include<iostream>
using namespace std;
class Band{
public:
string title = "Muse";
string genre = "Rock";
string country = "England";
int year = 1994;
    
void displayInfo()
{
cout<< "Band details:- "<<endl;
cout<<"Title: "<<title <<endl; 
cout <<"Genre: "<< genre<<endl;
cout <<"Origin: "<< country<<endl;
cout <<"Established: "<<year<<endl;
}
};
    int main()
    {
        Band myBand;
        myBand.displayInfo();
        return 0;
    }
```
```javascript
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
```
## Output
Class Car-

![Screenshot 2024-09-07 214542](https://github.com/user-attachments/assets/5ec2a8f0-28af-4438-9124-c0e4242275db)

Class Car User Input-

![Screenshot 2024-09-07 214640](https://github.com/user-attachments/assets/4ad77c1f-641c-4996-bca7-0ce3b4b2e411)

Class Function-

![Screenshot 2024-09-07 214707](https://github.com/user-attachments/assets/3cea9734-d637-4760-ab41-3905d7cefad4)

Class Public Private Variables-

![Screenshot 2024-09-07 214741](https://github.com/user-attachments/assets/747ccb0a-2b97-4fb7-839f-055366823e43)

## Conclusion

- **Class Declaration**: We learned how to declare a class in C++.
- **User Input**: We learned to create a class that accepts inputs from the user.
- **Class with Functions**: We explored creating a class using functions to define its behavior and actions.
