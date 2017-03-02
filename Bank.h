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

#ifndef BANK_H
#define BANK_H

#include <string>

using namespace std;

class Bank
{
	public:
		Bank(string name, int routingNumber);

		string getName() const;
		void setName(string name);

		int getRoutingNumber() const;
		void setRoutingNumber(int routingNumber);

	private:
		string mName;
		int mRoutingNumber;	

};

#endif // BANK_H
