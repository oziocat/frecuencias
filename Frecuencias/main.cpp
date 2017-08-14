/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: sergio
 *
 * Created on 10 de agosto de 2017, 1:35
 */
#include <stdlib.h>
#include <boost/regex.hpp>
#include <string.h>
#include <iostream>

using namespace std;
using namespace boost;

int main() {

    string input;
    bool pass;
    boost::regex expr ("-?[0-9]+.?[0-9]+");
    boost::cmatch q;
    
     do {
        cout << "Ingrese frecuencia numerica a consultar : " << "\n\n";
        cin >> input;
        
        //(!boost::regex_match((input, q, expression)));
        if (!boost::regex_match(input, expr))
            cout << "\nDebe ser un numero !! \n";
        else
            pass = "0";
        
     }while
        (!pass);
     
     return 0;
}