#include <iostream>
using namespace std;
class clsA
{
  private:
         int _Var1= 20;
         int _Var2 = 30;
 
 friend class clsB;
};
class clsB 
{
  public:
  
        void Print(clsA A1)
        {
          cout<<A1._Var1<<endl;
          cout<<A1._Var2<<endl;
        }
};
int main() 
{   clsA A1;
    clsB B1;
    B1.Print(A1);
}