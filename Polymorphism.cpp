#include <iostream>
using namespace std;

class Demo1 {
	public:

	void fun()	{
		cout << "\nI am in overriden method Of Class Demo1"<< endl;
	}

	void addNumber(int num1, int num2) {
		int addition = num1 + num2;
		cout << "\nAddition in addNumber method of 2 argument is = " << addition <<endl;
	}

	void addNumber(int num1, int num2, int num3) {
		int addition = num1 + num2 + num3;
		cout << "\nAddition in addNumber method of 3 arguments is =" << addition <<endl;
	}

};


class Demo2 : public Demo1 {
	public:

	void fun() {
		cout << "\nI am in overriding method Of Class Demo2" <<endl;
	}
};

int main() {
	Demo2 demo2;
	demo2.fun();

	Demo1 demo1;
	demo1.addNumber(10,10);
	demo1.addNumber(10,10,10);
}
