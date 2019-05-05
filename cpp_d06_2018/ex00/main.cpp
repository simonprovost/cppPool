/*
** EPITECH PROJECT, 2018
** my_cat
** File description:
** .cpp
*/

#include <iostream>
#include <fstream>
#include <vector>


int read_files(char *file_name)
{
    std::string temp = (file_name);
    std::ifstream ifs(temp.c_str(), std::ios::in | std::ios::binary |
    std::ios::ate);
    std::ifstream::pos_type fileSize;

    if (ifs.is_open()) {
        fileSize = ifs.tellg();
        ifs.seekg(0, std::ios::beg);
        std::vector<char> bytes(fileSize);
        ifs.read(bytes.data(), fileSize);
        for (auto i = bytes.begin(); i != bytes.end(); ++i)
            std::cout << *i;
        ifs.close();
    } else {
        std::cerr << "my_cat" << ": " << file_name
            << ": No such file or directory" << std::endl;
        return (1);
    }
    return (0);
}

int main(__attribute__((unused))int argc, char **argv)
{
    int error = 0;

    if (!(argv[1])) {
        std::cerr << "my_cat" << ": Usage: " << argv[0] << " file [...]" <<
            std::endl;
        return (84);
    }
    for (int i = 1 ; argv[i] ; i++)
        if (read_files(argv[i]) == 1)
            error = 84;
    return (error);
}