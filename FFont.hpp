/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#ifndef FFONT_HPP
#define FFONT_HPP

#include <iostream>
#include <string>
#include "fonts/Default.hpp"

static inline std::string STR(const char* _ch) {
	return (std::string)_ch;
}


class FFont {
public:
	void Generate(ffont_default_t &font, std::string text); 
	std::string GetSpecificLine(const std::string& font, unsigned line);
};

#endif // FFONT_HPP
