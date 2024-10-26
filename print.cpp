#include <iostream>
#include "./newCustomer.hpp"
#include "./customer.hpp"

using namespace std;

namespace printer {

	void print(structure::Customer customer) { // prints out the customer struct
		cout << endl << "id: " << customer.id << endl;
		cout << "name: " << customer.name << endl;
		cout << "email: " << customer.email << endl;
	}
}