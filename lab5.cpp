/*
Author: Alice Easter
        Class: CSI 240-05
        Assignment: Lab 5
Date Assigned: 03/02/17
Description:
        Sets up a modifiable bank account in a modifiable bank
Certification of Authenticity:
        I certify that this is entirely my own work, except where I have given
        fully-documented references to the work of others. I understand the definition and
consequences of plagiarism and acknowledge that the assessor of this assignment
        may, for the purpose of assessing this assignment:
- Reproduce this assignment and provide a copy to another member of academic
- staff; and/or Communicate a copy of this assignment to a plagiarism checking
- service (which may then retain a copy of this assignment on its database for the
- purpose of future plagiarism checking)

 Adapted from code by Joshua Auerbach
*/

#include <iostream>
#include "Bank.h"
#include "BankAccount.h"

using namespace std;

int main()
{
	Bank bank("Awesome Bank", 123456789);
	
	BankAccount account1(1000, 450.00, &bank);
	BankAccount account2(3045, 20000.32, &bank);

	cout << "Account information: " << endl;
	cout << account1 << endl;
	cout << account2 << endl;

	account1 += 100.00;
	account1 -= 250.00;

	double balance = account1;
	cout << "current account1 balance is: " << balance << endl;

	account2 -= 100.30;

	bank.setName("More Awesome Bank");
	cout << "The bank has been renamed." << endl;

	cout << "Account information: " << endl;
	cout << account1 << endl;
	cout << account2 << endl;

	return 0;


}
