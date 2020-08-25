#include <iostream>
using namespace std;
#include "convertor.cpp"

int main() {
	int meter = 1;
	int centimeter;

	centimeter = mathLib :: meterToCent(meter);

	cout << "Meter To centimeter = " << centimeter << endl;
}
