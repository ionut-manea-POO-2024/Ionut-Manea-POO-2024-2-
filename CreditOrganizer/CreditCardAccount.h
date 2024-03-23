#pragma once
#include "LoyaltyScheme.h"

ref class CreditCardAccount
{
public:
	void RedeemLoyaltyPoints();

	static CreditCardAccount();

	static int GetNumberOfAccounts();
	CreditCardAccount(long number, double limit);
	CreditCardAccount();
	void SetCreditLimit(double amount);
	bool MakePurchase(double amount);
	void MakeRepayment(double amount);
	void PrintStatement();
	long GetAccountNumber();

	literal System::String^ name = "Super Platinum Card";

private:
	LoyaltyScheme^ scheme;

	static int numberOfAccounts = 0;
	initonly long accountNumber;
	double currentBalance;
	double creditLimit;

	static double interestRate;
};
