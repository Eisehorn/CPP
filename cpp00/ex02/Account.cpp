#include "Account.hpp"
#include <iostream>
#include <string>

Account::Account(int initial_deposit) {
    std::cout<<initial_deposit<<";";
    std::cout<<"amount:"<<this->_amount<<";";
    std::cout<<"created"<<std::endl;
}

Account::~Account(){
    std::cout<<this->_accountIndex<<";";
    std::cout<<"amount:"<<this->_amount<<";";
    std::cout<<"closed"<<std::endl;
}

// Account::

// Account::displayAccountsInfos(){
//     std::cout<<this->_nbAccounts<<std::endl;
//     std::cout<<this->_totalAmount<<std::endl;
//     std::cout<<this->_totalNbDeposits<<std::endl;
//     std::cout<<this->_totalNbWithdrawals<<std::endl;
// }