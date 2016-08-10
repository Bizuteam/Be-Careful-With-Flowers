#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <time.h>

#include "utils.hpp"

// Get current date/time, format is YYYY-MM-DD.HH:mm:ss
const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}

std::string Initialise_Logs() {

	std::string currentTime = currentDateTime();

	mkdir("./Logs");
	filepath = "./Logs/LogFile_";
	filepath.append(currentTime);
	filepath.append(".log");

	std::ofstream ofs;
	ofs.open(filepath, std::ofstream::out | std::ofstream::app);

	ofs << "*******************************************************" << std::endl;
	ofs << "Program started at "
	ofs << currentTime << std::endl;
	ofs << "*******************************************************" << std::endl;

	ofs.close;

	return 0;
}

void Write_Logs(std::string message) {

	std::ofstream ofs;
	ofs.open(filepath, std::ofstream::out | std::ofstream::app);

	ofs << message << std::endl;

	ofs.close;

}
