#include <iostream>
#include "ConstExpr.hpp"
#include "ArithmeticExprs.hpp"

int main() {
    ConstExpr* c1 = new ConstExpr(3);
    ConstExpr* c2 = new ConstExpr(4);
    ConstExpr* c3 = new ConstExpr(5);

    AddExpr* e1 = new AddExpr(c1, c2);
    SubExpr* e2 = new SubExpr(e1, c3);

    std::cout << e1->toStr() << std::endl;
    std::cout << e2->toStr() << std::endl;

    return 0;
}