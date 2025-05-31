#include <iostream>
#include <string.h>
using namespace std;
/* void say  (string msg, char p)
//, char p){
   { 
    cout<<" Hello Pawan! "<<msg << p;
  
    // puts("Hello Pawan! How are you ??");
}

main ()
{
//say();
say("How are you??" , 'A');


}

*/
string tell = "convo";

namespace first {
void error() {
cout <<"Pawan Singh Khnera, Hi Renu! How are you ?"<<endl;

}
};
namespace second {
void error() {

cout<< "Renu Gobari, Hi Pawan! I'm good. Hbu? \n";

}
}

main(){
     string tell = "talk";

first::error();
second::error();
cout<<::tell;
return 0;

}
