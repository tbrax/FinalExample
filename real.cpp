

#include<iostream>
#include<string>
#include"real.h"

RealPassword::RealPassword(const std::string setPass) : realPass(setPass) {}
	void RealPassword::setPass(std::string newPassword)
	{
		realPass = newPassword;
	}
	bool RealPassword::checkPass(std::string check)
	{
		return check == realPass;
	}
	RealPassword::~RealPassword() {};

