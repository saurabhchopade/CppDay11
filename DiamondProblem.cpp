#include <iostream>
using namespace std;

class A {
	public:

	void fun() {
		cout << "I am in Function of A";
	}
};

class B : public A {};

class C : public B {};

class D : public B , public C {};

int main() {
//Will get ambiguity error because diamond problem
	D d;
	d.fun();
}
