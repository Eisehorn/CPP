#include "Account.hpp"
#include <iostream>
#include <string>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(){}

void Account::_displayTimestamp() {
	char buff[20];
	time_t now = time(NULL);
	strftime(buff, 18, "%Y%m%d_%H%M%S", localtime(&now));
	std::cout<<"["<<buff<<"]"<<" ";
}

Account::Account(int initial_deposit) {
	_displayTimestamp();
	this->_amount = initial_deposit;
	this->_accountIndex = Account::_nbAccounts;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	Account::_totalAmount+=initial_deposit;
	std::cout<<"index:"<<this->_accountIndex<<";";
	std::cout<<"amount:"<<this->_amount<<";";
	std::cout<<"created"<<std::endl;
	Account::_nbAccounts++;
}

Account::~Account(){
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";";
	std::cout<<"amount:"<<this->_amount<<";";
	std::cout<<"closed"<<std::endl;
}

void Account::makeDeposit(int deposit) {
	_displayTimestamp();
	this->_nbDeposits++;
	std::cout<<"index:"<<this->_accountIndex<<";p_amount:"<<this->_amount<<";deposit:"<<deposit;
	this->_amount = this->_amount + deposit;
	std::cout<<";amount:"<<this->_amount<<";nb_deposits:"<<this->_nbDeposits<<std::endl;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
}

bool Account::makeWithdrawal(int withdrawal){
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";p_amount:"<<this->_amount;
	if (withdrawal < this->_amount) {
		std::cout<<";withdrawal:"<<withdrawal;
		this->_amount = this->_amount - withdrawal;
		this->_nbWithdrawals++;
		std::cout<<";amount:"<<this->_amount<<";nb_withdrawals:"<<this->_nbWithdrawals<<std::endl;
		Account::_totalNbWithdrawals++;
		Account::_totalAmount -= withdrawal;
		return 1;
	}
	else {
		std::cout<<";withdrawal:refused"<<std::endl;
		return 0;
	}
}

void Account::displayStatus() const {
	_displayTimestamp();
	std::cout<<"index:"<<this->_accountIndex<<";amount:"<<this->_amount<<";deposits:"<<this->_nbDeposits<<";withdrawals:"<<this->_nbWithdrawals<<std::endl;
}

int Account::getNbAccounts(){
	return _nbAccounts;
}

int Account::getTotalAmount(){
	return _totalAmount;
}

int Account::getNbDeposits(){
	return _totalNbDeposits;
}

int Account::getNbWithdrawals(){
	return _totalNbWithdrawals;
}

void Account::displayAccountsInfos() {
	_displayTimestamp();
	int nb_accounts = Account::getNbAccounts();
	int total = Account::getTotalAmount();
	int nb_deposit = Account::getNbDeposits();
	int nb_withdrawals = Account::getNbWithdrawals();

	std::cout<<"accounts:"<<nb_accounts<<";total:"<<total<<";deposits:"<<nb_deposit<<";withdrawals:"<<nb_withdrawals<<std::endl;
}

