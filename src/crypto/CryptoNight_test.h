/* XMRig
 * Copyright 2010      Jeff Garzik <jgarzik@pobox.com>
 * Copyright 2012-2014 pooler      <pooler@litecoinpool.org>
 * Copyright 2014      Lucas Jones <https://github.com/lucasjones>
 * Copyright 2014-2016 Wolf9466    <https://github.com/OhGodAPet>
 * Copyright 2016      Jay D Dee   <jayddee246@gmail.com>
 * Copyright 2016-2017 XMRig       <support@xmrig.com>
 * Copyright 2018      BenDroid    <ben@graef.in>
 *
 *
 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.
 *
 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 *   GNU General Public License for more details.
 *
 *   You should have received a copy of the GNU General Public License
 *   along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __CRYPTONIGHT_TEST_H__
#define __CRYPTONIGHT_TEST_H__

const static uint8_t test_input[380] = {
	0x03, 0x05, 0xA0, 0xDB, 0xD6, 0xBF, 0x05, 0xCF, 0x16, 0xE5, 0x03, 0xF3, 0xA6, 0x6F, 0x78, 0x00,
	0x7C, 0xBF, 0x34, 0x14, 0x43, 0x32, 0xEC, 0xBF, 0xC2, 0x2E, 0xD9, 0x5C, 0x87, 0x00, 0x38, 0x3B,
	0x30, 0x9A, 0xCE, 0x19, 0x23, 0xA0, 0x96, 0x4B, 0x00, 0x00, 0x00, 0x08, 0xBA, 0x93, 0x9A, 0x62,
	0x72, 0x4C, 0x0D, 0x75, 0x81, 0xFC, 0xE5, 0x76, 0x1E, 0x9D, 0x8A, 0x0E, 0x6A, 0x1C, 0x3F, 0x92,
	0x4F, 0xDD, 0x84, 0x93, 0xD1, 0x11, 0x56, 0x49, 0xC0, 0x5E, 0xB6, 0x01,
	0x01, 0x00, 0xFB, 0x8E, 0x8A, 0xC8, 0x05, 0x89, 0x93, 0x23, 0x37, 0x1B, 0xB7, 0x90, 0xDB, 0x19,
	0x21, 0x8A, 0xFD, 0x8D, 0xB8, 0xE3, 0x75, 0x5D, 0x8B, 0x90, 0xF3, 0x9B, 0x3D, 0x55, 0x06, 0xA9,
	0xAB, 0xCE, 0x4F, 0xA9, 0x12, 0x24, 0x45, 0x00, 0x00, 0x00, 0x00, 0xEE, 0x81, 0x46, 0xD4, 0x9F,
	0xA9, 0x3E, 0xE7, 0x24, 0xDE, 0xB5, 0x7D, 0x12, 0xCB, 0xC6, 0xC6, 0xF3, 0xB9, 0x24, 0xD9, 0x46,
	0x12, 0x7C, 0x7A, 0x97, 0x41, 0x8F, 0x93, 0x48, 0x82, 0x8F, 0x0F, 0x02,
	0x07, 0x07, 0xB4, 0x87, 0xD0, 0xD6, 0x05, 0x26, 0xE0, 0xC6, 0xDD, 0x9B, 0xC7, 0x18, 0xC3, 0xCF,
	0x52, 0x04, 0xBD, 0x4F, 0x9B, 0x27, 0xF6, 0x73, 0xB9, 0x3F, 0xEF, 0x7B, 0xB2, 0xF7, 0x2B, 0xBB,
	0x3F, 0x3E, 0x9C, 0x3E, 0x9D, 0x33, 0x1E, 0xDE, 0xAD, 0xBE, 0xEF, 0x4E, 0x00, 0x91, 0x81, 0x29,
	0x74, 0xB2, 0x70, 0xE7, 0x6D, 0xD2, 0x2A, 0x5F, 0x52, 0x04, 0x93, 0xE6, 0x18, 0x89, 0x40, 0xD8,
	0xC6, 0xE3, 0x90, 0x6E, 0xAA, 0x6A, 0xB7, 0xE2, 0x08, 0x7E, 0x78, 0x0E,
	0x01, 0x00, 0xEE, 0xB2, 0xD1, 0xD6, 0x05, 0xFF, 0x27, 0x7F, 0x26, 0xDB, 0xAA, 0xB2, 0xC9, 0x26,
	0x30, 0xC6, 0xCF, 0x11, 0x64, 0xEA, 0x6C, 0x8A, 0xE0, 0x98, 0x01, 0xF8, 0x75, 0x4B, 0x49, 0xAF,
	0x79, 0x70, 0xAE, 0xEE, 0xA7, 0x62, 0x2C, 0x00, 0x00, 0x00, 0x00, 0x47, 0x8C, 0x63, 0xE7, 0xD8,
	0x40, 0x02, 0x3C, 0xDA, 0xEA, 0x92, 0x52, 0x53, 0xAC, 0xFD, 0xC7, 0x8A, 0x4C, 0x31, 0xB2, 0xF2,
	0xEC, 0x72, 0x7B, 0xFF, 0xCE, 0xC0, 0xE7, 0x12, 0xD4, 0xE9, 0x2A, 0x01,
	0x07, 0x07, 0xA9, 0xB7, 0xD1, 0xD6, 0x05, 0x3F, 0x0D, 0x5E, 0xFD, 0xC7, 0x03, 0xFC, 0xFC, 0xD2,
	0xCE, 0xBC, 0x44, 0xD8, 0xAB, 0x44, 0xA6, 0xA0, 0x3A, 0xE4, 0x4D, 0x8F, 0x15, 0xAF, 0x62, 0x17,
	0xD1, 0xE0, 0x92, 0x85, 0xE4, 0x73, 0xF9, 0x00, 0x00, 0x00, 0xA0, 0xFC, 0x09, 0xDE, 0xAB, 0xF5,
	0x8B, 0x6F, 0x1D, 0xCA, 0xA8, 0xBA, 0xAC, 0x74, 0xDD, 0x74, 0x19, 0xD5, 0xD6, 0x10, 0xEC, 0x38,
	0xCF, 0x50, 0x29, 0x6A, 0x07, 0x0B, 0x93, 0x8F, 0x8F, 0xA8, 0x10, 0x04
};


// CN
const static uint8_t test_output_v0[160] = {
	0x1A, 0x3F, 0xFB, 0xEE, 0x90, 0x9B, 0x42, 0x0D, 0x91, 0xF7, 0xBE, 0x6E, 0x5F, 0xB5, 0x6D, 0xB7,
	0x1B, 0x31, 0x10, 0xD8, 0x86, 0x01, 0x1E, 0x87, 0x7E, 0xE5, 0x78, 0x6A, 0xFD, 0x08, 0x01, 0x00,
	0x1B, 0x60, 0x6A, 0x3F, 0x4A, 0x07, 0xD6, 0x48, 0x9A, 0x1B, 0xCD, 0x07, 0x69, 0x7B, 0xD1, 0x66,
	0x96, 0xB6, 0x1C, 0x8A, 0xE9, 0x82, 0xF6, 0x1A, 0x90, 0x16, 0x0F, 0x4E, 0x52, 0x82, 0x8A, 0x7F,
	0xA1, 0xB4, 0xFA, 0xE3, 0xE5, 0x76, 0xCE, 0xCF, 0xB7, 0x9C, 0xAF, 0x3E, 0x29, 0x92, 0xE4, 0xE0,
	0x31, 0x24, 0x05, 0x48, 0xBF, 0x8D, 0x5F, 0x7B, 0x11, 0x03, 0x60, 0xAA, 0xD7, 0x50, 0x3F, 0x0C,
	0x2D, 0x30, 0xF3, 0x87, 0x4F, 0x86, 0xA1, 0x4A, 0xB5, 0xA2, 0x1A, 0x08, 0xD0, 0x44, 0x2C, 0x9D,
	0x16, 0xE9, 0x28, 0x49, 0xA1, 0xFF, 0x85, 0x6F, 0x12, 0xBB, 0x7D, 0xAB, 0x11, 0x1C, 0xE7, 0xF7,
	0x2D, 0x9D, 0x19, 0xE4, 0xD2, 0x26, 0x44, 0x1E, 0xCD, 0x22, 0x08, 0x24, 0xA8, 0x97, 0x46, 0x62,
	0x04, 0x84, 0x90, 0x4A, 0xEE, 0x99, 0x14, 0xED, 0xB8, 0xC6, 0x0D, 0x37, 0xA1, 0x66, 0x17, 0xB0
};


// CN CONCEAL
const static uint8_t test_output_conceal[160] = {
	0xB3, 0xA1, 0x67, 0x86, 0xD2, 0xC9, 0x85, 0xEC, 0xAD, 0xC4, 0x5F, 0x91, 0x05, 0x27, 0xC7, 0xA1,
	0x96, 0xF0, 0xE1, 0xE9, 0x7C, 0x87, 0x09, 0x38, 0x1D, 0x7D, 0x41, 0x93, 0x35, 0xF8, 0x16, 0x72,
	0xC3, 0xBD, 0x8D, 0xE8, 0xD5, 0xAE, 0xB8, 0x59, 0x0A, 0x6C, 0xCB, 0x7B, 0x41, 0x30, 0xF7, 0x04,
	0xA5, 0x7C, 0xF9, 0xCA, 0x20, 0x49, 0x9C, 0xFD, 0xE8, 0x43, 0xCF, 0x66, 0x78, 0xEA, 0x76, 0xDD,
	0x91, 0x0C, 0xDE, 0x29, 0x2A, 0xE0, 0xA8, 0xCA, 0xBC, 0xAA, 0x53, 0x4C, 0x93, 0x3E, 0x7B, 0x2C,
	0xF1, 0xF9, 0xE1, 0x98, 0xB2, 0x92, 0x1E, 0x19, 0x93, 0x2A, 0x74, 0x9D, 0xDB, 0x10, 0x0F, 0x16,
	0xD5, 0x3D, 0xE4, 0xC4, 0x23, 0xD9, 0x2E, 0xFD, 0x79, 0x8D, 0x1E, 0x48, 0x4E, 0x46, 0x08, 0x6C,
	0xFF, 0x8A, 0x49, 0xFA, 0x1E, 0xB0, 0xB6, 0x9A, 0x47, 0x1C, 0xC6, 0x30, 0x36, 0x5D, 0xFD, 0x76,
	0x10, 0x07, 0x44, 0xE6, 0xC8, 0x20, 0x2A, 0x84, 0x9D, 0x70, 0x22, 0x00, 0x8B, 0x9B, 0xBD, 0x8D,
	0x27, 0x49, 0xA6, 0x06, 0xDC, 0xF0, 0xA1, 0x4B, 0x50, 0xA0, 0x12, 0xCD, 0x77, 0x01, 0x4C, 0x28
};


// CN v7
const static uint8_t test_output_v1[160] = {
	0xF2, 0x2D, 0x3D, 0x62, 0x03, 0xD2, 0xA0, 0x8B, 0x41, 0xD9, 0x02, 0x72, 0x78, 0xD8, 0xBC, 0xC9,
	0x83, 0xAC, 0xAD, 0xA9, 0xB6, 0x8E, 0x52, 0xE3, 0xC6, 0x89, 0x69, 0x2A, 0x50, 0xE9, 0x21, 0xD9,
	0xC9, 0xFA, 0xE8, 0x42, 0x5D, 0x86, 0x88, 0xDC, 0x23, 0x6B, 0xCD, 0xBC, 0x42, 0xFD, 0xB4, 0x2D,
	0x37, 0x6C, 0x6E, 0xC1, 0x90, 0x50, 0x1A, 0xA8, 0x4B, 0x04, 0xA4, 0xB4, 0xCF, 0x1E, 0xE1, 0x22,
	0xE7, 0x8C, 0x5A, 0x6E, 0x38, 0x30, 0x68, 0x4A, 0x73, 0xFC, 0x1B, 0xC6, 0x6D, 0xFC, 0x8D, 0x98,
	0xB4, 0xC2, 0x23, 0x39, 0xAD, 0xE0, 0x9D, 0xF6, 0x6D, 0x8C, 0x6A, 0xAA, 0xF9, 0xB2, 0xE3, 0x4C,
	0xB6, 0x90, 0x6C, 0xE6, 0x15, 0x5E, 0x46, 0x07, 0x9C, 0xB2, 0x6B, 0xAC, 0x3B, 0xAC, 0x1A, 0xDE,
	0x92, 0x2C, 0xD6, 0x0C, 0x46, 0x9D, 0x9B, 0xC2, 0x84, 0x52, 0x65, 0xF6, 0xBD, 0xFA, 0x0D, 0x74,
	0x00, 0x66, 0x10, 0x07, 0xF1, 0x19, 0x06, 0x3A, 0x6C, 0xFF, 0xEE, 0xB2, 0x40, 0xE5, 0x88, 0x2B,
	0x6C, 0xAB, 0x6B, 0x1D, 0x88, 0xB8, 0x44, 0x25, 0xF4, 0xEA, 0xB7, 0xEC, 0xBA, 0x12, 0x8A, 0x24
};


// CN V8
const static uint8_t test_output_v2[160] = {
	0x97, 0x37, 0x82, 0x82, 0xcf, 0x10, 0xe7, 0xad, 0x03, 0x3f, 0x7b, 0x80, 0x74, 0xc4, 0x0e, 0x14,
	0xd0, 0x6e, 0x7f, 0x60, 0x9d, 0xdd, 0xda, 0x78, 0x76, 0x80, 0xb5, 0x8c, 0x05, 0xf4, 0x3d, 0x21,
	0x87, 0x1f, 0xcd, 0x68, 0x23, 0xf6, 0xa8, 0x79, 0xbb, 0x3f, 0x33, 0x95, 0x1c, 0x8e, 0x8e, 0x89,
	0x1d, 0x40, 0x43, 0x88, 0x0b, 0x02, 0xdf, 0xa1, 0xbb, 0x3b, 0xe4, 0x98, 0xb5, 0x0e, 0x75, 0x78,
	0xe6, 0x0d, 0x24, 0x0f, 0x65, 0x85, 0x60, 0x3a, 0x4a, 0xe5, 0x5f, 0x54, 0x9b, 0xc8, 0x79, 0x93,
	0xeb, 0x3d, 0x98, 0x2c, 0xfe, 0x9b, 0xfb, 0x15, 0xb6, 0x88, 0x21, 0x94, 0xb0, 0x05, 0x86, 0x5c,
	0x59, 0x8b, 0x93, 0x7a, 0xda, 0xd2, 0xa2, 0x14, 0xed, 0xb7, 0xc4, 0x5d, 0xa1, 0xef, 0x26, 0xf3,
	0xc7, 0x73, 0x29, 0x4d, 0xf1, 0xc8, 0x2c, 0xe0, 0xd0, 0xe9, 0xed, 0x0c, 0x70, 0x75, 0x05, 0x3e,
	0x5b, 0xf6, 0xa0, 0x6e, 0xea, 0xde, 0x87, 0x0b, 0x06, 0x29, 0x03, 0xbf, 0xb4, 0x85, 0x9d, 0x04,
	0x75, 0x1a, 0xcd, 0x1e, 0xd6, 0xaa, 0x1b, 0x05, 0x24, 0x6a, 0x2c, 0x80, 0x69, 0x68, 0xdc, 0x97
};

// CN XTL
const static uint8_t test_output_xtl[32] = {
	0x8F, 0xE5, 0xF0, 0x5F, 0x02, 0x2A, 0x61, 0x7D, 0xE5, 0x3F, 0x79, 0x36, 0x4B, 0x25, 0xCB, 0xC3,
	0xC0, 0x8E, 0x0E, 0x1F, 0xE3, 0xBE, 0x48, 0x57, 0x07, 0x03, 0xFE, 0xE1, 0xEC, 0x0E, 0xB0, 0xB1
};

// CN MSR
const static uint8_t test_output_msr[32] = {
	0x3C, 0x7A, 0x61, 0x08, 0x4C, 0x5E, 0xB8, 0x65, 0xB4, 0x98, 0xAB, 0x2F, 0x5A, 0x1A, 0xC5, 0x2C,
	0x49, 0xC1, 0x77, 0xC2, 0xD0, 0x13, 0x34, 0x42, 0xD6, 0x5E, 0xD5, 0x14, 0x33, 0x5C, 0x82, 0xC5
};

// CN ALLOY
const static uint8_t test_output_alloy[32] = {
	0x9A, 0x29, 0xD0, 0xC4, 0xAF, 0xDC, 0x63, 0x9B, 0x65, 0x53, 0xB1, 0xC8, 0x37, 0x35, 0x11, 0x4C,
	0x5D, 0x77, 0x16, 0x21, 0x42, 0x97, 0x5C, 0xB8, 0x50, 0xC0, 0xA5, 0x1F, 0x64, 0x07, 0xBD, 0x33
};

// CN RTO/HOSP
const static uint8_t test_output_hosp[32] = {
	0x82, 0x66, 0x1E, 0x1C, 0x6E, 0x64, 0x36, 0x66, 0x84, 0x06, 0x32, 0x7A, 0x9B, 0xB1, 0x13, 0x19,
	0xA5, 0x56, 0x16, 0x15, 0xDF, 0xEC, 0x1C, 0x9E, 0xE3, 0x88, 0x4A, 0x6C, 0x1C, 0xEB, 0x76, 0xA5
};

// CN XFH
const static uint8_t test_output_xfh[64] = {
    0x40, 0x86, 0x5A, 0xA8, 0x87, 0x41, 0xEC, 0x1D, 0xCC, 0xBD, 0x2B, 0xC6, 0xFF, 0x36, 0xB9, 0x4D,
    0x54, 0x71, 0x58, 0xDB, 0x94, 0x69, 0x8E, 0x3C, 0xA0, 0x3D, 0xE4, 0x81, 0x9A, 0x65, 0x9F, 0xEF,
    0x52, 0x97, 0x35, 0x9E, 0xF7, 0x62, 0x9B, 0x1A, 0x9A, 0x9F, 0xE5, 0x0E, 0x50, 0x5F, 0xE6, 0xFB,
    0xA4, 0xCF, 0x30, 0x47, 0xF7, 0xFE, 0x68, 0x4F, 0x7C, 0x87, 0x6A, 0xA6, 0x60, 0x3E, 0xD5, 0x3E
};

// CN XTL V9
const static uint8_t test_output_xtl_v9[64] = {
    0x5D, 0x4F, 0xBC, 0x35, 0x60, 0x97, 0xEA, 0x64, 0x40, 0xB0, 0x88, 0x8E, 0xDE, 0xB6, 0x35, 0xDD,
    0xC8, 0x4A, 0x0E, 0x39, 0x7C, 0x86, 0x84, 0x56, 0x89, 0x5C, 0x3F, 0x29, 0xBE, 0x73, 0x12, 0xA7,
    0x02, 0xE6, 0x1D, 0x2B, 0xBC, 0x84, 0xB6, 0x71, 0x96, 0x71, 0xD5, 0x0C, 0xAC, 0x76, 0x0E, 0x6B,
    0xF1, 0xF0, 0x55, 0x34, 0x15, 0x29, 0x93, 0x04, 0x2D, 0xED, 0xD2, 0x33, 0x50, 0x6E, 0xBE, 0x25
};

// CN XCASH
const static uint8_t test_output_xcash[32] = {
    0xAE, 0xFB, 0xB3, 0xF0, 0xCC, 0x88, 0x04, 0x6D, 0x11, 0x9F, 0x6C, 0x54, 0xB9, 0x6D, 0x90, 0xC9,
    0xE8, 0x84, 0xEA, 0x3B, 0x59, 0x83, 0xA6, 0x0D, 0x50, 0xA4, 0x2D, 0x7D, 0x3E, 0xBE, 0x48, 0x21
};

// CN ZELERIUS
const static uint8_t test_output_zelerius[32] = {
	0x51, 0x6E, 0x33, 0xC6, 0xE4, 0x46, 0xAB, 0xBC, 0xCD, 0xAD, 0x18, 0xC0, 0x4C, 0xD9, 0xA2, 0x5E,
	0x64, 0x10, 0x28, 0x53, 0xB2, 0x0A, 0x42, 0xDF, 0xDE, 0xAA, 0x8B, 0x59, 0x9E, 0xCF, 0x40, 0xE2
};

// CN RWZ
const static uint8_t test_output_rwz[64] = {
    0x5f, 0x56, 0xc6, 0xb0, 0x99, 0x6b, 0xa2, 0x3e, 0x0b, 0xba, 0x07, 0x29, 0xc9, 0x90, 0x74, 0x85,
    0x5a, 0x10, 0xe3, 0x08, 0x7f, 0xdb, 0xfe, 0x94, 0x75, 0x33, 0x54, 0x73, 0x76, 0xf0, 0x75, 0xb8,
    0x8b, 0x70, 0x43, 0x9a, 0xfc, 0xf5, 0xeb, 0x15, 0xbb, 0xf9, 0xad, 0x9d, 0x2a, 0xbd, 0x72, 0x52,
    0x49, 0x54, 0x0b, 0x91, 0xea, 0x61, 0x7f, 0x98, 0x7d, 0x39, 0x17, 0xb7, 0xd7, 0x65, 0xff, 0x75
};

// CN V9 aka CN V4/V5 aka CN-R (height 10000)
const static uint8_t test_output_v4[160] = {
	0x90, 0x20, 0x14, 0x86, 0x1E, 0xCD, 0x01, 0xC5, 0x43, 0xB5, 0x61, 0xFA, 0xC8, 0x3D, 0xFF, 0x7D,
	0x76, 0x67, 0xC2, 0xD7, 0xB3, 0xD4, 0xE3, 0x4B, 0x4C, 0x7E, 0x6D, 0x04, 0x31, 0x79, 0xE6, 0x96,
	0xEA, 0xF4, 0x14, 0x76, 0x38, 0x94, 0x7C, 0xCE, 0x02, 0x50, 0x7A, 0x31, 0xB8, 0x4D, 0xDD, 0x3B,
	0x92, 0xAA, 0xC6, 0x49, 0xA1, 0x64, 0xA1, 0xA8, 0x7C, 0xD9, 0x43, 0x14, 0xC5, 0x12, 0x86, 0x61,
	0x0A, 0x18, 0xBD, 0x11, 0x36, 0x06, 0x31, 0x0D, 0x9D, 0xC0, 0x8C, 0x41, 0x88, 0xCB, 0x7C, 0xE9,
    0x5D, 0xD2, 0xBA, 0xA5, 0xFB, 0x0D, 0x2B, 0xA6, 0x6E, 0x7C, 0x78, 0x72, 0x38, 0xFE, 0x53, 0x17,
	0x1A, 0x96, 0x89, 0x0E, 0x14, 0xFF, 0x34, 0x42, 0xC0, 0x5A, 0xAB, 0xC0, 0x3F, 0x39, 0x4E, 0x43,
	0x91, 0x38, 0x67, 0x79, 0x5B, 0xAE, 0xCC, 0xA7, 0xDB, 0x4C, 0xFE, 0x8B, 0x75, 0x76, 0x1F, 0xC4,
	0x98, 0x71, 0xE6, 0xC1, 0x08, 0x9D, 0xED, 0xCC, 0x47, 0xC3, 0xF3, 0x7A, 0xA9, 0x4A, 0x3A, 0xB9,
	0xAC, 0xB8, 0x5C, 0x9F, 0xCC, 0xCB, 0xC1, 0x93, 0x9E, 0xC6, 0x6D, 0xCC, 0x45, 0xF4, 0xBA, 0xBD
};

// CN V9 aka CN V4/V5 aka CN-R (height 10001)
const static uint8_t test_output_v4_1[32] = {
	0x82, 0x58, 0x7D, 0x63, 0x7B, 0x6C, 0x0C, 0x96, 0x6A, 0x50, 0xF6, 0xC0, 0xAB, 0xB5, 0xEA, 0x1A,
	0x58, 0x2B, 0xEA, 0x7E, 0xF0, 0x2F, 0x3C, 0xA1, 0x7C, 0x1C, 0x7C, 0x2E, 0xF9, 0xE5, 0x66, 0xF2
};

// CN V9 aka CN V4/V5 aka CN-R (height 10002)
const static uint8_t test_output_v4_2[32] = {
	0x64, 0xB2, 0x4E, 0x48, 0x4A, 0x28, 0xBF, 0x11, 0xC4, 0x8A, 0x68, 0xE7, 0xB7, 0x4B, 0xFD, 0xA7,
	0xFB, 0x95, 0x66, 0x05, 0x0C, 0xF7, 0xFA, 0xA7, 0x4B, 0xD9, 0x18, 0x59, 0x88, 0x7F, 0x47, 0xA2
};


// CN-LITE
const static uint8_t test_output_v0_lite[160] = {
	0x36, 0x95, 0xB4, 0xB5, 0x3B, 0xB0, 0x03, 0x58, 0xB0, 0xAD, 0x38, 0xDC, 0x16, 0x0F, 0xEB, 0x9E,
	0x00, 0x4E, 0xEC, 0xE0, 0x9B, 0x83, 0xA7, 0x2E, 0xF6, 0xBA, 0x98, 0x64, 0xD3, 0x51, 0x0C, 0x88,
	0x28, 0xA2, 0x2B, 0xAD, 0x3F, 0x93, 0xD1, 0x40, 0x8F, 0xCA, 0x47, 0x2E, 0xB5, 0xAD, 0x1C, 0xBE,
	0x75, 0xF2, 0x1D, 0x05, 0x3C, 0x8C, 0xE5, 0xB3, 0xAF, 0x10, 0x5A, 0x57, 0x71, 0x3E, 0x21, 0xDD,
	0x38, 0x08, 0xE1, 0x17, 0x0B, 0x99, 0x8D, 0x1A, 0x3C, 0xCE, 0x35, 0xC5, 0xC7, 0x3A, 0x00, 0x2E,
	0xCB, 0x54, 0xF0, 0x78, 0x2E, 0x9E, 0xDB, 0xC7, 0xDF, 0x2E, 0x71, 0x9A, 0x16, 0x97, 0xC4, 0x18,
	0x4B, 0x97, 0x07, 0xFE, 0x5D, 0x98, 0x9A, 0xD6, 0xD8, 0xE5, 0x92, 0x66, 0x87, 0x7F, 0x19, 0x37,
	0xA2, 0x5E, 0xE6, 0x96, 0xB5, 0x97, 0x33, 0x89, 0xE0, 0xA7, 0xC9, 0xDD, 0x4A, 0x7E, 0x9E, 0x53,
	0xBE, 0x91, 0x2B, 0xF5, 0xF5, 0xAF, 0xDD, 0x09, 0xA2, 0xF4, 0xA4, 0x56, 0xEB, 0x96, 0x22, 0xC9,
	0x94, 0xFB, 0x7B, 0x28, 0xC9, 0x97, 0x65, 0x04, 0xAC, 0x4F, 0x84, 0x71, 0xDA, 0x6E, 0xD8, 0xC5
};


// CN-Lite v7
const static uint8_t test_output_v1_lite[160] = {
	0x6D, 0x8C, 0xDC, 0x44, 0x4E, 0x9B, 0xBB, 0xFD, 0x68, 0xFC, 0x43, 0xFC, 0xD4, 0x85, 0x5B, 0x22,
	0x8C, 0x8A, 0x1B, 0xD9, 0x1D, 0x9D, 0x00, 0x28, 0x5B, 0xEC, 0x02, 0xB7, 0xCA, 0x2D, 0x67, 0x41,
	0x87, 0xC4, 0xE5, 0x70, 0x65, 0x3E, 0xB4, 0xC2, 0xB4, 0x2B, 0x7A, 0x0D, 0x54, 0x65, 0x59, 0x45,
	0x2D, 0xFA, 0xB5, 0x73, 0xB8, 0x2E, 0xC5, 0x2F, 0x15, 0x2B, 0x7F, 0xF9, 0x8E, 0x79, 0x44, 0x6F,
	0x16, 0x08, 0x74, 0xC7, 0xA2, 0xD2, 0xA3, 0x97, 0x95, 0x76, 0xCA, 0x4D, 0x06, 0x39, 0x7A, 0xAB,
	0x6C, 0x87, 0x58, 0x33, 0x4D, 0xC8, 0x5A, 0xAB, 0x04, 0x27, 0xFE, 0x8B, 0x1C, 0x23, 0x2F, 0x32,
	0xC0, 0x44, 0xFF, 0x0D, 0xB5, 0x3B, 0x27, 0x96, 0x06, 0x89, 0x7B, 0xA3, 0x0B, 0xD0, 0xCE, 0x9E,
	0x90, 0x22, 0x77, 0x5A, 0xAD, 0xA1, 0xE5, 0xB6, 0xFC, 0xCB, 0x39, 0x7E, 0x2B, 0x10, 0xEE, 0xB4,
	0x8C, 0x2B, 0xA4, 0x1F, 0x60, 0x76, 0x39, 0xD7, 0xF6, 0x46, 0x77, 0x18, 0x20, 0xAD, 0xD4, 0xC9,
	0x87, 0xF7, 0x37, 0xDA, 0xFD, 0xBA, 0xBA, 0xD2, 0xF2, 0x68, 0xDC, 0x26, 0x8D, 0x1B, 0x08, 0xC6
};

// CN-Lite IPBC
const static uint8_t test_output_ipbc_lite[160] = {
	0xE4, 0x93, 0x8C, 0xAA, 0x59, 0x8D, 0x02, 0x8A, 0xB8, 0x6F, 0x25, 0xD2, 0xB1, 0x23, 0xD0, 0xD5,
	0x33, 0xE3, 0x9F, 0x37, 0xAC, 0xE5, 0xF8, 0xEB, 0x7A, 0xE8, 0x40, 0xEB, 0x5D, 0xB1, 0x35, 0x5F,
	0xB2, 0x47, 0x86, 0xF0, 0x7F, 0x6F, 0x4B, 0x55, 0x3E, 0xA1, 0xBB, 0xE8, 0xA1, 0x75, 0x00, 0x2D,
	0x07, 0x9A, 0x21, 0x0E, 0xBD, 0x06, 0x6A, 0xB0, 0xFD, 0x96, 0x9E, 0xE6, 0xE4, 0x69, 0x67, 0xBB,
	0x88, 0x45, 0x0B, 0x91, 0x0B, 0x7B, 0xCB, 0x21, 0x3C, 0x3C, 0x09, 0x30, 0x07, 0x71, 0x07, 0xD5,
	0xB8, 0x2D, 0x83, 0x09, 0xAF, 0x7E, 0xB2, 0xA8, 0xAC, 0x25, 0xDC, 0x10, 0xF8, 0x63, 0x6A, 0xBC,
	0x73, 0x01, 0x4E, 0xA8, 0x1C, 0xDA, 0x9A, 0x86, 0x17, 0xEC, 0xA8, 0xFB, 0xAA, 0x23, 0x23, 0x17,
	0xE1, 0x32, 0x68, 0x9C, 0x4C, 0xF4, 0x08, 0xED, 0xB0, 0x15, 0xC3, 0xA9, 0x0F, 0xF0, 0xA2, 0x7E,
	0xD9, 0xE4, 0x23, 0xA7, 0x9E, 0x91, 0xD8, 0x73, 0x94, 0xD6, 0x6C, 0x70, 0x9B, 0x8B, 0x72, 0x92,
	0xA3, 0xA4, 0x0A, 0xE2, 0x3C, 0x0A, 0x34, 0x88, 0xA1, 0x6D, 0xFE, 0x02, 0x44, 0x60, 0x7B, 0x3D
};


// CN-Lite v7
const static uint8_t test_output_upx[32] = {
	0xD1, 0x13, 0xE1, 0x1B, 0xBE, 0xD3, 0x2A, 0xC1, 0x7C, 0x2C, 0xAA, 0x55, 0xCC, 0x84, 0x2F, 0xA4,
	0x88, 0x91, 0xEE, 0x45, 0x63, 0x22, 0xA3, 0x0A, 0xB2, 0x80, 0xDF, 0x35, 0x16, 0x5C, 0xAF, 0x9A
};

// CN-Heavy
const static uint8_t test_output_heavy[96] = {
	0x99, 0x83, 0xF2, 0x1B, 0xDF, 0x20, 0x10, 0xA8, 0xD7, 0x07, 0xBB, 0x2F, 0x14, 0xD7, 0x86, 0x64,
	0xBB, 0xE1, 0x18, 0x7F, 0x55, 0x01, 0x4B, 0x39, 0xE5, 0xF3, 0xD6, 0x93, 0x28, 0xE4, 0x8F, 0xC2,
	0x4D, 0x94, 0x7D, 0xD6, 0xDB, 0x6E, 0x07, 0x48, 0x26, 0x4A, 0x51, 0x2E, 0xAC, 0xF3, 0x25, 0x4A,
	0x1F, 0x1A, 0xA2, 0x5B, 0xFC, 0x0A, 0xAD, 0x82, 0xDE, 0xA8, 0x99, 0x96, 0x88, 0x52, 0xD2, 0x7D,
	0x3E, 0xE1, 0x23, 0x03, 0x5A, 0x63, 0x7B, 0x66, 0xF6, 0xD7, 0xC2, 0x2A, 0x34, 0x5E, 0x88, 0xE7,
	0xFA, 0xC4, 0x25, 0x36, 0x54, 0xCB, 0xD2, 0x5C, 0x2F, 0x80, 0x2A, 0xF9, 0xCC, 0x43, 0xF7, 0xCD
};

// CN-Heavy Haven
const static uint8_t test_output_heavy_haven[96] = {
	0x5A, 0xC3, 0xF7, 0x85, 0xC4, 0x90, 0xC5, 0x85, 0x50, 0xEC, 0x95, 0xD2, 0x72, 0x65, 0x63, 0x57,
	0x7E, 0x7C, 0x1C, 0x21, 0x2D, 0x0C, 0xDE, 0x59, 0x12, 0x73, 0x20, 0x1E, 0x44, 0xFD, 0xD5, 0xB6,
	0x1F, 0x4E, 0xB2, 0x0A, 0x36, 0x51, 0x4B, 0xF5, 0x4D, 0xC9, 0xE0, 0x90, 0x2C, 0x16, 0x47, 0x3F,
	0xDE, 0x18, 0x29, 0x8E, 0xBB, 0x34, 0x2B, 0xEF, 0x7A, 0x04, 0x22, 0xD1, 0xB1, 0xF2, 0x48, 0xDA,
	0xE3, 0x7F, 0x4B, 0x4C, 0xB4, 0xDF, 0xE8, 0xD3, 0x70, 0xE2, 0xE7, 0x44, 0x25, 0x87, 0x12, 0xF9,
	0x8F, 0x28, 0x0B, 0xCE, 0x2C, 0xEE, 0xDD, 0x88, 0x94, 0x35, 0x48, 0x51, 0xAE, 0xC8, 0x9C, 0x0B
};

// CN-Heavy Tube
const static uint8_t test_output_heavy_tube[96] = {
    0xFE, 0x53, 0x35, 0x20, 0x76, 0xEA, 0xE6, 0x89, 0xFA, 0x3B, 0x4F, 0xDA, 0x61, 0x46, 0x34, 0xCF,
    0xC3, 0x12, 0xEE, 0x0C, 0x38, 0x7D, 0xF2, 0xB8, 0xB7, 0x4D, 0xA2, 0xA1, 0x59, 0x74, 0x12, 0x35,
    0xCD, 0x3F, 0x29, 0xDF, 0x07, 0x4A, 0x14, 0xAD, 0x0B, 0x98, 0x99, 0x37, 0xCA, 0x14, 0x68, 0xA3,
    0x8D, 0xAE, 0x86, 0xC1, 0xA3, 0x54, 0x05, 0xBE, 0xEA, 0x6D, 0x29, 0x24, 0x0C, 0x82, 0x97, 0x74,
    0xA0, 0x64, 0x77, 0xCD, 0x8D, 0x8A, 0xC3, 0x10, 0xB4, 0x89, 0x0E, 0xBB, 0x7D, 0xE6, 0x32, 0x8F,
    0xF4, 0x2D, 0xB6, 0x9E, 0x8A, 0xF9, 0xF8, 0xEE, 0x2C, 0xD0, 0x74, 0xED, 0xA9, 0xAA, 0xA1, 0xFB
};

// CN-Ultralite/Turtle
const static uint8_t test_output_turtle[64] = {
	0x08, 0xF4, 0x21, 0xD7, 0x83, 0x31, 0x17, 0x30, 0x0E, 0xDA, 0x66, 0xE9, 0x8F, 0x4A, 0x25, 0x69,
	0x09, 0x3D, 0xF3, 0x00, 0x50, 0x01, 0x73, 0x94, 0x4E, 0xFC, 0x40, 0x1E, 0x9A, 0x4A, 0x17, 0xAF,
	0xB2, 0x17, 0x2E, 0xC9, 0x46, 0x6E, 0x1A, 0xEE, 0x70, 0xEC, 0x85, 0x72, 0xA1, 0x4C, 0x23, 0x3E,
	0xE3, 0x54, 0x58, 0x2B, 0xCB, 0x93, 0xF8, 0x69, 0xD4, 0x29, 0x74, 0x4D, 0xE5, 0x72, 0x6A, 0x26
};


// CN-Extremelite/UPX2
const static uint8_t test_output_upx2[64] = {
	0xAA, 0xBB, 0xB8, 0xED, 0x14, 0xA8, 0x35, 0xFA, 0x22, 0xCF, 0xB1, 0xB5, 0xDE, 0xA8, 0x72, 0xB0,
	0xA1, 0xD6, 0xCB, 0xD8, 0x46, 0xF4, 0x39, 0x1C, 0x0F, 0x01, 0xF3, 0x87, 0x5E, 0x3A, 0x37, 0x61,
	0x38, 0x59, 0x15, 0x72, 0xF8, 0x20, 0xD4, 0xDE, 0x25, 0x3C, 0xF5, 0x5A, 0x21, 0x92, 0xB6, 0x22,
	0xB0, 0x28, 0x9E, 0x2E, 0x5C, 0x36, 0x16, 0xE6, 0x1E, 0x78, 0x7A, 0x8F, 0xE4, 0x62, 0xEC, 0x5A
};

#endif /* __CRYPTONIGHT_TEST_H__ */
