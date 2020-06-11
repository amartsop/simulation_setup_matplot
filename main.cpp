#include <iostream>
#include <armadillo>

#include "./include/matplot/matplot.hpp"


int main(int argc, char *argv[])
{
    arma::fvec x = arma::linspace<arma::fvec>(0, 10, 100);
    arma::fvec y = arma::linspace<arma::fvec>(0, 10, 100);
     
   // Plots
    MatPlot<arma::fvec> fig1;
    fig1.plot2D(x, y, "r", 1);
    fig1.grid();
    fig1.show();

    return 0;
}

