#include "ArithmeticExprs.hpp"

AddExpr::AddExpr(Expr* left, Expr* right) : BinaryExpr(left, right){}
std::string AddExpr::toStr() const {
    return leftExpr->toStr() + "+" + rightExpr->toStr();
}

SubExpr::SubExpr(Expr* left, Expr* right) : BinaryExpr(left, right){}
std::string SubExpr::toStr() const {
    return leftExpr->toStr() + "-" + rightExpr->toStr();
}

MultiExpr::MultiExpr(Expr* left, Expr* right) : BinaryExpr(left, right){}
std::string MultiExpr::toStr() const {
    return leftExpr->toStr() + "*" + rightExpr->toStr();
}

DivExpr::DivExpr(Expr* left, Expr* right) : BinaryExpr(left, right){}
std::string DivExpr::toStr() const {
    return leftExpr->toStr() + "/" + rightExpr->toStr();
}

ModExpr::ModExpr(Expr* left, Expr* right) : BinaryExpr(left, right){}
std::string ModExpr::toStr() const {
    return leftExpr->toStr() + "%" + rightExpr->toStr();
}