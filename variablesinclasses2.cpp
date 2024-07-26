/* STRINg is basically another name for words.

*/

//THIS IS THE Right WAY:
#include<iostream>
#include<string>

using namespace std;

class RyanClass{
    //Nothing outside my class can access this variable when we use private
    //Now we need to make a public function to access it from main
    //We cant directly get access to the private function,
    // so we created public function
    // 1. To set the name and 2. To get the name
    public:
        void setName(string x){ //THIS IS A SET FUNCTION
            Name = x;
        }
        string getName(){
            return Name;
        }
    private:
        string Name;
};

int main(){
    RyanClass RyanObj;
    //Again creating an object then setting the name on main function.
    // outputting it via getName function
    RyanObj.setName("Sir Ryan");
    cout << RyanObj.getName();
    
    return 0;
}

