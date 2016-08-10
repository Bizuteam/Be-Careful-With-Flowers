#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <ctime>
#include <iterator>

#include "utils\utils.hpp";

int main(int argc, char **argv) {
	srand(time(0));

	std::string mode = "terminal";

	if(argc > 1) {
		if(argv[1].compare("gui") == 0) {
			mode = "gui";
		}
		else {
			Write_Logs("[Warning]Wrong argument, continuing with default parameter: terminal.");
		}
	}

	if(mode.compare("gui") == 0) {
		//GUIMain();
	}
	else if(mode.compare("terminal") == 0) {
		//ConsoleMain();
	}
	else {
		std::cerr << "Error when launching mode";
		Write_Logs("[Error] No know launching mode is set. Error code: 1.");
		return 1;
	}

	return 0;
}
