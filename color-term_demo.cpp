// Copyright (c) 2015 Lief Swanson
// URL           https://github.com/liefswanson/color-termpp

#include <iostream>
#include "color-term_inl.hpp"

int main(int argc, char *argv[]) {
	std::cout << term::reset << "hello boring plain text..." << std::endl;
	std::cout << term::light::on << term::red << "hello light red!"  << std::endl;
	// explicitly toggle the lighter colors off again
	// note that the color is still red
	std::cout << term::light::off <<"hello red!" << std::endl;
	std::cout << term::ital::on << "hello italic red!" << std::endl;
	// note that the italics were not turned off
	std::cout << term::light::on << term::uline::on << term::blue << "hello underlined italic light blue!" << std::endl;
	std::cout << term::bg::light::green << "hello text abomination i can barel read"<< std::endl;
	// background colors should be reset BEFORE a line break, trust me...
	// I recommend just not using them they are a pain
	std::cout <<term::reset<< "hello the reality of what the new line character actually does in many terminals..." << std::endl;
	return 0;
}
