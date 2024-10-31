#ifndef MACHINE_H
#define MACHINE_H

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdint>

using namespace std;

class Machine{
    int N = 0, Z = 0;
    void print(string& operation, uint32_t num1, uint32_t num2, uint32_t result);
    void flag(uint32_t result);

    public:
        void file(const string& filename);
        void parse(const string& line);
        void addCmd(uint32_t num1, uint32_t num2);
        void andCmd(uint32_t num1, uint32_t num2);
        void asrCmd(uint32_t num, int shift);
        void lsrCmd(uint32_t num, int shift);
        void lslCmd(uint32_t num, int shift);
        void notCmd(uint32_t num);
        void orrCmd(uint32_t num1, uint32_t num2);
        void subCmd(uint32_t num1, uint32_t num2);
        void xorCmd(uint32_t num1, uint32_t num2);
};

#endif