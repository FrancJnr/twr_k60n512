/*
 * File: main.h
 *
 * Copyright (c) 2013, 0xc0170
 *
 * This program is free software. It comes without any warranty, to
 * the extent permitted by applicable law. You can redistribute it
 * and/or modify it under the terms of the Do What The Fuck You Want
 * To Public License, Version 2, as published by Sam Hocevar. See
 * http://www.wtfpl.net/ for more details.
 *
 */
#ifndef MAIN_H
#define MAIN_H

#define BUTTON1 (1 << 19)

#define LED1    (1 << 11)
#define LED2    (1 << 28)

#define LED1_ON    GPIOA_PCOR = LED1
#define LED2_ON    GPIOA_PCOR = LED2

#define LED1_OFF   GPIOA_PSOR = LED1
#define LED2_OFF   GPIOA_PSOR = LED2

#define LED1_TOGGLE GPIOA_PTOR = LED1
#define LED2_TOGGLE GPIOA_PTOR = LED2


#if defined (__cplusplus)
extern "C" {
#endif

int main(void);

#if defined (__cplusplus)
}
#endif

#endif
