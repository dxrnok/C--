#include "ConstExpr.hpp"

ConstExpr::ConstExpr(int val) : value(val){}

std::string ConstExpr::toStr() const {
    return std::to_string(value);
}