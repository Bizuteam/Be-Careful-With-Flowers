#include <iostream>
#include <fstream>
#include <stdio.h>
#include <time.h>

#include "utils.hpp"

std::string globalFilepath;

// Get current date/time, format is YYYY-MM-DD.HH:mm:ss
const std::string getCurrentDateTime() {
    time_t now = time(0);
    struct tm tstruct;
    char buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

    return buf;
}

void Initialise_Logs() {

  std::string currentTime = getCurrentDateTime();
  globalFilepath = "./Logs/LogFile_";
  globalFilepath.append(currentTime);
  globalFilepath.append(".log");
  std::ofstream ofs;

  system("mkdir \"./Logs\"");
	ofs.open(globalFilepath, std::ofstream::out | std::ofstream::app);
	ofs << "*******************************************************" << std::endl;
	ofs << "Program started at " + currentTime << std::endl;
	ofs << "*******************************************************" << std::endl;
	ofs.close();
}

void Write_Logs(std::string message) {

	std::ofstream ofs;
	ofs.open(globalFilepath, std::ofstream::out | std::ofstream::app);
	ofs << message << std::endl;
	ofs.close();
}

void End_Logs() {

  std::string currentTime = getCurrentDateTime();
  std::ofstream ofs;
  ofs.open(globalFilepath, std::ofstream::out | std::ofstream::app);
  ofs << "*******************************************************" << std::endl;
  ofs << "Program ended at " + currentTime << std::endl;
  ofs << "*******************************************************" << std::endl;
  ofs.close();
}
