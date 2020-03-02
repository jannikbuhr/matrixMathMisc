// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4; indent-tabs-mode: nil; -*-

// we only include RcppEigen.h which pulls Rcpp.h in for us
#include <RcppEigen.h>

// [[Rcpp::depends(RcppEigen)]]


// [[Rcpp::export]]
Eigen::MatrixXd pow(Eigen::MatrixXd M, double k) {
    return M.pow(k);
}

