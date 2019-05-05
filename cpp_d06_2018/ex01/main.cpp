/*
** EPITECH PROJECT, 2018
** convert
** File description:
** .cpp
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string.h>
#include <iomanip>
#include <cmath>

double convert_far_to_cels(float far)
{
    return (std::ceil((far - 32) * 5 / 9));
}

double convert_cels_to_far(float cel)
{
    return (std::ceil(cel * 9.0) / 5.0 + 32);
}

std::string string_upper(std::string line)
{
    for (int i = 0 ; line[i] ; i++) {
        if (line[i] >= 97 && line[i] <= 122 && islower(line[i]))
            line[i] -= 32;
    }
    return (line);
}

int main(__attribute__((unused))int argc, __attribute__((unused))char **argv)
{
    std::string line;
    std::vector<std::string> arr_string;
    std::string begin_line;

    std::getline(std::cin, line);
    line = string_upper(line);
    arr_string.emplace_back(&line[line.find_first_of(' ')]);
    begin_line = line.substr(0, line.find(' '));
    arr_string.push_back(begin_line);
    if (!(arr_string[0].compare(" CELSIUS")))
        std::cout << std::setw(16) << std::fixed << std::setprecision(3) <<
            convert_cels_to_far(std::stoi(arr_string[1])) << std::setw(16) <<
            " Fahrenheit" << std::endl;
    else if (!(arr_string[0].compare(" FAHRENHEIT")))
        std::cout << std::setw(16) << std::fixed << std::setprecision(3) <<
            convert_far_to_cels(std::stoi(arr_string[1])) << std::setw(16) <<
            " Celsius" << std::endl;
    return 0;
}