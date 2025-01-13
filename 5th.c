
#include <stdio.h>
struct BankMgmt{
	int AccNumber;
	char *CustName;
	float AvlBalance;
	char *AccType;
}account;

int main()
{
	float money,deposit;
	account.AccNumber = 100155;
	account.CustName = "Venkat Krishna";
	account.AvlBalance = 4500.00;
	account.AccType = "Savings";
	printf("1.Withdrawal\n2.deposit\n3.Display Balance\n4.exit\n");
	int menu;
	start:
	printf("Enter your choice: ");
	scanf("%d",&menu);
	switch (menu){
		case 1:
			printf("Enter the money amount: ");
			scanf("%f",&money);
			if(account.AvlBalance >= money)
			{
				account.AvlBalance -= money;
				printf("Withdrawal Successfull!!!\n");
				printf("Available balance: %.2f\n",account.AvlBalance);
			}
			else
			{
				printf("You don't have the required balance\n");
			}
			goto start;
			break;
			
		case 2:
			//float deposit;
			printf("Enter the amount: ");
			scanf("%f",&deposit);
			account.AvlBalance += deposit;
			printf("Available Balance: \n",account.AvlBalance);
			goto start;
			break;
			
		case 3:
			printf("Account Number: %d\n",account.AccNumber);
			printf("Customer Name: %s\n",account.CustName);
			printf("Available balance: %.2f\n",account.AvlBalance);
			goto start;
			break;
			
		case 4:
			break;
			}
}
