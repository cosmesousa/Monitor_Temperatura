/*
 * File:   delay.c
 * Author: 20185189
 *
 * Created on 2 de Agosto de 2021, 13:42
 */


#include "config.h"
#include <xc.h>

void delay (unsigned int t)
{
    while( t )
    {
        --t;
        __delay_ms(1);
    }
}
