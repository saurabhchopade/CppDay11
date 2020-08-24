#include <iostream>
using namespace std;

class Demo {
	int defaultVar = 10;

	private:
	int privateOne;

	public:
	int publicOne;

	protected:
	int protectedOne = 300;

	public:
	friend void friendFun(Demo demo);
	void getPrivateValues()	{
		cout << "Private Var Value = " << privateOne << endl;
	}

	void getPublicValues() {
		cout << "Public Var Value = " << publicOne << endl;
	}

	void defaultFun() {
		cout << "Default  Var = " << defaultVar <<endl;
	}
};


class Demo1 : public Demo {
	public:

	void getProtectedValues() {
		cout << "Protected Value = " << protectedOne <<endl;
	}
};


void friendFun(Demo objOfDemo){
		int var = objOfDemo.defaultVar;
		cout << "Accessing private var in Friend fun = " << var << endl;
}

int main() {
	Demo demo;

/* Not Allowed Because Var is Private;
	demo.privateOne = 100;
	demo.getPrivateValues();
*/

/* Not Allowed Because  of private
	demo.defaultVar = 10;
	demo.defaultFun();
*/

// Accessing public values
	demo.publicOne = 200;
	demo.getPublicValues();

//Accessing Protected Values
	Demo1 demo1;
	demo1.getProtectedValues();

//FriendFunction
	friendFun(demo);
}
