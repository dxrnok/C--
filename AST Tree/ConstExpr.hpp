#include <iostream>
#include <cstring>
#include "Expr.hpp"
#pragma once

class ConstExpr : public Expr{
    private:
        int value;
    public:
        ConstExpr(int value);
        virtual std::string toStr() const override;
};