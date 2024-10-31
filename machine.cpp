#include "machine.h"

void Machine::file(const string& filename){
    ifstream file(filename);

    if(file.is_open() == false){
        cout << "Can't open file." << endl;
        return;
    }

    string line;

    while(getline(file, line)){
        parse(line);
    }

    file.close();
}

void Machine::parse(const string& line){
    string operation;
    string hex1, hex2;
    int count = 0;
    int length = line.length();

    while(count < length && line[count] != ' '){
        operation += line[count++];
    }

    while(count < length && line[count] == ' '){
        count++;
    }

    while(count < length && line[count] != ' '){
        hex1 += line[count++];
    }

    while(count < length && line[count] == ' '){
        count++;
    }

    while(count < length){
        hex2 += line[count++];
    }

    uint32_t num1 = stoul(hex1, nullptr, 16);
    uint32_t num2 = stoul(hex2, nullptr, 16);

    if(operation == "ADD"){
        addCmd(num1, num2);
    }
    if(operation == "ADDS"){
        addsCmd(num1, num2);
    }
    if(operation == "AND"){
        andCmd(num1, num2);
    }
    if(operation == "ANDS"){
        andsCmd(num1, num2);
    }
    if(operation == "ASR"){
        asrCmd(num1, num2);
    }
    if(operation == "ASRS"){
        asrsCmd(num1, num2);
    }
    if(operation == "LSR"){
        lsrCmd(num1, num2);
    }
    if(operation == "LSRS"){
        lsrsCmd(num1, num2);
    }
    if(operation == "LSL"){
        lslCmd(num1, num2);
    }
    if(operation == "LSLS"){
        lslsCmd(num1, num2);
    }
    if(operation == "NOT"){
        notCmd(num1);
    }
    if(operation == "NOTS"){
        notsCmd(num1);
    }
    if(operation == "ORR"){
        orrCmd(num1, num2);
    }
    if(operation == "ORRS"){
        orrsCmd(num1, num2);
    }
    if(operation == "SUB"){
        subCmd(num1, num2);
    }
    if(operation == "SUBS"){
        subsCmd(num1, num2);
    }
    if(operation == "XOR"){
        xorCmd(num1, num2);
    }
    if(operation == "XORS"){
        xorsCmd(num1, num2);
    }
}

void Machine::addCmd(uint32_t num1, uint32_t num2){
    uint32_t result = num1 + num2;
    print(operation, num1, num2, result);
}

void Machine::addsCmd(uint32_t num1, uint32_t num2){
    uint32_t result = num1 + num2;
    flag(result);
    print(operation, num1, num2, result);
}

void Machine::andCmd(uint32_t num1, uint32_t num2){
    uint32_t result = num1 & num2;
    print(operation, num1, num2, result);
}

void Machine::andsCmd(uint32_t num1, uint32_t num2){
    uint32_t result = num1 & num2;
    flag(result);
    print(operation, num1, num2, result);
}

void Machine::asrCmd(uint32_t num, int shift){
    uint32_t result = 
    print(operation, num1, num2, result);
}

void Machine::asrsCmd(uint32_t num, int shift){
    uint32_t result = 
    flag(result);
    print(operation, num1, num2, result);
}

void Machine::lsrCmd(uint32_t num, int shift){
    uint32 result = 
    print(operation, num1, num2, result);
}

void Machine::lsrsCmd(uint32_t num, int shift){
    uint32 result = 
    flag(result);
    print(operation, num1, num2, result);
}

void Machine::lslCmd(uint32_t num, int shift){
    uint32 result = 
    print(operation, num1, num2, result);
}

void Machine::notCmd(uint32_t num){
    uint32 result = 
    print(operation, num1, num2, result);
}

void Machine::orrCmd(uint32_t num1, uint32_t num2){
    uint32 result = 
    print(operation, num1, num2, result);
}

void Machine::subCmd(uint32_t num1, uint32_t num2){
    uint32 result = 
    print(operation, num1, num2, result);
}

void Machine::xorCmd(uint32_t num1, uint32_t num2){
    uint32 result = 
    print(operation, num1, num2, result);
}

void Machine::print(string& operation, uint32_t num1, uint32_t num2, uint32_t result){
    cout << operation << " 0x" << hex << uppercase << num1 << " 0x" << num2 << ": 0x" << result << endl;
    cout << "N: " << N << " Z: " << Z << endl;
}

void Machine::print(string& operation, uint32_t num, uint32_t result){
    cout << operation << " 0x" << hex << uppercase << num << ": 0x" << result << endl;
    cout << "N: " << N << " Z: " << Z << endl;
}

void Machine::flag(uint32_t result){
    if(result == 0){
        Z = 1;
    }
    else{
        Z = 0;
    }

    if((result & 0x80000000) == 0){
        N = 0;
    }
    else{
        N = 1;
    }
}