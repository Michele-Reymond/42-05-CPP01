#include "Harl.hpp"

Harl::Harl() {
    std::cout << COLOR << "Oh no Harl is in the room" << COLOR_RESET << std::endl;
    this->_alert[0] = "DEBUG";
    this->_alert[1] = "INFO";
    this->_alert[2] = "WARNING";
    this->_alert[3] = "ERROR";
}

Harl::~Harl() {
    std::cout << COLOR << "Yes Harl is leaving! We are safe now!" << COLOR_RESET << std::endl;
}

std::string	Harl::_to_upper(std::string str)
{
	for (int i = 0; str[i]; i++)
		str[i] = toupper(str[i]);
	return (str);
}

void Harl::_debug( void ) {
    std::cout << "______DEBUG______" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !";
    std::cout << std::endl << std::endl;
}

void Harl::_info( void ) {
    std::cout << "______INFO______" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !";
    std::cout << std::endl << std::endl;
}

void Harl::_warning( void ) {
    std::cout << "______WARNING______" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
    std::cout << std::endl << std::endl;
}

void Harl::_error( void ) {
    std::cout << "______ERROR______" << std::endl;
    std::cout << "This is unacceptable ! I want to speak to the manager now.";
    std::cout << std::endl << std::endl;
}

void Harl::complain( std::string level ) {
    harls_functions f[] = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
    level = _to_upper(level);
    for (int i = 0; i < 4; i++) {
        if (this->_alert[i] == level)
            (this->*f[i])();
    }
}