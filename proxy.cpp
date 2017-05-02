

#include<iostream>
#include<string>
#include"proxy.h"


	void ProxyPassword::setPass(std::string password) {
		if (password.size() < 10)
		{

			std::cout << "The new password must be at least 10 characters" << std::endl;
		}
		else
		{
			realPass->setPass(password);
			std::cout << "The password was set to " << password << std::endl;
		}
	}

	void ProxyPassword::checkPass(std::string password) {
		if (password.size() < 10 || realPass->checkPass(password))
			std::cout << "Password accepted. Access granted" << std::endl;
		else
			std::cout << "The incorrect password was given" << std::endl;
	}
	ProxyPassword::~ProxyPassword() {};
	