#include "Account.hpp"
#include <iostream>
#include <chrono>
#include <iomanip>
#include <sstream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initital_deposit )
	:	_accountIndex(_nbAccounts),
		_amount(initital_deposit),
		_nbDeposits(0),
		_nbWithdrawals(0) {
	_nbAccounts++;
	_totalAmount += initital_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account() {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::_displayTimestamp() {
	std::cout << "[19920104_091532] ";
	// auto now = std::chrono::system_clock::now();
	// auto in_time_t = std::chrono::system_clock::to_time_t(now);
	// std::stringstream ss;
	// ss << std::put_time(std::localtime(&in_time_t), "[%Y%m%d_%H%M%S] ");
	// std::cout << ss.str();
}

int	Account::getNbAccounts( void ) {
	return (_nbAccounts);
}

int	Account::getTotalAmount( void ) {
	return (_totalAmount);
}

int	Account::getNbDeposits( void ) {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ) {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout
	<< "accounts:" << _nbAccounts
	<< ";total:" << _totalAmount
	<< ";deposits:" << _totalNbDeposits
	<< ";withdrawals:" << _totalNbWithdrawals
	<< std::endl;
}

void	Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex
	<< ";amount:" << _amount
	<< ";deposits:" << _nbDeposits
	<< ";withdrawals:" << _nbWithdrawals
	<< std::endl;
}

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex
	<< ";p_amount:" << _amount
	<< ";deposit:" << deposit
	<< ";amount:" << (_amount + deposit)
	<< ";nb_deposits:" << (_nbDeposits + 1)
	<< std::endl;
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout
	<< "index:" << _accountIndex
	<< ";p_amount:" << _amount
	<< ";withdrawal:";
	if (_amount < withdrawal) {
		std::cout << "refused" << std::endl;
		return (false);
	}
	std::cout
	<< withdrawal
	<< ";amount:" << (_amount - withdrawal)
	<< ";nb_withdrawals:" << (_nbWithdrawals + 1)
	<< std::endl;
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalAmount -= withdrawal;
	_totalNbWithdrawals++;
	return (true);
}

int	Account::checkAmount( void ) const {
	return (_amount);
}
