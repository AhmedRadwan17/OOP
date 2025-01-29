// Nested Classes
#include <iostream>
using namespace std;
class clsPerson
{
  class clsAddress
  {
    public:
         string AddressLine1;
         string AddressLine2;
         string City;
         string Country;
      void Print()
      {
        cout<<AddressLine1<<endl;
        cout<<AddressLine2<<endl;
        cout<<City<<endl;
        cout<<Country<<endl;
      }
  };
    public:
         string FullName;
         clsAddress Address;
         clsPerson()
         {
           FullName = "Samy Abu Saleh";
           Address.AddressLine1="Bilding 10";
           Address.AddressLine2="Queen Rania";
           Address.City ="Eyropea";
           Address.Country = "Jordon";
         }
         
};
int main() 
{
    clsPerson person;
    cout<<person.FullName<<endl;
    person.Address.Print();
}