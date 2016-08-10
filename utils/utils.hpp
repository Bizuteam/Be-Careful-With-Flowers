#ifndef DEF_UTILS
#define DEF_UTILS

#include <iostream>

extern std::string filepath;

const std::string currentDateTime();
std::string Initialise_Logs();
void Write_Logs(std::string message);

#endif
