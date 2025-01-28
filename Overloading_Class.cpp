// Overloading Class 
#include <iostream>
using namespace std;
class clsPerson
{
  private:
         string _FirstName;
         string _LastName;
 public:
 clsPerson(string FirstName)
 {
   _FirstName = FirstName;
 }
 void set(string FirstName)
 {
   _FirstName = FirstName;
 }
 string Get()
 {
   return _FirstName;
 }
   void Print()
  {
  cout<<"First Name: "<<_FirstName<<endl;
  }
};
int main() 
{
  //Different betwen Oveloading in class 
  //clsPerson Person();
  clsPerson Person("Ahmed");
  Person.Print();
}