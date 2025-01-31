#include <iostream>
using namespace std;
class clsA
{
public:
      int Number;
      clsA()
      {
        Number =10;
      }
        void Print()
        {
          cout<<"Number: "<<Number<<endl;
        }
};  
        // Call By Value
        void Fun1(clsA A)
        {
          A.Number = 50;
        }
        // Call By Reference 
        void Fun2(clsA &A)
        {
          A.Number = 20;
        }
int main() 
{
   clsA A1;
   
  // Before Calling any function 
   A1.Print();
   // OutPut = 10 
   
  // After Calling By Value
   Fun1(A1);
   A1.Print();
  // OutPut = 10 
  
  // After Calling By Reference
   Fun2(A1);
   A1.Print();
   // OutPut = 20
}