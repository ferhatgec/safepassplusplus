/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#ifndef SAFE_PASS_HPP
#define SAFE_PASS_HPP

#include <iostream>
#include <istream>
#include "./Library/inputplusplus.h"

#ifdef _WIN32
    #include <windows.h>
#else
    #include <unistd.h>
#endif

namespace safepass {
    int capacity_len = 0;
    const char password_char = '*';
    
    bool MinCharacterLimit(std::string str, const char* say, int len) {
    	if(str.length() < len && str.length() != len) {
		printf(say);
		return false;
	} else {
		return true;
	}
    }

    std::string Input(std::string rstr, const char password_char, int inp, int capacity) {
    	std::string str;
    	while(inp != '\n') {
    		if(capacity_len != capacity) {
    			inp = inputplusplus::CharInput();
    			capacity = str.length();
    			if(inp == 127) {
    				str.erase(str.end() - 1);
    				std::cout << '\b' << " " << '\b';
    			} else {
    				capacity_len++;
    				str.push_back(inp);
    				std::cout << password_char;
    			}
    		} else {
			return str;    		
    		}
    	}
    	printf("\n");
    }
}
#endif // SAFE_PASS_HPP
