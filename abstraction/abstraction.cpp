#include <iostream>
using namespace std;
#include "conversion.h"

int main() {
	int meter = 1;
	int centimeter;

	centimeter = meterToCent(meter);

	cout << "Meter To centimeter = " << centimeter << endl;
}
