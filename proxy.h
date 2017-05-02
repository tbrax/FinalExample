
#ifndef PROXY_HEADER
#define PROXY_HEADER
#include<iostream>
#include<string>
#include"real.h"

class ProxyPassword {
private:
	RealPassword* realPass = new RealPassword("DefaultPassword");

public:

	void setPass(std::string password);
	void checkPass(std::string password);
	virtual ~ProxyPassword();
};
#endif