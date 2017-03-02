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

#include "BankAccount.h"
#include "Bank.h"

BankAccount::BankAccount(int accountNumber, double balance, Bank *bank) :
		mAccountNumber(accountNumber), mBalance(balance), mBankPtr(bank)
{
}

void BankAccount::operator+=(int valueToAdd)
{
	mBalance += valueToAdd;
}

void BankAccount::operator-=(int valueToSubtract)
{
	mBalance -= valueToSubtract;
}

BankAccount::operator double() const {
	return mBalance;
}

ostream& operator<<(ostream&out, BankAccount account)
{
	string tempString = account.mBankPtr->getName() + ", Routing Number: "
						+ to_string(account.mBankPtr->getRoutingNumber())
						+ " | Account: " + to_string(account.mAccountNumber)
						+ ", Balance: $" + to_string(account.mBalance);
	out << tempString;
	return out;
}