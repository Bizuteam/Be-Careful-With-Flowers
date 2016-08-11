#include <iostream>
#include <sstream>
#include <fstream>
#include <ctime>
#include <iterator>

#include "utils/utils.hpp"
#include "globalMap.hpp"

int main(int argc, char **argv) {
	srand(time(0));

	std::string mode = "terminal";

	Initialise_Logs();
	if(argc > 1) {
		std::string wantedMode = "terminal";
		if(wantedMode.compare("gui") == 0) {
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
		Write_Logs("[Error] No know launching mode is set. Error code: 1.");
		return 1;
	}

	Write_Logs("[Information] Program ended as intended. Return code: 0.");
	End_Logs();
	return 0;
}
