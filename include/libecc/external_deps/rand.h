/*
 *  Copyright (C) 2017 - This file is part of libecc project
 *
 *  Authors:
 *      Ryad BENADJILA <ryadbenadjila@gmail.com>
 *      Arnaud EBALARD <arnaud.ebalard@ssi.gouv.fr>
 *      Jean-Pierre FLORI <jean-pierre.flori@ssi.gouv.fr>
 *
 *  Contributors:
 *      Nicolas VIVET <nicolas.vivet@ssi.gouv.fr>
 *      Karim KHALFALLAH <karim.khalfallah@ssi.gouv.fr>
 *
 *  This software is licensed under a dual BSD and GPL v2 license.
 *  See LICENSE file at the root folder of the project.
 */
#ifndef __RAND_H__
#define __RAND_H__
#include <libecc/words/words.h>

ATTRIBUTE_WARN_UNUSED_RET int get_random(unsigned char *buf, u16 len);

// #define XMEMCPY(d,s,l)    local_memcpy((d),(s),(l))

#ifdef CUSTOM_RAND_GENERATE
    /* Seed Source */
    /* Size of returned HW RNG value */
    #define CUSTOM_RAND_TYPE      unsigned int
    extern unsigned int my_rng_seed_gen(void);
    #undef  CUSTOM_RAND_GENERATE
    #define CUSTOM_RAND_GENERATE  my_rng_seed_gen
#endif

#endif /* __RAND_H__ */
