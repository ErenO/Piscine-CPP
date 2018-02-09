/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eozdek <eozdek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/02 16:17:07 by eozdek            #+#    #+#             */
/*   Updated: 2017/10/02 20:21:34 by eozdek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include "Account.class.hpp"

//public

Account::Account (int initial_deposit) {
    if (initial_deposit >= 0) {
        this->_nbWithdrawals = 0;
        this->_nbDeposits = 0;
        this->_amount = initial_deposit;
        Account::_totalAmount += initial_deposit;
        this->_accountIndex = Account::_nbAccounts;
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
        Account::_nbAccounts += 1;
    }
    return ;
}

Account::~Account ( void ) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
    return ;
}

int Account::getNbAccounts( void ) {
    return Account::_nbAccounts;
}

int Account::getTotalAmount( void ) {
    return Account::_totalAmount;
}

int Account::getNbDeposits( void ) {
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals( void ) {
    return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos( void ) {
    Account::_displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
    return ;
}

void Account::makeDeposit( int deposit ) {
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits += 1;
    this->_nbDeposits += 1;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";deposit:" << deposit;
    this->_amount += deposit;
    std::cout << ";amount:" <<this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal ) {
    if (Account::_totalAmount > withdrawal && this->_amount > withdrawal) {
        Account::_totalAmount -= withdrawal;
        Account::_totalNbWithdrawals += 1;
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
        this->_nbWithdrawals += 1;
        this->_amount -= withdrawal;
        std::cout << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return (true);
    } else {
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << "refused" << std::endl;
        return (false);
    }
}

int Account::checkAmount( void ) const {
    return (0);
}

void Account::displayStatus( void ) const {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

//private

void Account::_displayTimestamp( void ) {
    char t[19];
    std::time_t result = std::time(NULL);
    std::strftime(t, sizeof(t), "[%Y%m%d_%H%M%S] ", std::localtime(&result));
    std::cout << t;
    // std::cout << "[20150406_153629] ";
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
