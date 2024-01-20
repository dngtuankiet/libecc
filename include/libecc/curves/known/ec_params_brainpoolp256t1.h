#include <libecc/lib_ecc_config.h>
#ifdef WITH_CURVE_BRAINPOOLP256T1

#ifndef __EC_PARAMS_BRAINPOOLP256T1_H__
#define __EC_PARAMS_BRAINPOOLP256T1_H__
#include <libecc/curves/known/ec_params_external.h>
static const u8 brainpoolp256t1_p[] = {
	0xa9, 0xfb, 0x57, 0xdb, 0xa1, 0xee, 0xa9, 0xbc,
	0x3e, 0x66, 0x0a, 0x90, 0x9d, 0x83, 0x8d, 0x72,
	0x6e, 0x3b, 0xf6, 0x23, 0xd5, 0x26, 0x20, 0x28,
	0x20, 0x13, 0x48, 0x1d, 0x1f, 0x6e, 0x53, 0x77,
};

TO_EC_STR_PARAM(brainpoolp256t1_p);

#define CURVE_BRAINPOOLP256T1_P_BITLEN 256
static const u8 brainpoolp256t1_p_bitlen[] = {
	0x01, 0x00,
};

TO_EC_STR_PARAM(brainpoolp256t1_p_bitlen);

#if (WORD_BYTES == 8)     /* 64-bit words */
static const u8 brainpoolp256t1_r[] = {
	0x56, 0x04, 0xa8, 0x24, 0x5e, 0x11, 0x56, 0x43,
	0xc1, 0x99, 0xf5, 0x6f, 0x62, 0x7c, 0x72, 0x8d,
	0x91, 0xc4, 0x09, 0xdc, 0x2a, 0xd9, 0xdf, 0xd7,
	0xdf, 0xec, 0xb7, 0xe2, 0xe0, 0x91, 0xac, 0x89,
};

TO_EC_STR_PARAM(brainpoolp256t1_r);

static const u8 brainpoolp256t1_r_square[] = {
	0x47, 0x17, 0xaa, 0x21, 0xe5, 0x95, 0x7f, 0xa8,
	0xa1, 0xec, 0xda, 0xcd, 0x6b, 0x1a, 0xc8, 0x07,
	0x5c, 0xce, 0x4c, 0x26, 0x61, 0x4d, 0x4f, 0x4d,
	0x8c, 0xfe, 0xdf, 0x7b, 0xa6, 0x46, 0x5b, 0x6c,
};

TO_EC_STR_PARAM(brainpoolp256t1_r_square);

static const u8 brainpoolp256t1_mpinv[] = {
	0xc6, 0xa7, 0x55, 0x90, 0xce, 0xfd, 0x89, 0xb9,
};

TO_EC_STR_PARAM(brainpoolp256t1_mpinv);

static const u8 brainpoolp256t1_p_shift[] = {
	0x00,
};

TO_EC_STR_PARAM(brainpoolp256t1_p_shift);

static const u8 brainpoolp256t1_p_normalized[] = {
	0xa9, 0xfb, 0x57, 0xdb, 0xa1, 0xee, 0xa9, 0xbc,
	0x3e, 0x66, 0x0a, 0x90, 0x9d, 0x83, 0x8d, 0x72,
	0x6e, 0x3b, 0xf6, 0x23, 0xd5, 0x26, 0x20, 0x28,
	0x20, 0x13, 0x48, 0x1d, 0x1f, 0x6e, 0x53, 0x77,
};

TO_EC_STR_PARAM(brainpoolp256t1_p_normalized);

static const u8 brainpoolp256t1_p_reciprocal[] = {
	0x81, 0x8c, 0x11, 0x31, 0xa1, 0xc5, 0x5b, 0x7e,
};

TO_EC_STR_PARAM(brainpoolp256t1_p_reciprocal);

#elif (WORD_BYTES == 4)   /* 32-bit words */
static const u8 brainpoolp256t1_r[] = {
	0x56, 0x04, 0xa8, 0x24, 0x5e, 0x11, 0x56, 0x43,
	0xc1, 0x99, 0xf5, 0x6f, 0x62, 0x7c, 0x72, 0x8d,
	0x91, 0xc4, 0x09, 0xdc, 0x2a, 0xd9, 0xdf, 0xd7,
	0xdf, 0xec, 0xb7, 0xe2, 0xe0, 0x91, 0xac, 0x89,
};

TO_EC_STR_PARAM(brainpoolp256t1_r);

static const u8 brainpoolp256t1_r_square[] = {
	0x47, 0x17, 0xaa, 0x21, 0xe5, 0x95, 0x7f, 0xa8,
	0xa1, 0xec, 0xda, 0xcd, 0x6b, 0x1a, 0xc8, 0x07,
	0x5c, 0xce, 0x4c, 0x26, 0x61, 0x4d, 0x4f, 0x4d,
	0x8c, 0xfe, 0xdf, 0x7b, 0xa6, 0x46, 0x5b, 0x6c,
};

TO_EC_STR_PARAM(brainpoolp256t1_r_square);

static const u8 brainpoolp256t1_mpinv[] = {
	0xce, 0xfd, 0x89, 0xb9,
};

TO_EC_STR_PARAM(brainpoolp256t1_mpinv);

static const u8 brainpoolp256t1_p_shift[] = {
	0x00,
};

TO_EC_STR_PARAM(brainpoolp256t1_p_shift);

static const u8 brainpoolp256t1_p_normalized[] = {
	0xa9, 0xfb, 0x57, 0xdb, 0xa1, 0xee, 0xa9, 0xbc,
	0x3e, 0x66, 0x0a, 0x90, 0x9d, 0x83, 0x8d, 0x72,
	0x6e, 0x3b, 0xf6, 0x23, 0xd5, 0x26, 0x20, 0x28,
	0x20, 0x13, 0x48, 0x1d, 0x1f, 0x6e, 0x53, 0x77,
};

TO_EC_STR_PARAM(brainpoolp256t1_p_normalized);

static const u8 brainpoolp256t1_p_reciprocal[] = {
	0x81, 0x8c, 0x11, 0x31,
};

TO_EC_STR_PARAM(brainpoolp256t1_p_reciprocal);

#elif (WORD_BYTES == 2)   /* 16-bit words */
static const u8 brainpoolp256t1_r[] = {
	0x56, 0x04, 0xa8, 0x24, 0x5e, 0x11, 0x56, 0x43,
	0xc1, 0x99, 0xf5, 0x6f, 0x62, 0x7c, 0x72, 0x8d,
	0x91, 0xc4, 0x09, 0xdc, 0x2a, 0xd9, 0xdf, 0xd7,
	0xdf, 0xec, 0xb7, 0xe2, 0xe0, 0x91, 0xac, 0x89,
};

TO_EC_STR_PARAM(brainpoolp256t1_r);

static const u8 brainpoolp256t1_r_square[] = {
	0x47, 0x17, 0xaa, 0x21, 0xe5, 0x95, 0x7f, 0xa8,
	0xa1, 0xec, 0xda, 0xcd, 0x6b, 0x1a, 0xc8, 0x07,
	0x5c, 0xce, 0x4c, 0x26, 0x61, 0x4d, 0x4f, 0x4d,
	0x8c, 0xfe, 0xdf, 0x7b, 0xa6, 0x46, 0x5b, 0x6c,
};

TO_EC_STR_PARAM(brainpoolp256t1_r_square);

static const u8 brainpoolp256t1_mpinv[] = {
	0x89, 0xb9,
};

TO_EC_STR_PARAM(brainpoolp256t1_mpinv);

static const u8 brainpoolp256t1_p_shift[] = {
	0x00,
};

TO_EC_STR_PARAM(brainpoolp256t1_p_shift);

static const u8 brainpoolp256t1_p_normalized[] = {
	0xa9, 0xfb, 0x57, 0xdb, 0xa1, 0xee, 0xa9, 0xbc,
	0x3e, 0x66, 0x0a, 0x90, 0x9d, 0x83, 0x8d, 0x72,
	0x6e, 0x3b, 0xf6, 0x23, 0xd5, 0x26, 0x20, 0x28,
	0x20, 0x13, 0x48, 0x1d, 0x1f, 0x6e, 0x53, 0x77,
};

TO_EC_STR_PARAM(brainpoolp256t1_p_normalized);

static const u8 brainpoolp256t1_p_reciprocal[] = {
	0x81, 0x8c,
};

TO_EC_STR_PARAM(brainpoolp256t1_p_reciprocal);

#else                     /* unknown word size */
#error "Unsupported word size"
#endif

static const u8 brainpoolp256t1_a[] = {
	0xa9, 0xfb, 0x57, 0xdb, 0xa1, 0xee, 0xa9, 0xbc,
	0x3e, 0x66, 0x0a, 0x90, 0x9d, 0x83, 0x8d, 0x72,
	0x6e, 0x3b, 0xf6, 0x23, 0xd5, 0x26, 0x20, 0x28,
	0x20, 0x13, 0x48, 0x1d, 0x1f, 0x6e, 0x53, 0x74,
};

TO_EC_STR_PARAM(brainpoolp256t1_a);

static const u8 brainpoolp256t1_b[] = {
	0x66, 0x2c, 0x61, 0xc4, 0x30, 0xd8, 0x4e, 0xa4,
	0xfe, 0x66, 0xa7, 0x73, 0x3d, 0x0b, 0x76, 0xb7,
	0xbf, 0x93, 0xeb, 0xc4, 0xaf, 0x2f, 0x49, 0x25,
	0x6a, 0xe5, 0x81, 0x01, 0xfe, 0xe9, 0x2b, 0x04,
};

TO_EC_STR_PARAM(brainpoolp256t1_b);

#define CURVE_BRAINPOOLP256T1_CURVE_ORDER_BITLEN 256
static const u8 brainpoolp256t1_curve_order[] = {
	0xa9, 0xfb, 0x57, 0xdb, 0xa1, 0xee, 0xa9, 0xbc,
	0x3e, 0x66, 0x0a, 0x90, 0x9d, 0x83, 0x8d, 0x71,
	0x8c, 0x39, 0x7a, 0xa3, 0xb5, 0x61, 0xa6, 0xf7,
	0x90, 0x1e, 0x0e, 0x82, 0x97, 0x48, 0x56, 0xa7,
};

TO_EC_STR_PARAM(brainpoolp256t1_curve_order);

static const u8 brainpoolp256t1_gx[] = {
	0xa3, 0xe8, 0xeb, 0x3c, 0xc1, 0xcf, 0xe7, 0xb7,
	0x73, 0x22, 0x13, 0xb2, 0x3a, 0x65, 0x61, 0x49,
	0xaf, 0xa1, 0x42, 0xc4, 0x7a, 0xaf, 0xbc, 0x2b,
	0x79, 0xa1, 0x91, 0x56, 0x2e, 0x13, 0x05, 0xf4,
};

TO_EC_STR_PARAM(brainpoolp256t1_gx);

static const u8 brainpoolp256t1_gy[] = {
	0x2d, 0x99, 0x6c, 0x82, 0x34, 0x39, 0xc5, 0x6d,
	0x7f, 0x7b, 0x22, 0xe1, 0x46, 0x44, 0x41, 0x7e,
	0x69, 0xbc, 0xb6, 0xde, 0x39, 0xd0, 0x27, 0x00,
	0x1d, 0xab, 0xe8, 0xf3, 0x5b, 0x25, 0xc9, 0xbe,
};

TO_EC_STR_PARAM(brainpoolp256t1_gy);

static const u8 brainpoolp256t1_gz[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
};

TO_EC_STR_PARAM(brainpoolp256t1_gz);

static const u8 brainpoolp256t1_gen_order[] = {
	0xa9, 0xfb, 0x57, 0xdb, 0xa1, 0xee, 0xa9, 0xbc,
	0x3e, 0x66, 0x0a, 0x90, 0x9d, 0x83, 0x8d, 0x71,
	0x8c, 0x39, 0x7a, 0xa3, 0xb5, 0x61, 0xa6, 0xf7,
	0x90, 0x1e, 0x0e, 0x82, 0x97, 0x48, 0x56, 0xa7,
};

TO_EC_STR_PARAM(brainpoolp256t1_gen_order);

#define CURVE_BRAINPOOLP256T1_Q_BITLEN 256
static const u8 brainpoolp256t1_gen_order_bitlen[] = {
	0x01, 0x00,
};

TO_EC_STR_PARAM(brainpoolp256t1_gen_order_bitlen);

static const u8 brainpoolp256t1_cofactor[] = {
	0x01,
};

TO_EC_STR_PARAM(brainpoolp256t1_cofactor);

static const u8 brainpoolp256t1_alpha_montgomery[] = {
	0x00,
};
TO_EC_STR_PARAM_FIXED_SIZE(brainpoolp256t1_alpha_montgomery, 0);

static const u8 brainpoolp256t1_gamma_montgomery[] = {
	0x00,
};
TO_EC_STR_PARAM_FIXED_SIZE(brainpoolp256t1_gamma_montgomery, 0);

static const u8 brainpoolp256t1_alpha_edwards[] = {
	0x00,
};
TO_EC_STR_PARAM_FIXED_SIZE(brainpoolp256t1_alpha_edwards, 0);

static const u8 brainpoolp256t1_name[] = "BRAINPOOLP256T1";
TO_EC_STR_PARAM(brainpoolp256t1_name);

static const u8 brainpoolp256t1_oid[] = "1.3.36.3.3.2.8.1.1.8";
TO_EC_STR_PARAM(brainpoolp256t1_oid);

static const ec_str_params brainpoolp256t1_str_params = {
	.p = &brainpoolp256t1_p_str_param,
	.p_bitlen = &brainpoolp256t1_p_bitlen_str_param,
	.r = &brainpoolp256t1_r_str_param,
	.r_square = &brainpoolp256t1_r_square_str_param,
	.mpinv = &brainpoolp256t1_mpinv_str_param,
	.p_shift = &brainpoolp256t1_p_shift_str_param,
	.p_normalized = &brainpoolp256t1_p_normalized_str_param,
	.p_reciprocal = &brainpoolp256t1_p_reciprocal_str_param,
	.a = &brainpoolp256t1_a_str_param,
	.b = &brainpoolp256t1_b_str_param,
	.curve_order = &brainpoolp256t1_curve_order_str_param,
	.gx = &brainpoolp256t1_gx_str_param,
	.gy = &brainpoolp256t1_gy_str_param,
	.gz = &brainpoolp256t1_gz_str_param,
	.gen_order = &brainpoolp256t1_gen_order_str_param,
	.gen_order_bitlen = &brainpoolp256t1_gen_order_bitlen_str_param,
	.cofactor = &brainpoolp256t1_cofactor_str_param,
	.alpha_montgomery = &brainpoolp256t1_alpha_montgomery_str_param,
	.gamma_montgomery = &brainpoolp256t1_gamma_montgomery_str_param,
	.alpha_edwards = &brainpoolp256t1_alpha_edwards_str_param,
	.oid = &brainpoolp256t1_oid_str_param,
	.name = &brainpoolp256t1_name_str_param,
};

/*
 * Compute max bit length of all curves for p and q
 */
#ifndef CURVES_MAX_P_BIT_LEN
#define CURVES_MAX_P_BIT_LEN    0
#endif
#if (CURVES_MAX_P_BIT_LEN < CURVE_BRAINPOOLP256T1_P_BITLEN)
#undef CURVES_MAX_P_BIT_LEN
#define CURVES_MAX_P_BIT_LEN CURVE_BRAINPOOLP256T1_P_BITLEN
#endif
#ifndef CURVES_MAX_Q_BIT_LEN
#define CURVES_MAX_Q_BIT_LEN    0
#endif
#if (CURVES_MAX_Q_BIT_LEN < CURVE_BRAINPOOLP256T1_Q_BITLEN)
#undef CURVES_MAX_Q_BIT_LEN
#define CURVES_MAX_Q_BIT_LEN CURVE_BRAINPOOLP256T1_Q_BITLEN
#endif
#ifndef CURVES_MAX_CURVE_ORDER_BIT_LEN
#define CURVES_MAX_CURVE_ORDER_BIT_LEN    0
#endif
#if (CURVES_MAX_CURVE_ORDER_BIT_LEN < CURVE_BRAINPOOLP256T1_CURVE_ORDER_BITLEN)
#undef CURVES_MAX_CURVE_ORDER_BIT_LEN
#define CURVES_MAX_CURVE_ORDER_BIT_LEN CURVE_BRAINPOOLP256T1_CURVE_ORDER_BITLEN
#endif

/*
 * Compute and adapt max name and oid length
 */
#ifndef MAX_CURVE_OID_LEN
#define MAX_CURVE_OID_LEN 0
#endif
#ifndef MAX_CURVE_NAME_LEN
#define MAX_CURVE_NAME_LEN 0
#endif
#if (MAX_CURVE_OID_LEN < 1)
#undef MAX_CURVE_OID_LEN
#define MAX_CURVE_OID_LEN 1
#endif
#if (MAX_CURVE_NAME_LEN < 29)
#undef MAX_CURVE_NAME_LEN
#define MAX_CURVE_NAME_LEN 29
#endif

#endif /* __EC_PARAMS_BRAINPOOLP256T1_H__ */

#endif /* WITH_CURVE_BRAINPOOLP256T1 */
