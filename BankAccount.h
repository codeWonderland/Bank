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

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

#include <string>

using namespace std;

class Bank;

class BankAccount
{
	public:
		BankAccount(int accountNumber, double balance, Bank* bank);

		// rest of the public methods and operators go here
		void operator+=(int valueToAdd);
		void operator-=(int valueToSubtract);
		operator double() const;

		friend ostream& operator<<(ostream&out, BankAccount account);
	private:
		int mAccountNumber;
		double mBalance;
		Bank* mBankPtr;
};

ostream& operator<<(ostream&out, BankAccount account);

#endif // BANK_ACCOUNT_H
