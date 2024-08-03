// /*
// what a constructor is a constructor is
// a function that gets called automatically as soon as you create an object 
// so before what we could do is we could create an object and use that object to call functions from our class.
// well now as soon as we create this object it's going to call a function
// constructor we don't need to explicitlyuse that object to call a function it's going to do automatically.
// */

// #include<iostream>
// #include<string>
// using namespace std;
// //Its very simple
// //To do so, Its basically the same as creating a function
// //with a couple weird roles
// //Firstly, Constructors never have a return type. 
// //So we dont need to type int,void, strings etc
// //The only thing we need to do is type the constructor name

// //A constructor is always the same as the class name

// class RyansClass{
    
//     //We can copy RyansClass or just type it here. 
    
//     //Thats how c++ knows that its a constructor cuz once it comes to a function with the same name as the class it instantly decides that its a constructor
//     RyansClass(){
//         cout << "This is coming from a constructor and it will be printed automatically.";
//     }

// };

// int main(){
//     //Before we needed to create an object first, then call the object and the desired variable
//     //But now we just create an object and end the program 
//     //The constructor will do its stuff automagically
    

// }

// //typically people dont use constructors to print smth on the screen
// //The main reason the use it because: to give variables an initial value
// /*
//     For example:
//     This class has a variable called name
//     Suppose i have another variable called heigt, age, favourite_color,
//     so as soon as you create an object of the class you might want to assign all these variables beforehand


// */

//constructors part 2:


#include <iostream>
#include <string>
using namespace std;
/*
In order to do that: You need to add a parameter inside your constructor
Lets go ahead and assign name's value right here
Now we need to pass in string lets name it smth z



*/
class RyansClass{
private:
    string MyName;
public:
RyansClass(string z ){
    setName(z);
}
void setName(string x){
    MyName = x;
}
string getName(){
    return MyName;
}
   
};

int main(){
    RyansClass RyansObject("Lucky Rayan");
    cout << RyansObject.getName();
    return 0;

}



