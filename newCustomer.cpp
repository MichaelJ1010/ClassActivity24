#include "./newCustomer.hpp"
#include "./print.hpp"
#include "./customer.hpp"

#include <iostream>

using namespace std;

namespace customer {

	void newCustomer() { // asks customer to provide their id, name, and email for the struct
		string name;
		string email;
		int idNumber;
		cout << "what's your id?" << endl;
		cin >> idNumber;
		cout << "what's your name" << endl;
		cin.ignore();
		getline(cin, name);
		cout << "what's your email?" << endl;
		cin >> email;
		

		structure::Customer customer = { idNumber,name,email };
		printer::print(customer);

	}

}