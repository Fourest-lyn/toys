//
// Created by Fourest on 2020/11/29.
//
#include <iostream>
#include <cstring>
#include <vector>

#ifndef MY_ACCOUNT_RECORD_H
#define MY_ACCOUNT_RECORD_H


class record
{
//Friends.


private:
    int amount;
    int year,month,day;
    std::string item;
    std::vector<std::string> tags;

public:
    record() =default;



};


#endif //MY_ACCOUNT_RECORD_H


/*todo list:
 * output according to tags.
 *
 */