

#include<iostream>
#include<string>
#include"real.h"
#include"proxy.h"

void main()
{
	ProxyPassword* test = new ProxyPassword();
	std::cout << "Attempt to set a password that is too short:" << std::endl;
	test->setPass("ShortPass");
	std::cout << "Set a new password:" << std::endl;
	test->setPass("NewPassword");
	std::cout << "Give a wrong guess:" << std::endl;
	test->checkPass("WrongGuess");
	std::cout << "Give the correct password:" << std::endl;
	test->checkPass("NewPassword");
	delete test;

}
