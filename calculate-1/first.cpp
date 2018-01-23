//
// Created by newbie on 2017/11/10.
//
#include <cmath>
#include <iostream>
#include "first.h"


double fitting(double x0,double a){

    double y0 = x0*x0 + x0*3 + 4;
    double y1 = y0;

    while(true){

        double x1 = x0 - a*(2*x0 + 3);
        y1 = x1*x1 + x1*3 + 4;
        x0 = x1;
        std::cout << x1 << " ; " << abs(y0 - y1) << std::endl;
        if(abs(y0 - y1) < 0.0000000001)break;
        y0 = y1;
    }

    std::cout<< x0 << std::endl;




}