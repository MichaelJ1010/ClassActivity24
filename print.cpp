#include <iostream>
#include "./newCustomer.hpp"

using namespace std;

namespace printer {

	void print(customer::Customer customer) {
		cout << endl << "id: " << customer.id << endl;
		cout << "name: " << customer.name << endl;
		cout << "email: " << customer.email << endl;
	}
}