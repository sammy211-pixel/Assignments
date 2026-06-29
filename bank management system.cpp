#include<iostream>
#include<string>
using namespace std;
class AccountHolder{
	protected:
		string name;
		public:
			AccountHolder(string n){
				name = n;
			}
			void setName(string n){
				name = n;
			}
			string getName(){
				return name;
			}
	
};
class BankAccount:public AccountHolder{
	private:
		int accountNumber;
		double balance;
	public:
		BankAccount(string n, int accNo, double bal):AccountHolder(n){
			accountNumber = accNo;
			balance = bal;
		}	
		int getAccountNumber(){
			return accountNumber;
		}
		double getBalance(){
			return balance;
		}
	
};
class SavingsAccount:public BankAccount{
	private:
		double interestRate;
	public:
		SavingsAccount(string n, int accNo, double bal, double rate):BankAccount(n, accNo, bal){
			interestRate = rate;
		}	
	public:
		double getInterestRate(){
			return interestRate;
		}	
};
int main(){
	SavingsAccount accl("John", 4564, 5000, 10);
	cout<<accl.getName()<<endl;
	cout<<accl.getAccountNumber()<<endl;
	cout<<accl.getBalance()<<endl;
	
	cout<<accl.getInterestRate()<<endl;
	return 0;
}
