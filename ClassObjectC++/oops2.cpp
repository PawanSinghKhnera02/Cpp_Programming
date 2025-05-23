#include <iostream>  
using namespace std;  

//constructor and destructor
//C++ destructor cannot have parameters. Moreover, modifiers can't be applied on destructors.
class Employee  
 {  
  public:
  Employee()
  {
    cout<< "default constructor invoked"<<endl;
  }   

  ~Employee()
  {
    cout<< "Destructor is invoked"<<endl;
  }
};  

int main(){
    Employee e1;
    Employee e2;
    return 0;
    
}
