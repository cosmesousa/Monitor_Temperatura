/*
 * File:   interrupt.c
 * Author: 20185189
 *
 * Created on 2 de Agosto de 2021, 15:23
 */


#include <xc.h>

#include "adc.h"


void __interrupt() isr(void)
{
    if( PIR1bits.ADIF )
    {
        PIR1bits.ADIF = 0;
        ADC_int();
    }
}