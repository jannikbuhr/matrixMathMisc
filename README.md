
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
#>            [,1]       [,2]      [,3]
#> [1,]  -2.292070  -8.351748 -1.508755
#> [2,] -20.569605  25.252519 10.359919
#> [3,]  -1.109357 -20.001697 -6.349157
```
