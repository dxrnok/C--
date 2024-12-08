#include <iostream>
#include <cstring>
#pragma once

class Expr{
    public:
        // return a string representation of an expression 
        virtual std::string toStr() const = 0;
};