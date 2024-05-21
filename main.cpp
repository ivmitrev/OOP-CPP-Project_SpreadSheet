#include<iostream>
#include<cstring>
#include "Utility/CommandUtility.cpp"
#include "Utility/FileUtility.cpp"
#include "Utility/CellUtility.cpp"
#include "Types/Table/Table.cpp"
#include "Types/Row/Row.cpp"
#include "Types/Cell/Cell.cpp"
#include "Types/Cell/IntCell.cpp"
#include "Types/Cell/DoubleCell.cpp"
#include "Types/Cell/StringCell.cpp"
#include "Types/Cell/FormulaCell.cpp"


int main()
{
    while (true)
    { 
        std::cout << "Write a command!" << std::endl;
        std::string command;
        std::getline(std::cin,command);
        CommandUtility::ParseCommand(command); 
    }
    // std:: string str ="he\llo";
    return 0;
}