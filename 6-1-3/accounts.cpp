#include "accounts.h"
void AccountManager::depositing(int a,int b)
{
	array[a].balance+=b;
}
void AccountManager::withdrawing(int a,int b)
{
	array[a].balance-=b;
}
void AccountManager::transferring(int a,int b,int c)
{
	array[a].balance-=c;
	array[b].balance+=c;
}
int AccountManager::checking(int a)
{
	return array[a].balance;
}
void AccountManager::NEW()
{
	array[N].accountID=N;
	array[N].balance=0;
	N=N+1;
}
int AccountManager::ca(int a)
{
	return array[a].accountID;
}
int AccountManager::cb(int a)
{
	return array[a].balance;
}
