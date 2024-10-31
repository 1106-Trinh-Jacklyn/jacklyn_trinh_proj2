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

    if(operation == "ADD" || operation == "ADDS"){
        addCmd(num1, num2);
    }
    if(operation == "AND" || operation == "ANDS"){
        addCmd(num1, num2);
    }
    if(operation == "ASR" || operation == "ASRS"){
        asrCmd(num1, num2);
    }
    if(operation == "LSR" || operation == "LSRS"){
        lsrCmd(num1, num2);
    }
    if(operation == "LSL" || operation == "LSLS"){
        lslCmd(num1, num2);
    }
    if(operation == "NOT" || operation == "NOTS"){
        notCmd(num1);
    }
    if(operation == "ORR" || operation == "ORRS"){
        orrCmd(num1, num2);
    }
    if(operation == "SUB" || operation == "SUBS"){
        subCmd(num1, num2);
    }
    if(operation == "XOR" || operation == "XORS"){
        xorCmd(num1, num2);
    }
}

void Machine::addCmd(uint32_t num1, uint32_t num2){
    uint32_t sum = num1 + num2;
    bool overflow = ((sum < num1) || (sum < num2));

    cout << endl << "ADD 0x" << hex << uppercase << num1 << " 0x" << num2 << ": 0x" << sum << endl;
    
    if(overflow){
        cout << "Overflow: yes" << endl;
    }
    else{
        cout << "Overflow: no" << endl;
    }
}

void andCmd(uint32_t num1, uint32_t num2){

}

void asrCmd(uint32_t num, int shift){

}

void lsrCmd(uint32_t num, int shift){

}

void lslCmd(uint32_t num, int shift){

}

void notCmd(uint32_t num){

}

void orrCmd(uint32_t num1, uint32_t num2){

}

void subCmd(uint32_t num1, uint32_t num2){

}

void xorCmd(uint32_t num1, uint32_t num2){

}