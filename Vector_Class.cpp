#include <iostream>
#include <vector>
using namespace std;
class clsA
{
  public:
         int A1;
    clsA(int value)
    {
      A1 = value;
    }
    void Print()
    {
      cout<<A1<<" "<<endl;
    }
};
int main() 
{
   vector<clsA>v1;
   for(int i = 0;i<4;i++)
   {
     v1.push_back((clsA(i)));
   }
   for(int i = 0;i<4;i++)
   {
     v1[i].Print();
   }
}