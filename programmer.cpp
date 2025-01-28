//ProGramer Info
#include <iostream>
using namespace std;
class clsperson
{
  private:
         string _ID;
         string _FirstName;
         string _LastName;
         string _FullName = _FirstName + " " + _LastName ;
         string _Email;
         string _Phone;
  public:
  clsperson(string ID , string FirstName , string LastName , string Email , string Phone)
  {
    _ID = ID;
    _FirstName = FirstName;
    _LastName = LastName;
    _Email = Email;
    _Phone = Phone;
    _FullName = _FirstName + " " + _LastName ;
  }
  string GetID()
  {
    return _ID;
  }
  void SetFirstName(string FirstName)
  {
    _FirstName = FirstName ;
  }
  string GetFirstName()
  {
    return _FirstName;
  }
  void SetLastName(string LastName)
  {
    _LastName = LastName;
  }
  string GetLastName()
  {
    return _LastName;
  }
  string GetFullName()
  {
     return _FullName = _FirstName + " " + _LastName ;
  }
  void SetEmail(string Email)
  {
    _Email = Email;
  }
  string GetEmail()
  {
    return _Email;
  }
  void SetPhone(string Phone)
  {
    _Phone =Phone;
  }
  string GetPhone()
  {
    return _Phone;
  }
  
  void Print()
  {
    cout<<"Info: \n";
    cout<<"----------------------------------\n";
    cout<<"ID is : "<<_ID<<endl;
    cout<<"FirstName is : "<<_FirstName<<endl;
    cout<<"LastName is : "<<_LastName<<endl;
    cout<<"FullName is : "<<_FullName<<endl;
    cout<<"email is : "<<_Email<<endl;
    cout<<"Phone is : "<<_Phone<<endl;
  }
  void SendEmail(string _subject , string _Body)
  {
    cout<<"Subject: "<<_subject<<endl;
    cout<<"Body: "<<_Body<<endl;
  }
  void sendSms(string _message)
  {
    cout<<"The Following SMS sent successfully to Phone: "<<_Phone<<endl;
    cout<<"message is: "<<_message<<endl;
  }
};
class clsemployee : public clsperson
{
private:
        string _Title;
        string _Department;
        float  _Salary;
 public:
        clsemployee(string ID , string FirstName , string LastName , string Email , string Phone , string Title , string Department , float Salary):clsperson(ID,FirstName , LastName ,Email , Phone )
        {
          _Title=Title;
          _Department=Department;
          _Salary =Salary;
        }
        void SetTitle(string Title)
        {
          _Title = Title;
        }
        string GtTitle()
        {
          return _Title;
        }
        void SetDepartment(string Department)
        {
          _Department = Department;
        }
        string GetDepartment()
        {
          return _Department;
        }
        void SetSalary(float Salary)
        {
          _Salary = Salary;
        }
        float GetSalary()
        {
          return _Salary;
        }
      void Print()
      {
        clsperson::Print();
        cout<<"Title is: "<<_Title<<endl;
        cout<<"Department is: "<<_Department<<endl;
        cout<<"Salary is: "<<_Salary<<endl;
      }
};
class clsProGramer : public clsemployee
{
  private:
        string _mainProgrammingLanguage;
  public:
           clsProGramer(string ID , string FirstName , string LastName , string Email , string Phone , string Title , string Department ,float Salary , string mainProgrammingLanguage):clsemployee(ID , FirstName , LastName , Email , Phone , Title , Department , Salary)
           {
            _mainProgrammingLanguage = mainProgrammingLanguage;
           }
           void setmainProgrammingLanguage(string mainProgrammingLanguage)
           {
             _mainProgrammingLanguage = mainProgrammingLanguage;
           }
           string GetmainProgrammingLanguage()
           {
             return _mainProgrammingLanguage;
           }
         void Print()
         {
           clsemployee::Print();
           cout<<"ProgrammingLanguage is: " <<_mainProgrammingLanguage<<endl;
           cout<<"----------------------------------\n";
           clsperson::SendEmail("Hi","How are you ?");
           clsperson::sendSms("How are you ? ");
         }
};
int main() 
{
  clsProGramer ProGramer("A150B","SaSa","Rady","a20@gamil.com","02838388","Developer","Problem_Solving",5000.70,"CSS");
  ProGramer.Print();
  system("pause");
}