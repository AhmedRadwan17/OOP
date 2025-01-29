// Friend Function 
#include <iostream>
using namespace std;
class clsA
{
      private:
              int A = 50; 
              int B = 20;
    friend int sum(clsA A1);
  
};
   int sum(clsA A1)
   {
     return A1.A + A1.B;
   }
int main() 
{
  clsA A1;
 cout<<sum(A1);
}