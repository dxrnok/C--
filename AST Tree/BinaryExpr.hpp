#include <iostream>
#include <cstring>
#include "Expr.hpp"
#pragma once

class BinaryExpr : public Expr{
    protected:
        Expr* leftExpr;
        Expr* rightExpr;
    public:
        /* Construct a binary expression that can hold left and right expressions. */
        BinaryExpr(Expr* left , Expr* right);

        /* Return the left expression of this binary expression. */
        Expr* getLeftExpr() const;

        /* Set the left expression of this binary expression. */
        void setLeftExpr(Expr* left);

        /* Return the right expression of this binary expression. */
        Expr* getRightExpr() const;

        /* Set the right expression of this binary expression. */
        void setRightExpr(Expr* right);
};