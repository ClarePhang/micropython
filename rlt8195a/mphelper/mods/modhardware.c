/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2013, 2014 Damien P. George
 * Copyright (c) 2015 Daniel Campora
 * Copyright (c) 2016 Chester Tseng
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

/*****************************************************************************
 *                              Header includes
 * ***************************************************************************/
// micropython headers
#include "py/mpstate.h"
#include "py/runtime.h"
#include "py/mphal.h"

// local object headers
#include "hardware/objpin.h"
#include "hardware/obji2c.h"
#include "hardware/objuart.h"
#include "hardware/objspi.h"
#include "hardware/objadc.h"


/*****************************************************************************
 *                              External variables
 * ***************************************************************************/
STATIC const mp_map_elem_t hardware_module_globals_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR___name__),      MP_OBJ_NEW_QSTR(MP_QSTR_hardware) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_Pin),           (mp_obj_t)&pin_type },
    { MP_OBJ_NEW_QSTR(MP_QSTR_I2C),           (mp_obj_t)&i2c_type },
    { MP_OBJ_NEW_QSTR(MP_QSTR_UART),          (mp_obj_t)&uart_type },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SPI),           (mp_obj_t)&spi_type },
    { MP_OBJ_NEW_QSTR(MP_QSTR_ADC),           (mp_obj_t)&adc_type },
};
STATIC MP_DEFINE_CONST_DICT(hardware_module_globals, hardware_module_globals_table);

const mp_obj_module_t mp_hardware_module = {
    .base    = { &mp_type_module },
    .name    = MP_QSTR_hardware,
    .globals = (mp_obj_dict_t*)&hardware_module_globals,
};
