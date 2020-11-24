/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#include <iostream>
#include <string>
#include <sstream>

#include <FFont.hpp>
#include <Default.hpp>

std::string
FFont::GetSpecificLine(const std::string& font, unsigned __line) {	
    unsigned __line__ = 0;
    
    std::string line;
    std::istringstream stream(font);
    
    while(std::getline(stream, line)) { 
    	__line__++; 
    
    	if(__line == __line__) break;	
    }
    
    return line;
}


void
FFont::Generate(ffont_default_t &font, std::string text) {
	std::string generated_text = "";
	unsigned line = 0;
	
	do {
		
		line++;
		for(unsigned i = 0; text[i] != '\0'; i++) {
			switch(text[i]) {
				case 'a':
					generated_text.append(GetSpecificLine(font.a, line) + " ");
					break;
				
				case 'b':
					generated_text.append(GetSpecificLine(font.b, line) + " ");
					break;
				
				case 'c':
					generated_text.append(GetSpecificLine(font.c, line) + " ");
					break;
				
				case 'd':
					generated_text.append(GetSpecificLine(font.d, line) + " ");
					break;
				
				case 'e':
					generated_text.append(GetSpecificLine(font.e, line) + " ");
					break;
				
				
				case 'f':
					generated_text.append(GetSpecificLine(font.f, line) + " ");
					break;
				
				case 'g':
					generated_text.append(GetSpecificLine(font.g, line) + " ");
					break;
					
				case 'h':
					generated_text.append(GetSpecificLine(font.h, line) + " ");
					break;
				
				case 'i':
					generated_text.append(GetSpecificLine(font.i, line) + " ");
					break;

				case 'j':
					generated_text.append(GetSpecificLine(font.j, line) + " ");
					break;
				
				case 'k':
					generated_text.append(GetSpecificLine(font.k, line) + " ");
					break;
					
				case 'l':
					generated_text.append(GetSpecificLine(font.l, line) + " ");
					break;
					
				case 'm':
					generated_text.append(GetSpecificLine(font.m, line) + " ");
					break;
				
				case 'n':
					generated_text.append(GetSpecificLine(font.n, line) + " ");
					break;
					
				case 'o':
					generated_text.append(GetSpecificLine(font.o, line) + " ");
					break;
				
				case 'p':
					generated_text.append(GetSpecificLine(font.p, line) + " ");
					break;
				
				case 'q':
					generated_text.append(GetSpecificLine(font.q, line) + " ");
					break;
					
				case 'r':
					generated_text.append(GetSpecificLine(font.r, line) + " ");
					break;
				
				case 's':
					generated_text.append(GetSpecificLine(font.s, line) + " ");
					break;
				
				case 't':
					generated_text.append(GetSpecificLine(font.t, line) + " ");
					break;
				
				case 'u':
					generated_text.append(GetSpecificLine(font.u, line) + " ");
					break;
				
				case 'w':
					generated_text.append(GetSpecificLine(font.w, line) + " ");
					break;
				
				case 'x':
					generated_text.append(GetSpecificLine(font.x, line) + " ");
					break;
					
				case 'y':
					generated_text.append(GetSpecificLine(font.y, line) + " ");
					break;
					
				case 'z':
					generated_text.append(GetSpecificLine(font.z, line) + " ");
					break;
				
				case ' ':
					generated_text.append("  ");
					break;
					
				default:			
					break;
			}
		}
		
		generated_text.append("\n");
	} while(line != 5);
	
	std::cout << generated_text;
}


void HelpFunction(char* argument) {
	std::cout << "Fegeya FFont - Generate ASCII arts!\n" 	      <<
				 "Usage: " << argument << " [option] text\n----\n" <<
				 argument << " [--d --default] text\n" <<
				 argument << " [--d --default] text text1 text2 : Multiple texts\n";
}

int main(int argc, char** argv) {	
	if(argc < 3) {
		HelpFunction(argv[0]);
		return 0;
	}
	
	std::string font(argv[1]);
	std::string text;	
	

	for (auto i = int{2}; i < argc; ++i) {
        text.append(argv[i]);
        text.append(" ");
    }
    
	if(font == "--d" || font == "--default") {
		FFont_Default font;
		FFont gen;

		ffont_default_t default_font = font.Init();
				
		gen.Generate(default_font, text);
	} else { HelpFunction(argv[0]); }
}
