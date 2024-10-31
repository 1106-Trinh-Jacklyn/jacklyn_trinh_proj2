#ifndef MACHINE_H
#define MACHINE_H

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdint>

using namespace std;

class Machine{
    public:
        void file(const string& filename);
        void parse(const string& line);
        void add(uint32_t num1, uint32_t num2);
};

#endif