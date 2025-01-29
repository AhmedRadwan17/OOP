//Structure Inside Class 
#include <iostream>
#include <iomanip>
using namespace std;
class clsPerson
{
  private:
         struct stAddress
         {
           string Phone;
         };
  public:
       string FullName;
       stAddress Address;
       clsPerson()
       {
         FullName = "Samy Saleh";
         Address.Phone = "0282837";
       }
   void Print()
   {
     cout<<left<<"FullName:"<<setw(12)<<FullName<<endl;
     cout<<left<<"Phone:"<<setw(12)<<Address.Phone<<endl;
   }
        
};
int main() 
{
    clsPerson person;
    person.Print();
}