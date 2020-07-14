#include "SafePass.hpp"
#include <iostream>


int main() {
	std::string string;
	int inp;
	string = safepass::Input(string, '*', inp, 25);
	safepass::MinCharacterLimit(string, "Password length should be 7 character length\nTips: Use Up and Down characters, numbers and signs for your password.\n", 7); 
	return 0;
}
