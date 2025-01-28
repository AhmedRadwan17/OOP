#include <iostream>
using namespace std;
class clsperson
{
  public:
       string FullName = "Mohamed_Abu Salah";
};
class clsEmployee : public clsperson
{
  public:
       string Title = "Sakr";
};
int main() 
{
  clsEmployee Employee;
  
  clsperson * person = &Employee;
  cout<<person->FullName<<endl;
}