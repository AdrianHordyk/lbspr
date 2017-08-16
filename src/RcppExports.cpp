// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// LBSPR_NLLabsel
double LBSPR_NLLabsel(NumericVector starts, NumericVector x, double P, NumericVector LMids, NumericVector LBins, NumericVector LDat, double MK, double Linf, double FecB, double L50, double L95, double maxsd, double CVLinf, int Nage, int usePen);
RcppExport SEXP LBSPR_LBSPR_NLLabsel(SEXP startsSEXP, SEXP xSEXP, SEXP PSEXP, SEXP LMidsSEXP, SEXP LBinsSEXP, SEXP LDatSEXP, SEXP MKSEXP, SEXP LinfSEXP, SEXP FecBSEXP, SEXP L50SEXP, SEXP L95SEXP, SEXP maxsdSEXP, SEXP CVLinfSEXP, SEXP NageSEXP, SEXP usePenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type starts(startsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type P(PSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LMids(LMidsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LBins(LBinsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LDat(LDatSEXP);
    Rcpp::traits::input_parameter< double >::type MK(MKSEXP);
    Rcpp::traits::input_parameter< double >::type Linf(LinfSEXP);
    Rcpp::traits::input_parameter< double >::type FecB(FecBSEXP);
    Rcpp::traits::input_parameter< double >::type L50(L50SEXP);
    Rcpp::traits::input_parameter< double >::type L95(L95SEXP);
    Rcpp::traits::input_parameter< double >::type maxsd(maxsdSEXP);
    Rcpp::traits::input_parameter< double >::type CVLinf(CVLinfSEXP);
    Rcpp::traits::input_parameter< int >::type Nage(NageSEXP);
    Rcpp::traits::input_parameter< int >::type usePen(usePenSEXP);
    rcpp_result_gen = Rcpp::wrap(LBSPR_NLLabsel(starts, x, P, LMids, LBins, LDat, MK, Linf, FecB, L50, L95, maxsd, CVLinf, Nage, usePen));
    return rcpp_result_gen;
END_RCPP
}
// LBSPR_NLLgtg
double LBSPR_NLLgtg(NumericVector starts, NumericVector LMids, NumericVector LBins, NumericVector LDat, NumericVector gtgLinfs, NumericMatrix MKMat, double MK, double Linf, int ngtg, NumericVector recP, int usePen);
RcppExport SEXP LBSPR_LBSPR_NLLgtg(SEXP startsSEXP, SEXP LMidsSEXP, SEXP LBinsSEXP, SEXP LDatSEXP, SEXP gtgLinfsSEXP, SEXP MKMatSEXP, SEXP MKSEXP, SEXP LinfSEXP, SEXP ngtgSEXP, SEXP recPSEXP, SEXP usePenSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type starts(startsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LMids(LMidsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LBins(LBinsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type LDat(LDatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type gtgLinfs(gtgLinfsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type MKMat(MKMatSEXP);
    Rcpp::traits::input_parameter< double >::type MK(MKSEXP);
    Rcpp::traits::input_parameter< double >::type Linf(LinfSEXP);
    Rcpp::traits::input_parameter< int >::type ngtg(ngtgSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type recP(recPSEXP);
    Rcpp::traits::input_parameter< int >::type usePen(usePenSEXP);
    rcpp_result_gen = Rcpp::wrap(LBSPR_NLLgtg(starts, LMids, LBins, LDat, gtgLinfs, MKMat, MK, Linf, ngtg, recP, usePen));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"LBSPR_LBSPR_NLLabsel", (DL_FUNC) &LBSPR_LBSPR_NLLabsel, 15},
    {"LBSPR_LBSPR_NLLgtg", (DL_FUNC) &LBSPR_LBSPR_NLLgtg, 11},
    {NULL, NULL, 0}
};

RcppExport void R_init_LBSPR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
