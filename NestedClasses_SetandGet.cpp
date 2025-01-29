#include <iostream>
using namespace std;
class clsperson
{
  string _FullName;
  class clsAddress
  {
    private:
           string _AddressLine1;
           string _AddressLine2;
           string _City;
           string _Country;
    public:
    clsAddress(string AddressLine1 , string AddressLine2 , string City , string Country)
    {
      _AddressLine1 = AddressLine1;
      _AddressLine2 = AddressLine2;
      _City = City;
      _Country = Country;
    }
    void SetAddressLine1(string AddressLine1)
    {
      _AddressLine1 = AddressLine1;
    }
    string GetAddressLine1()
    {
      return _AddressLine1;
    }
    void SetAddressLine2(string AddressLine2)
    {
      _AddressLine2 = AddressLine2;
    }
    string GetAddressLine2()
    {
      return _AddressLine2;
    }
    void SetCity(string City)
    {
      _City = City;
    }
    string GetCity()
    {
      return _City;
    }
    void SetCountry(string Country)
    {
      _Country = Country;
    }
    string GetCountry()
    {
      return _Country;
    }
    void Print()
    {
      cout<<_AddressLine1<<endl;
      cout<<_AddressLine2<<endl;
      cout<<_City<<endl;
      cout<<_Country<<endl;
    }
  };
  public:
        void setFullName(string FullName)
        {
          _FullName = FullName;
        }
        string GetFullName()
        {
          return _FullName;
        }
       clsAddress Address = clsAddress("","","","");
       clsperson(string FullName , string AddressLine1 , string AddressLine2 , string City , string Country)
       {
         _FullName = FullName;
         Address = clsAddress(AddressLine1,AddressLine2,City,Country);
       }
};

int main() 
{
  clsperson Person1("Mohamed Ali","Buliding 10","Queen Rania","Aman","Jordon");
  Person1.Address.Print();
  
    
}