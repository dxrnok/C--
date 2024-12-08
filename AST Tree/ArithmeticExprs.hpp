#include <iostream>
#include <cstring>
#include "BinaryExpr.hpp"
#pragma once

class AddExpr : public BinaryExpr{
    public:
        AddExpr(Expr* left, Expr* right);
        std::string toStr() const override;
};

class SubExpr : public BinaryExpr{
    public:
        SubExpr(Expr* left, Expr* right);
        std::string toStr() const override;
};

class MultiExpr : public BinaryExpr{
    public:
        MultiExpr(Expr* left, Expr* right);
        std::string toStr() const override;
};

class DivExpr : public BinaryExpr{
    public:
        DivExpr(Expr* left, Expr* right);
        std::string toStr() const override;
};

class ModExpr : public BinaryExpr{
    public:
        ModExpr(Expr* left, Expr* right);
        std::string toStr() const override;
};