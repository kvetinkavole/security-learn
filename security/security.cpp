/*
        Created by: KaeexS#9426, fixed and edited by kvetinka#9031
        For learning.
        You can add some crypt methods.
        You can add some Anti Debug, MemoryBreakPointsCheck, Anti Dumper, etc...
*/
#include <iostream>
#include <string>
#include <time.h>
#include "windows.h"

std::string RandomString(int len) //Random String for some generators etc..
{
    std::string str = { "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz" }, newstr{}; int pos{ 0 };
    while (newstr.size() != len) {
        pos = ((rand() % (str.size() - 1)));
        newstr += str.substr(pos, 1);
    }
    return newstr;
}
int main()
{
    int frst_value = { 1 }, sec_value = { 2 };//Using for if/else check//Using for if/else check
    char encryptor[9];/*number of bytes*/ int enc{ 0 }, preset{}; //starts byte
    //bytes
    encryptor[enc++] = 's'; encryptor[enc++] = 'e'; encryptor[enc++] = 'c';
    encryptor[enc++] = 'u'; encryptor[enc++] = 'r';
    encryptor[enc++] = 'i'; encryptor[enc++] = 't';
    encryptor[enc++] = 'y'; encryptor[enc++] = '\n'; //bytes

    std::string crypt = encryptor;//crypted string in BYTES (CAN'T BE VISIBLE IN CONSOLE AND REVERSE TOOLS)
    srand((unsigned)time(0));
    int RandNum;
    RandNum = (rand() % 6) + 1;

    if (frst_value < sec_value)
    {
        system("cls"); int selection{ 0 };
        std::cout << "   Securtiy LEARN \n   Created by: KaeexS#9426\n\n\n";
        std::cout << "   1. Random Number\n";
        std::cout << "   2. Random String\n";
        std::cout << "   3. Crypted String in bytes(Anti Bsembler by: kvetinka#9031)\n\n";
        std::cout << "   Select: ";  std::cin >> selection;

        switch (selection)
        {
        case 1:
            std::cout << "[*] " << RandNum << std::endl << std::endl;
            Sleep(1200); main(); break;
        case 2:
            std::cout << "[*] " << RandomString(20) << std::endl << std::endl;
            Sleep(1200); main(); break;
        case 3:
            std::cout << "[*] " << crypt << std::endl << std::endl;
            Sleep(1200); main(); break;
        default:
            std::cout << "command not found\n"; Sleep(1200); main(); break;
        }
    }
}
