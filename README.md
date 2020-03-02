
<!-- README.md is generated from README.Rmd. Please edit that file -->

# matrixMathMisc

<!-- badges: start -->

<!-- badges: end -->

The goal of matrixMathMisc is to provide access to RcppEigen functions
for fast matrix maths.

## Installation

Install from github via

``` r
# install remotes with install.packages("remotes") if necessary
remotes::install_github("jannikbuhr/matrixMathMisc")
```

## Example

We load the library, generate a 10x10 matrix of random numbers and show,
that the `pow` function indeed calculates powers of this matrix.

``` r
library(matrixMathMisc)

m <- matrix(rnorm(100), nrow = 10)
all(m %*% m == pow(m, 2))
#> [1] TRUE
all(m %*% m %*% m == pow(m, 3))
#> [1] TRUE
```

It also works for real valued exponents:

``` r
pow(m, 3.2)[1:3, 1:3]
#>           [,1]       [,2]      [,3]
#> [1,]  9.943564  7.4280869 28.026924
#> [2,]  8.036133 19.0127416 40.127687
#> [3,] -2.084751  0.6073684  9.953441
```
