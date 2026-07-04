#include "receipt.hpp"

//Return the sum of all three item prices. pxpham: removed the word "TODO".
double calculateSubtotal(double item1, double item2, double item3) {
    return item1+item2+item3;
}

//Return the sales tax for the subtotal using TAX_RATE. pxpham: removed the word "TODO".
double calculateTax(double subtotal) {
    return subtotal*TAX_RATE;
}

//Return the tip amount. pxpham: removed the word "TODO" and other unnecessary comments
double calculateTip(double subtotal, double tipPercent) {
    return tipPercent/100 * subtotal; //pxpham: shorten return into one line.
}

//Return the final total. pxpham: removed the word "TODO".
double calculateTotal(double subtotal, double tax, double tip) {
    return subtotal+tax+tip;
}
