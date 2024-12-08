#include "BinaryExpr.hpp"

/* Construct a binary expression that can hold left and right expressions. */
BinaryExpr::BinaryExpr(Expr* left , Expr* right) : leftExpr(left), rightExpr(right){}

/* Return the left expression of this binary expression. */
Expr* BinaryExpr::getLeftExpr() const {return leftExpr;}

/* Set the left expression of this binary expression. */
void BinaryExpr::setLeftExpr(Expr* left){leftExpr = left;}

/* Return the right expression of this binary expression. */
Expr* BinaryExpr::getRightExpr() const {return rightExpr;}

/* Set the right expression of this binary expression. */
void  BinaryExpr::setRightExpr(Expr* right ){rightExpr = right;}