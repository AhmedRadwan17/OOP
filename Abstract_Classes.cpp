// Abstract and Inference
#include <iostream>
using namespace std;
class clsmobile
{
         virtual void Dial(string PhoneNumber) = 0;
  
};
class clsIphone : clsmobile 
{
  public:
        void Dial(string PhoneNumber)
         {
           cout<<"It 's from "<<PhoneNumber<<endl;
         }
};
int main() 
{
  clsIphone Iphone;
  Iphone.Dial("02234222");
    
}