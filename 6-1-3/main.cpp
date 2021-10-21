#include <iostream>
#include <string>
#include "accounts.h"
using namespace std;
int main()
{
	AccountManager AM;
	while(1)
	{
		cout << "Job?" << endl;
		string s;
		int a,b,c;
		cin >> s;
		if (s=="Q")
			break;
		else if (s=="N")
		{
			if (AM.N>=10)
			{
				cout << "Maximum number of accounts reached" << endl;
				continue;
			}
			AM.AccountManager::NEW();
			cout << "Account of user " << AM.N-1 << " registered" << endl;
			cout << "Balance of user " << AM.AccountManager::ca(AM.N-1) << ": " << AM.AccountManager::checking(AM.N-1) << endl;
		}
		else if (s=="D")
		{
			cin >> a >> b;
			if (a<AM.N && AM.AccountManager::cb(a)+b<=1000000)
			{
				AM.AccountManager::depositing(a,b);
				cout << "Success: Deposit to user " << a << " " <<  b <<endl;
			}
			else if (a>=AM.N)
			{
				cout << "Account does not exist" << endl;
				continue;
			}
			else
                                cout << "Failure: Deposit to user " << a  << " " <<  b << endl;
                        cout << "Balance of user " << a << ": " << AM.AccountManager::checking(a) << endl;

		}
		else if (s=="W")
		{
			cin >> a >> b;
			if (a<AM.N && AM.AccountManager::cb(a)-b>=0)
			{
				AM.AccountManager::withdrawing(a,b);
				cout << "Success: Withdraw from user " << a << " " << b << endl;
			}
			else if (a>=AM.N)
			{
				cout <<"Account does not exist" << endl;
				continue;
			}
			else
				cout << "Failure: Withdraw from user " << a << " " << b << endl;
                        cout << "Balance of user " << a << ": " << AM.AccountManager::checking(a) << endl;

		}
		else if (s=="T")
		{	
			cin >> a >> b >> c;
			if (AM.AccountManager::cb(a)-c>=0 && AM.AccountManager::cb(b)+c<=1000000 && a<AM.N && b<AM.N)
			{
				AM.AccountManager::transferring(a,b,c);
				cout << "Success: Transfer from user " << a << "to user " << b << c << endl;
			}
			else if (a>=AM.N || b>=AM.N)
			{
				cout << "Account  does not exist" << endl;
				continue;
			}
			else 
				cout << "Failure: Transfer from user " << a << "to user " << b << " " << c << endl;
                        cout << "Balance of user " << a << ": " << AM.AccountManager::checking(a) << endl;
			cout << "Balance of user " << b << ": " << AM.AccountManager::checking(b) << endl;

		}
	}
	return 0;
}


			
