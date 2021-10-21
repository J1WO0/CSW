class Account
{
	public:
	int accountID,balance;
};
class AccountManager
{
	Account* array =new Account[10];
	public:
	int N=0;
	void depositing(int a,int b);
	void withdrawing(int a,int b);
	void transferring(int a,int b,int c);
	int checking(int a);
	void NEW();
	int ca(int a);
	int cb(int a);
	~AccountManager(){delete[] array;};
};
