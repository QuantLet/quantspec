// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// computeSdNaive
ComplexVector computeSdNaive(ComplexVector V, NumericVector W);
RcppExport SEXP quantspec_computeSdNaive(SEXP VSEXP, SEXP WSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< ComplexVector >::type V(VSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type W(WSEXP);
    __result = Rcpp::wrap(computeSdNaive(V, W));
    return __result;
END_RCPP
}
