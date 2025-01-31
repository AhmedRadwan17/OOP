#include <iostream>
using namespace std;
class clsA
{
  public:
         static int Fun1()
         {
           return 50;
         }
         int Fun2()
         {
           return 60;
         }
};
int main() 
{
  /* Difference Between Static Function and
  Not Static Function*/
  
    clsA A1;
   // Printing Static Function
    cout<<clsA::Fun1()<<endl;
    cout<<A1.Fun1()<<endl;
   // Printing Not Static  Function 
    cout<<A1.Fun2()<<endl;
    // It has been Mistake 
    cout<<clsA::Fun2();
}