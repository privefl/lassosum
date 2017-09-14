// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/lassosum.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// countlines
int countlines(const char* fileName);
static SEXP lassosum_countlines_try(SEXP fileNameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const char* >::type fileName(fileNameSEXP);
    rcpp_result_gen = Rcpp::wrap(countlines(fileName));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP lassosum_countlines(SEXP fileNameSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(lassosum_countlines_try(fileNameSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// multiBed3
arma::mat multiBed3(const std::string fileName, int N, int P, const arma::mat input, arma::Col<int> col_skip_pos, arma::Col<int> col_skip, arma::Col<int> keepbytes, arma::Col<int> keepoffset);
static SEXP lassosum_multiBed3_try(SEXP fileNameSEXP, SEXP NSEXP, SEXP PSEXP, SEXP inputSEXP, SEXP col_skip_posSEXP, SEXP col_skipSEXP, SEXP keepbytesSEXP, SEXP keepoffsetSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const std::string >::type fileName(fileNameSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type P(PSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type input(inputSEXP);
    Rcpp::traits::input_parameter< arma::Col<int> >::type col_skip_pos(col_skip_posSEXP);
    Rcpp::traits::input_parameter< arma::Col<int> >::type col_skip(col_skipSEXP);
    Rcpp::traits::input_parameter< arma::Col<int> >::type keepbytes(keepbytesSEXP);
    Rcpp::traits::input_parameter< arma::Col<int> >::type keepoffset(keepoffsetSEXP);
    rcpp_result_gen = Rcpp::wrap(multiBed3(fileName, N, P, input, col_skip_pos, col_skip, keepbytes, keepoffset));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP lassosum_multiBed3(SEXP fileNameSEXP, SEXP NSEXP, SEXP PSEXP, SEXP inputSEXP, SEXP col_skip_posSEXP, SEXP col_skipSEXP, SEXP keepbytesSEXP, SEXP keepoffsetSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(lassosum_multiBed3_try(fileNameSEXP, NSEXP, PSEXP, inputSEXP, col_skip_posSEXP, col_skipSEXP, keepbytesSEXP, keepoffsetSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// elnet
int elnet(double lambda1, double lambda2, const arma::vec& diag, const arma::mat& X, const arma::vec& r, double thr, arma::vec& x, arma::vec& yhat, int trace, int maxiter);
static SEXP lassosum_elnet_try(SEXP lambda1SEXP, SEXP lambda2SEXP, SEXP diagSEXP, SEXP XSEXP, SEXP rSEXP, SEXP thrSEXP, SEXP xSEXP, SEXP yhatSEXP, SEXP traceSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type lambda1(lambda1SEXP);
    Rcpp::traits::input_parameter< double >::type lambda2(lambda2SEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type diag(diagSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type thr(thrSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type yhat(yhatSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(elnet(lambda1, lambda2, diag, X, r, thr, x, yhat, trace, maxiter));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP lassosum_elnet(SEXP lambda1SEXP, SEXP lambda2SEXP, SEXP diagSEXP, SEXP XSEXP, SEXP rSEXP, SEXP thrSEXP, SEXP xSEXP, SEXP yhatSEXP, SEXP traceSEXP, SEXP maxiterSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(lassosum_elnet_try(lambda1SEXP, lambda2SEXP, diagSEXP, XSEXP, rSEXP, thrSEXP, xSEXP, yhatSEXP, traceSEXP, maxiterSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// repelnet
int repelnet(double lambda1, double lambda2, arma::vec& diag, arma::mat& X, arma::vec& r, double thr, arma::vec& x, arma::vec& yhat, int trace, int maxiter, arma::Col<int>& startvec, arma::Col<int>& endvec);
static SEXP lassosum_repelnet_try(SEXP lambda1SEXP, SEXP lambda2SEXP, SEXP diagSEXP, SEXP XSEXP, SEXP rSEXP, SEXP thrSEXP, SEXP xSEXP, SEXP yhatSEXP, SEXP traceSEXP, SEXP maxiterSEXP, SEXP startvecSEXP, SEXP endvecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< double >::type lambda1(lambda1SEXP);
    Rcpp::traits::input_parameter< double >::type lambda2(lambda2SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type diag(diagSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type thr(thrSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type yhat(yhatSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< arma::Col<int>& >::type startvec(startvecSEXP);
    Rcpp::traits::input_parameter< arma::Col<int>& >::type endvec(endvecSEXP);
    rcpp_result_gen = Rcpp::wrap(repelnet(lambda1, lambda2, diag, X, r, thr, x, yhat, trace, maxiter, startvec, endvec));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP lassosum_repelnet(SEXP lambda1SEXP, SEXP lambda2SEXP, SEXP diagSEXP, SEXP XSEXP, SEXP rSEXP, SEXP thrSEXP, SEXP xSEXP, SEXP yhatSEXP, SEXP traceSEXP, SEXP maxiterSEXP, SEXP startvecSEXP, SEXP endvecSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(lassosum_repelnet_try(lambda1SEXP, lambda2SEXP, diagSEXP, XSEXP, rSEXP, thrSEXP, xSEXP, yhatSEXP, traceSEXP, maxiterSEXP, startvecSEXP, endvecSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// genotypeMatrix
arma::mat genotypeMatrix(const std::string fileName, int N, int P, arma::Col<int> col_skip_pos, arma::Col<int> col_skip, arma::Col<int> keepbytes, arma::Col<int> keepoffset, const int fillmissing);
static SEXP lassosum_genotypeMatrix_try(SEXP fileNameSEXP, SEXP NSEXP, SEXP PSEXP, SEXP col_skip_posSEXP, SEXP col_skipSEXP, SEXP keepbytesSEXP, SEXP keepoffsetSEXP, SEXP fillmissingSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const std::string >::type fileName(fileNameSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type P(PSEXP);
    Rcpp::traits::input_parameter< arma::Col<int> >::type col_skip_pos(col_skip_posSEXP);
    Rcpp::traits::input_parameter< arma::Col<int> >::type col_skip(col_skipSEXP);
    Rcpp::traits::input_parameter< arma::Col<int> >::type keepbytes(keepbytesSEXP);
    Rcpp::traits::input_parameter< arma::Col<int> >::type keepoffset(keepoffsetSEXP);
    Rcpp::traits::input_parameter< const int >::type fillmissing(fillmissingSEXP);
    rcpp_result_gen = Rcpp::wrap(genotypeMatrix(fileName, N, P, col_skip_pos, col_skip, keepbytes, keepoffset, fillmissing));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP lassosum_genotypeMatrix(SEXP fileNameSEXP, SEXP NSEXP, SEXP PSEXP, SEXP col_skip_posSEXP, SEXP col_skipSEXP, SEXP keepbytesSEXP, SEXP keepoffsetSEXP, SEXP fillmissingSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(lassosum_genotypeMatrix_try(fileNameSEXP, NSEXP, PSEXP, col_skip_posSEXP, col_skipSEXP, keepbytesSEXP, keepoffsetSEXP, fillmissingSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// normalize
arma::vec normalize(arma::mat& genotypes);
static SEXP lassosum_normalize_try(SEXP genotypesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::mat& >::type genotypes(genotypesSEXP);
    rcpp_result_gen = Rcpp::wrap(normalize(genotypes));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP lassosum_normalize(SEXP genotypesSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(lassosum_normalize_try(genotypesSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// runElnet
List runElnet(arma::vec& lambda, double shrink, const std::string fileName, arma::vec& r, int N, int P, arma::Col<int>& col_skip_pos, arma::Col<int>& col_skip, arma::Col<int>& keepbytes, arma::Col<int>& keepoffset, double thr, arma::vec& x, int trace, int maxiter, arma::Col<int>& startvec, arma::Col<int>& endvec);
static SEXP lassosum_runElnet_try(SEXP lambdaSEXP, SEXP shrinkSEXP, SEXP fileNameSEXP, SEXP rSEXP, SEXP NSEXP, SEXP PSEXP, SEXP col_skip_posSEXP, SEXP col_skipSEXP, SEXP keepbytesSEXP, SEXP keepoffsetSEXP, SEXP thrSEXP, SEXP xSEXP, SEXP traceSEXP, SEXP maxiterSEXP, SEXP startvecSEXP, SEXP endvecSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< arma::vec& >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type shrink(shrinkSEXP);
    Rcpp::traits::input_parameter< const std::string >::type fileName(fileNameSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type r(rSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type P(PSEXP);
    Rcpp::traits::input_parameter< arma::Col<int>& >::type col_skip_pos(col_skip_posSEXP);
    Rcpp::traits::input_parameter< arma::Col<int>& >::type col_skip(col_skipSEXP);
    Rcpp::traits::input_parameter< arma::Col<int>& >::type keepbytes(keepbytesSEXP);
    Rcpp::traits::input_parameter< arma::Col<int>& >::type keepoffset(keepoffsetSEXP);
    Rcpp::traits::input_parameter< double >::type thr(thrSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type trace(traceSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< arma::Col<int>& >::type startvec(startvecSEXP);
    Rcpp::traits::input_parameter< arma::Col<int>& >::type endvec(endvecSEXP);
    rcpp_result_gen = Rcpp::wrap(runElnet(lambda, shrink, fileName, r, N, P, col_skip_pos, col_skip, keepbytes, keepoffset, thr, x, trace, maxiter, startvec, endvec));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP lassosum_runElnet(SEXP lambdaSEXP, SEXP shrinkSEXP, SEXP fileNameSEXP, SEXP rSEXP, SEXP NSEXP, SEXP PSEXP, SEXP col_skip_posSEXP, SEXP col_skipSEXP, SEXP keepbytesSEXP, SEXP keepoffsetSEXP, SEXP thrSEXP, SEXP xSEXP, SEXP traceSEXP, SEXP maxiterSEXP, SEXP startvecSEXP, SEXP endvecSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(lassosum_runElnet_try(lambdaSEXP, shrinkSEXP, fileNameSEXP, rSEXP, NSEXP, PSEXP, col_skip_posSEXP, col_skipSEXP, keepbytesSEXP, keepoffsetSEXP, thrSEXP, xSEXP, traceSEXP, maxiterSEXP, startvecSEXP, endvecSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error(CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int lassosum_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("int(*countlines)(const char*)");
        signatures.insert("arma::mat(*multiBed3)(const std::string,int,int,const arma::mat,arma::Col<int>,arma::Col<int>,arma::Col<int>,arma::Col<int>)");
        signatures.insert("int(*elnet)(double,double,const arma::vec&,const arma::mat&,const arma::vec&,double,arma::vec&,arma::vec&,int,int)");
        signatures.insert("int(*repelnet)(double,double,arma::vec&,arma::mat&,arma::vec&,double,arma::vec&,arma::vec&,int,int,arma::Col<int>&,arma::Col<int>&)");
        signatures.insert("arma::mat(*genotypeMatrix)(const std::string,int,int,arma::Col<int>,arma::Col<int>,arma::Col<int>,arma::Col<int>,const int)");
        signatures.insert("arma::vec(*normalize)(arma::mat&)");
        signatures.insert("List(*runElnet)(arma::vec&,double,const std::string,arma::vec&,int,int,arma::Col<int>&,arma::Col<int>&,arma::Col<int>&,arma::Col<int>&,double,arma::vec&,int,int,arma::Col<int>&,arma::Col<int>&)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP lassosum_RcppExport_registerCCallable() { 
    R_RegisterCCallable("lassosum", "lassosum_countlines", (DL_FUNC)lassosum_countlines_try);
    R_RegisterCCallable("lassosum", "lassosum_multiBed3", (DL_FUNC)lassosum_multiBed3_try);
    R_RegisterCCallable("lassosum", "lassosum_elnet", (DL_FUNC)lassosum_elnet_try);
    R_RegisterCCallable("lassosum", "lassosum_repelnet", (DL_FUNC)lassosum_repelnet_try);
    R_RegisterCCallable("lassosum", "lassosum_genotypeMatrix", (DL_FUNC)lassosum_genotypeMatrix_try);
    R_RegisterCCallable("lassosum", "lassosum_normalize", (DL_FUNC)lassosum_normalize_try);
    R_RegisterCCallable("lassosum", "lassosum_runElnet", (DL_FUNC)lassosum_runElnet_try);
    R_RegisterCCallable("lassosum", "lassosum_RcppExport_validate", (DL_FUNC)lassosum_RcppExport_validate);
    return R_NilValue;
}
