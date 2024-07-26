//What if we need more parameters?
#include <iostream>
using namespace std;
/*
//lets add numbers
*/

int addNumbers(int x, int y, int b, int c){
    int answer = x + y + b + c;
    return answer;
//You are not limited to 2 parameters, YOu can use unlimited parameters.
}

int main(){
    cout << "Your Answer is: " << addNumbers(1,2,3,4);
    return 0;
}

/*
It added the following numbers 
// COUT system is a must here to print out the value
otherwise it wont print out the return value 

*/