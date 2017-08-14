/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   frecuencias.h
 * Author: sergio
 *
 * Created on 14 de agosto de 2017, 3:20
 */

#ifndef FRECUENCIAS_H
#define FRECUENCIAS_H


#endif /* FRECUENCIAS_H */

#include <stdio.h>
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class frecuencias {
    
    private:
        string  input;
        int     value;
    
    //constructor
    public:
        frecuencias(string i){
        
            input = i;
            value = atoi(input.c_str());
        }
    
int obtieneFrec(){
    
    value+=1;
    if ( value >= 32) 
       cout << "Input " << value << " -32 .... hasta resto 0 ";
    else
       cout << "Input " << value << " menor a 32, se buscará 'sustraendo' inicio ";

    return 0;
 }

};