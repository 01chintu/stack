#include <iostream>
using namespace std;

class complex{
	int a, b;
	
public:
	// A constructor in c++ is a special type of method or member 
	// function that is called automatically at the time of object creation. 
	// You can refer object as the instance of the class. Its main purpose is to initialize 
	// the object with values that are specified by the user at the time of creation and 
	// if the user doesn’t specify any value at the time of creation then it will assign or initialize the object with default values.
	
	complexw(void);  // create constructor
	void printNum(){
		cout << "Your Num is " << a << " + " << b << "i" << endl;
	}
};

complex ::complexw(void){
	a = 10;
	b = 0;
}
int main(){
	complex c1, c2, c3;
	c1.printNum();
	c2.printNum();
	c3.printNum();
	return 0;
}
