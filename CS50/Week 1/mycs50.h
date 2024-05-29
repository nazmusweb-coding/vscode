#ifndef MYCS50_H
#define MYCS50_H

#include <iostream>     // cout, cin
#include <cctype>       // isdigit
#include <stdexcept>    // throw
#include <string>       // getline, stoi, stof, stod, stol, length

using namespace std;

char get_char(const char*);
double get_double(const char*);
float get_float(const char*);
int get_int(const char*);
long long get_long(const char*);
string get_string(const char*);

namespace mario
{
    int get_size(void);
    void print_grid(int);
} // namespace mario


#endif