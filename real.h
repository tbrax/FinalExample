
#ifndef REAL_HEADER
#define REAL_HEADER
#include<iostream>
#include<string>

class RealPassword {
private:
	std::string realPass;
public:
	RealPassword(const std::string setPass);
	void setPass(std::string newPassword);
	bool checkPass(std::string check);
	virtual ~RealPassword();
	/*RealPassword(const std::string setPass) : realPass(setPass) {}
	void setPass(std::string newPassword) 
	{
		realPass = newPassword;
	}
	bool checkPass(std::string check)
	{
		return check == realPass;
	}*/
};
#endif