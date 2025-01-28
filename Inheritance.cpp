// Inheritance and sent parameters 
#include <iostream>
#include <iomanip>
using namespace std;
class clsperson
{
 private:
      string _ID;
      string _FirstName;
      string _LastName;
      string _FullName = _FirstName +  _LastName ;
      string _Email;
      string _Phone;
      string _Subject;
      string _Body;
      string xxBody;
     
 public:
        clsperson(string ID , string FirstName , string LastName , string Email , string Phone)
        {
          _ID = ID;
          _FirstName = FirstName;
          _LastName = LastName;
          _Email = Email;
          _Phone = Phone;
        }
        string GetID()
        {
             return _ID;
        }
        void setFirstName(string FirstName)
        {
          _FirstName =FirstName;
        }
        string getFirstName()
        {
          return _FirstName;
        }
        void setLastName(string LastName)
        {
          _LastName = LastName;
        }
        string GetLastName()
        {
          return _LastName;
        }
        string getFullName()
        {
          return _FirstName +   _LastName;
        }
        void setEmail(string Email)
        {
          _Email = Email;
        }
        string GetEmail()
        {
          return _Email;
        }
        void setPhone(string Phone)
        {
          _Phone = Phone;
        }
        string GetPhone()
        {
          return _Phone;
        }
      void setSms(string Subject , string Body)
      {
        _Subject = Subject;
        _Body = Body;
      }
      void setemail(string xBody)
      {
        xxBody = xBody;
      }
      string getemail()
      {
       return xxBody; 
      }
      string GetSmssubject()
      {
        return _Subject;
      }
      string GetSmsBody()
      {
        return _Body;
      }
        void Print()
        {
          cout<<left<<setw(15)<<"Info:"<<endl;
          cout<<left<<"-------------------------------------------\n";
          cout<<left<<"ID :"<<left<<GetID()<<endl;
          cout<<left<<"FirstName : "<<left<<getFirstName()<<endl;
          cout<<left<<"LastName  : "<<left<<GetLastName()<<endl;
          cout<<left<<"FullName : "<<left<<getFullName()<<endl;
          cout<<left<<"Email : "<<left<<GetEmail()<<endl;
          cout<<left<<"Phone : "<<left<<GetPhone()<<endl;
          cout<<left<<"-------------------------------------------\n";
          cout<<"The Following message sent successfully to email : " <<GetEmail()<<endl;
          cout<<left<<"subject : "<<left<<GetSmssubject()<<endl;
          cout<<left<<"Body : " <<left<<GetSmsBody()<<endl;
          cout<<"The Following SMS sent successfully to Phone : "<<GetPhone()<<endl;
          cout<<left<<getemail()<<endl;
        }
     
};
class clsEmployee : public clsperson
{
  public:
  clsEmployee(string ID , string FirstName , string LastName , string Email , string Phone) : clsperson(ID , FirstName , LastName , Email , Phone)
  {
    
  }
};
int main() 
{
 clsEmployee employ1("A1626","Ahmed","LastName","a72727@gamil.com","2208292");
 employ1.Print();
  
    
}