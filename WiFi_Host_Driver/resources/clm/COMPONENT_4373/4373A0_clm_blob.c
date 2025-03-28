/*
 * Copyright (c) 2019, Cypress Semiconductor Corporation, All Rights Reserved
 * SPDX-License-Identifier: LicenseRef-PBL
 *
 * This file and the related binary are licensed under the
 * Permissive Binary License, Version 1.0 (the "License");
 * you may not use these files except in compliance with the License.
 *
 * You may obtain a copy of the License here:
 * LICENSE-permissive-binary-license-1.0.txt and at
 * https://www.mbed.com/licenses/PBL-1.0
 *
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include "wiced_resource.h"

#ifndef WLAN_MFG_FIRMWARE
#if defined(CY_STORAGE_WIFI_DATA)
CY_SECTION_WHD(CY_STORAGE_WIFI_DATA) __attribute__( (used) )
#endif
const unsigned char wifi_firmware_clm_blob_data[7341] =
{
    66, 76, 79, 66, 60, 0, 0, 0, 29, 207, 206, 20, 1, 0, 0, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 60, 0, 0, 0, 109, 28, 0, 0, 29, 187, 237, 31, 0, 0, 0,
    0, 0, 0, 0, 0, 169, 28, 0, 0, 4, 0, 0, 0, 247, 227, 18, 42, 0, 0, 0,
    0, 67, 76, 77, 32, 68, 65, 84, 65, 0, 0, 18, 0, 1, 0, 57, 46, 49, 48,
    46, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 46, 51, 53, 46,
    48, 0, 0, 0, 0, 0, 0, 0, 0, 52, 17, 0, 0, 67, 108, 109, 73, 109, 112,
    111, 114, 116, 58, 32, 49, 46, 51, 52, 46, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 66, 114, 111, 97, 100, 99, 111, 109, 45, 48, 46, 48,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 244, 16, 0, 0, 16, 4, 5, 6,
    7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 18, 4, 5, 6, 7, 8,
    9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 3, 0, 0, 0, 0, 17,
    0, 0, 35, 97, 0, 15, 18, 17, 19, 10, 35, 110, 0, 16, 8, 255, 255, 0,
    35, 114, 0, 15, 19, 17, 20, 10, 48, 65, 0, 7, 8, 255, 255, 16, 48, 66,
    0, 0, 14, 0, 17, 16, 48, 67, 0, 7, 6, 12, 5, 25, 65, 67, 0, 16, 8, 255,
    255, 16, 65, 68, 0, 7, 33, 13, 39, 57, 65, 69, 0, 7, 8, 6, 7, 32, 65,
    69, 1, 7, 33, 6, 43, 32, 65, 70, 0, 7, 33, 13, 39, 57, 65, 71, 0, 7,
    41, 6, 47, 32, 65, 73, 0, 6, 15, 5, 18, 26, 65, 76, 0, 7, 33, 6, 43,
    32, 65, 77, 0, 7, 5, 12, 3, 9, 65, 78, 0, 7, 14, 6, 17, 32, 65, 79,
    0, 7, 8, 255, 255, 16, 65, 81, 0, 16, 8, 255, 255, 16, 65, 82, 0, 7,
    25, 6, 25, 0, 65, 82, 1, 7, 14, 6, 17, 0, 65, 83, 0, 6, 15, 5, 18, 26,
    65, 84, 0, 7, 33, 6, 43, 32, 65, 84, 1, 7, 37, 6, 36, 32, 65, 85, 0,
    18, 42, 22, 46, 9, 65, 85, 2, 18, 42, 21, 45, 0, 65, 87, 0, 7, 34, 6,
    31, 1, 65, 88, 0, 16, 8, 255, 255, 16, 65, 90, 0, 7, 14, 6, 17, 32,
    66, 65, 0, 7, 33, 6, 43, 32, 66, 66, 0, 7, 22, 12, 23, 25, 66, 68, 0,
    7, 46, 6, 58, 0, 66, 69, 0, 7, 33, 6, 43, 32, 66, 69, 1, 7, 37, 6, 36,
    32, 66, 70, 0, 7, 33, 13, 39, 25, 66, 71, 0, 7, 33, 6, 43, 32, 66, 71,
    1, 7, 37, 6, 36, 32, 66, 72, 0, 7, 21, 6, 22, 0, 66, 73, 0, 7, 33, 13,
    39, 25, 66, 74, 0, 7, 33, 13, 39, 57, 66, 76, 0, 16, 8, 255, 255, 16,
    66, 77, 0, 6, 15, 5, 18, 26, 66, 78, 0, 7, 8, 255, 255, 0, 66, 78, 1,
    17, 41, 20, 47, 0, 66, 79, 0, 7, 15, 12, 18, 42, 66, 81, 0, 16, 8, 255,
    255, 16, 66, 82, 0, 7, 43, 6, 52, 32, 66, 83, 0, 18, 21, 21, 22, 0,
    66, 84, 0, 7, 8, 12, 7, 56, 66, 86, 0, 16, 8, 255, 255, 16, 66, 87,
    0, 7, 45, 12, 51, 57, 66, 89, 0, 7, 33, 255, 255, 0, 66, 90, 0, 7, 15,
    12, 18, 26, 67, 65, 0, 0, 21, 0, 22, 0, 67, 65, 2, 6, 15, 5, 18, 26,
    67, 67, 0, 16, 8, 255, 255, 16, 67, 68, 0, 7, 33, 13, 39, 57, 67, 70,
    0, 7, 33, 13, 39, 25, 67, 71, 0, 7, 33, 13, 39, 57, 67, 72, 0, 7, 33,
    6, 43, 32, 67, 72, 1, 7, 37, 6, 36, 32, 67, 73, 0, 7, 33, 13, 39, 57,
    67, 75, 0, 7, 44, 12, 50, 25, 67, 76, 0, 7, 7, 6, 6, 1, 67, 77, 0, 7,
    33, 13, 39, 25, 67, 78, 0, 21, 48, 24, 53, 0, 67, 79, 0, 7, 13, 6, 11,
    32, 67, 80, 0, 16, 8, 255, 255, 16, 67, 82, 0, 7, 14, 6, 15, 32, 67,
    85, 0, 7, 8, 13, 255, 57, 67, 86, 0, 7, 33, 13, 39, 25, 67, 87, 0, 16,
    8, 255, 255, 16, 67, 88, 0, 18, 42, 21, 46, 25, 67, 89, 0, 7, 33, 6,
    43, 32, 67, 89, 1, 7, 37, 6, 36, 32, 67, 90, 0, 7, 33, 6, 43, 32, 67,
    90, 1, 7, 37, 6, 36, 32, 68, 69, 0, 7, 33, 6, 43, 32, 68, 69, 3, 7,
    37, 6, 36, 32, 68, 74, 0, 7, 8, 255, 255, 16, 68, 75, 0, 7, 33, 6, 43,
    32, 68, 75, 1, 7, 37, 6, 36, 32, 68, 77, 0, 7, 15, 12, 18, 26, 68, 79,
    0, 7, 15, 12, 18, 26, 68, 90, 0, 7, 5, 6, 4, 32, 69, 48, 0, 7, 12, 6,
    13, 32, 69, 67, 0, 7, 14, 6, 17, 32, 69, 69, 0, 7, 33, 6, 43, 32, 69,
    69, 1, 7, 37, 6, 36, 32, 69, 71, 0, 7, 41, 19, 48, 0, 69, 72, 0, 7,
    6, 12, 5, 25, 69, 82, 0, 7, 8, 255, 255, 16, 69, 83, 0, 7, 33, 6, 43,
    32, 69, 83, 1, 7, 37, 6, 36, 32, 69, 84, 0, 7, 33, 6, 43, 0, 70, 73,
    0, 7, 33, 6, 43, 32, 70, 73, 1, 7, 37, 6, 36, 32, 70, 74, 0, 7, 42,
    12, 46, 25, 70, 75, 0, 7, 33, 13, 39, 25, 70, 77, 0, 6, 15, 5, 18, 26,
    70, 79, 0, 7, 33, 13, 39, 57, 70, 82, 0, 7, 33, 6, 43, 32, 70, 82, 1,
    7, 37, 6, 36, 32, 71, 65, 0, 7, 33, 13, 39, 25, 71, 66, 0, 7, 33, 6,
    43, 32, 71, 66, 1, 7, 37, 6, 36, 32, 71, 68, 0, 7, 43, 6, 52, 0, 71,
    69, 0, 7, 33, 13, 39, 57, 71, 70, 0, 7, 33, 6, 43, 0, 71, 71, 0, 7,
    33, 13, 39, 25, 71, 72, 0, 7, 33, 13, 39, 57, 71, 73, 0, 7, 33, 13,
    39, 25, 71, 76, 0, 16, 8, 255, 255, 16, 71, 77, 0, 7, 33, 13, 39, 25,
    71, 78, 0, 7, 33, 13, 39, 57, 71, 80, 0, 7, 33, 6, 43, 0, 71, 81, 0,
    7, 33, 13, 39, 25, 71, 82, 0, 7, 33, 6, 43, 32, 71, 82, 1, 7, 37, 6,
    36, 32, 71, 83, 0, 16, 8, 255, 255, 16, 71, 84, 0, 7, 14, 11, 17, 16,
    71, 85, 0, 0, 14, 0, 17, 0, 71, 87, 0, 7, 33, 13, 39, 25, 71, 89, 0,
    7, 46, 12, 54, 25, 72, 75, 0, 18, 43, 22, 52, 0, 72, 77, 0, 16, 8, 255,
    255, 16, 72, 78, 0, 7, 47, 12, 60, 10, 72, 82, 0, 7, 33, 6, 43, 32,
    72, 82, 1, 7, 37, 6, 36, 32, 72, 84, 0, 7, 46, 12, 54, 9, 72, 85, 0,
    7, 33, 6, 43, 32, 72, 85, 1, 7, 37, 6, 36, 32, 73, 68, 0, 7, 8, 6, 7,
    0, 73, 68, 5, 7, 53, 13, 64, 25, 73, 69, 0, 7, 33, 6, 43, 32, 73, 69,
    1, 7, 37, 6, 36, 32, 73, 76, 0, 7, 5, 6, 4, 32, 73, 77, 0, 7, 33, 13,
    39, 25, 73, 78, 0, 17, 41, 20, 47, 32, 73, 79, 0, 7, 33, 13, 39, 25,
    73, 81, 0, 7, 33, 13, 39, 25, 73, 82, 0, 7, 8, 13, 255, 57, 73, 83,
    0, 7, 33, 6, 43, 32, 73, 83, 1, 7, 37, 6, 36, 32, 73, 84, 0, 7, 33,
    6, 43, 32, 73, 84, 1, 7, 37, 6, 36, 32, 74, 48, 0, 7, 38, 15, 42, 0,
    74, 49, 0, 14, 12, 255, 255, 0, 74, 50, 0, 14, 5, 255, 255, 0, 74, 51,
    0, 14, 38, 255, 255, 0, 74, 52, 0, 14, 24, 255, 255, 0, 74, 53, 0, 14,
    27, 255, 255, 0, 74, 54, 0, 14, 28, 255, 255, 0, 74, 55, 0, 14, 29,
    255, 255, 0, 74, 56, 0, 14, 40, 255, 255, 0, 74, 57, 0, 7, 28, 15, 27,
    0, 74, 69, 0, 7, 33, 13, 39, 25, 74, 77, 0, 7, 46, 13, 59, 25, 74, 79,
    0, 7, 1, 6, 0, 32, 74, 80, 0, 14, 39, 16, 40, 1, 74, 80, 1, 14, 28,
    15, 27, 0, 74, 80, 3, 14, 39, 15, 41, 1, 75, 65, 0, 20, 17, 23, 16,
    3, 75, 67, 0, 20, 46, 23, 54, 3, 75, 68, 0, 7, 49, 6, 56, 3, 75, 69,
    0, 7, 33, 6, 38, 33, 75, 71, 0, 7, 33, 13, 39, 25, 75, 72, 0, 7, 43,
    6, 52, 0, 75, 73, 0, 18, 42, 21, 46, 25, 75, 75, 0, 20, 8, 23, 7, 0,
    75, 77, 0, 7, 33, 13, 39, 25, 75, 78, 0, 7, 15, 12, 18, 26, 75, 80,
    0, 16, 8, 255, 255, 16, 75, 82, 0, 16, 53, 18, 44, 0, 75, 82, 4, 21,
    30, 24, 28, 17, 75, 87, 0, 7, 8, 6, 7, 32, 75, 87, 1, 7, 5, 6, 4, 32,
    75, 88, 0, 7, 46, 6, 54, 3, 75, 89, 0, 0, 14, 0, 17, 0, 75, 90, 0, 7,
    36, 12, 34, 8, 76, 65, 0, 7, 34, 6, 31, 1, 76, 66, 0, 7, 46, 6, 58,
    32, 76, 67, 0, 7, 15, 12, 18, 26, 76, 73, 0, 7, 33, 6, 43, 0, 76, 73,
    1, 7, 37, 6, 36, 0, 76, 75, 0, 17, 43, 20, 52, 0, 76, 82, 0, 7, 43,
    19, 50, 17, 76, 83, 0, 7, 33, 6, 43, 0, 76, 84, 0, 7, 33, 6, 43, 32,
    76, 84, 1, 7, 37, 6, 36, 32, 76, 85, 0, 7, 33, 6, 43, 32, 76, 85, 1,
    7, 37, 6, 36, 32, 76, 86, 0, 7, 33, 6, 43, 32, 76, 86, 1, 7, 37, 6,
    36, 32, 76, 89, 0, 7, 8, 14, 255, 16, 77, 65, 0, 7, 12, 19, 12, 32,
    77, 65, 1, 7, 5, 19, 4, 32, 77, 67, 0, 7, 33, 6, 43, 0, 77, 68, 0, 7,
    33, 6, 43, 32, 77, 69, 0, 7, 33, 6, 43, 32, 77, 70, 0, 7, 45, 12, 51,
    25, 77, 71, 0, 7, 33, 13, 39, 57, 77, 72, 0, 16, 8, 255, 255, 16, 77,
    75, 0, 7, 33, 6, 43, 32, 77, 76, 0, 7, 33, 13, 39, 25, 77, 77, 0, 7,
    33, 13, 39, 25, 77, 78, 0, 7, 14, 11, 17, 32, 77, 79, 0, 7, 49, 6, 58,
    0, 77, 80, 0, 6, 15, 5, 18, 26, 77, 81, 0, 7, 33, 6, 43, 0, 77, 82,
    0, 7, 33, 6, 43, 0, 77, 83, 0, 7, 33, 13, 39, 57, 77, 84, 0, 7, 33,
    6, 43, 32, 77, 84, 1, 7, 37, 6, 36, 32, 77, 85, 0, 7, 33, 6, 43, 32,
    77, 86, 0, 7, 10, 6, 10, 32, 77, 87, 0, 7, 46, 6, 58, 32, 77, 88, 0,
    7, 5, 6, 4, 0, 77, 88, 1, 7, 21, 6, 22, 0, 77, 89, 0, 17, 41, 20, 47,
    0, 77, 90, 0, 7, 16, 12, 14, 26, 78, 65, 0, 7, 16, 12, 14, 26, 78, 67,
    0, 7, 33, 13, 39, 25, 78, 69, 0, 7, 33, 13, 39, 25, 78, 70, 0, 7, 42,
    11, 45, 0, 78, 71, 0, 7, 26, 13, 26, 57, 78, 73, 0, 7, 14, 6, 17, 32,
    78, 76, 0, 7, 33, 6, 43, 32, 78, 76, 1, 7, 37, 6, 36, 32, 78, 79, 0,
    7, 33, 6, 43, 32, 78, 79, 1, 7, 37, 6, 36, 32, 78, 80, 0, 17, 9, 20,
    8, 0, 78, 82, 0, 7, 33, 13, 39, 25, 78, 85, 0, 7, 14, 255, 255, 16,
    78, 90, 0, 7, 43, 6, 52, 32, 79, 77, 0, 7, 33, 6, 43, 32, 80, 65, 0,
    17, 0, 20, 24, 32, 80, 69, 0, 7, 14, 6, 17, 32, 80, 70, 0, 7, 33, 13,
    39, 25, 80, 71, 0, 7, 2, 6, 0, 0, 80, 72, 0, 7, 43, 6, 52, 32, 80, 75,
    0, 7, 49, 11, 55, 33, 80, 76, 0, 7, 33, 6, 43, 32, 80, 76, 1, 7, 37,
    6, 36, 32, 80, 77, 0, 7, 33, 13, 39, 25, 80, 78, 0, 16, 8, 255, 255,
    16, 80, 82, 0, 0, 14, 0, 17, 0, 80, 83, 0, 16, 8, 255, 255, 0, 80, 84,
    0, 7, 33, 6, 43, 32, 80, 84, 1, 7, 37, 6, 36, 32, 80, 87, 0, 7, 15,
    12, 18, 26, 80, 89, 0, 7, 46, 6, 58, 0, 80, 89, 1, 7, 43, 6, 52, 0,
    81, 49, 0, 2, 8, 2, 7, 0, 81, 50, 0, 0, 31, 0, 29, 0, 81, 65, 0, 7,
    49, 13, 57, 57, 82, 69, 0, 7, 33, 6, 43, 0, 82, 79, 0, 7, 33, 6, 43,
    32, 82, 79, 1, 7, 37, 6, 36, 32, 82, 83, 0, 7, 33, 6, 43, 32, 82, 85,
    0, 7, 8, 255, 255, 0, 82, 85, 5, 7, 11, 11, 9, 1, 82, 87, 0, 7, 33,
    13, 39, 57, 83, 65, 0, 7, 34, 6, 32, 33, 83, 66, 0, 7, 8, 255, 255,
    16, 83, 67, 0, 7, 45, 12, 51, 25, 83, 68, 0, 7, 8, 13, 255, 57, 83,
    69, 0, 7, 33, 6, 43, 32, 83, 69, 1, 7, 37, 6, 36, 32, 83, 71, 0, 17,
    44, 20, 50, 33, 83, 72, 0, 16, 8, 255, 255, 16, 83, 73, 0, 7, 33, 6,
    43, 32, 83, 73, 1, 7, 37, 6, 36, 32, 83, 74, 0, 16, 8, 255, 255, 16,
    83, 75, 0, 7, 33, 6, 43, 32, 83, 75, 1, 7, 37, 6, 36, 32, 83, 76, 0,
    7, 33, 13, 39, 25, 83, 77, 0, 7, 33, 13, 39, 25, 83, 78, 0, 7, 33, 6,
    43, 32, 83, 79, 0, 7, 8, 255, 255, 16, 83, 82, 0, 7, 33, 13, 39, 25,
    83, 84, 0, 7, 33, 13, 39, 25, 83, 86, 0, 7, 14, 11, 17, 32, 83, 88,
    0, 16, 8, 255, 255, 16, 83, 89, 0, 16, 8, 255, 255, 16, 83, 90, 0, 7,
    33, 13, 39, 25, 84, 65, 0, 16, 8, 255, 255, 16, 84, 67, 0, 7, 33, 13,
    39, 25, 84, 68, 0, 7, 33, 13, 39, 25, 84, 70, 0, 7, 33, 13, 39, 25,
    84, 71, 0, 7, 33, 13, 39, 25, 84, 72, 0, 7, 43, 6, 52, 32, 84, 74, 0,
    7, 33, 13, 39, 25, 84, 75, 0, 16, 8, 255, 255, 16, 84, 76, 0, 7, 33,
    13, 39, 57, 84, 77, 0, 7, 33, 13, 39, 25, 84, 78, 0, 7, 5, 6, 4, 32,
    84, 79, 0, 7, 8, 255, 255, 16, 84, 82, 0, 7, 5, 6, 4, 32, 84, 82, 7,
    7, 33, 13, 39, 57, 84, 84, 0, 7, 43, 6, 52, 32, 84, 86, 0, 7, 8, 255,
    255, 16, 84, 87, 0, 0, 50, 0, 63, 0, 84, 87, 2, 0, 51, 0, 61, 0, 84,
    90, 0, 7, 33, 13, 39, 25, 85, 65, 0, 7, 8, 255, 255, 0, 85, 71, 0, 7,
    34, 6, 31, 33, 85, 77, 0, 0, 14, 0, 17, 0, 85, 83, 0, 5, 32, 4, 30,
    10, 85, 83, 25, 11, 8, 9, 7, 0, 85, 83, 26, 4, 8, 1, 7, 0, 85, 89, 0,
    18, 43, 21, 52, 0, 85, 90, 0, 7, 33, 13, 39, 25, 86, 65, 0, 7, 33, 6,
    43, 0, 86, 67, 0, 7, 15, 12, 18, 26, 86, 69, 0, 7, 41, 6, 47, 0, 86,
    71, 0, 7, 33, 6, 43, 0, 86, 73, 0, 0, 14, 0, 17, 0, 86, 78, 0, 7, 5,
    6, 4, 0, 86, 85, 0, 7, 43, 12, 49, 25, 87, 70, 0, 7, 33, 12, 43, 25,
    87, 83, 0, 7, 43, 11, 49, 17, 88, 48, 0, 3, 20, 0, 21, 0, 88, 49, 0,
    7, 41, 6, 47, 0, 88, 50, 0, 19, 3, 6, 2, 0, 88, 51, 0, 7, 33, 6, 35,
    32, 88, 65, 0, 7, 3, 255, 255, 0, 88, 66, 0, 0, 23, 255, 255, 0, 88,
    82, 0, 1, 52, 3, 62, 0, 88, 83, 0, 12, 4, 10, 1, 33, 88, 84, 0, 11,
    8, 9, 7, 32, 88, 85, 0, 8, 37, 7, 37, 32, 88, 86, 0, 10, 8, 8, 7, 32,
    88, 87, 0, 20, 35, 23, 33, 34, 88, 88, 0, 9, 33, 255, 255, 32, 88, 89,
    0, 7, 33, 6, 43, 32, 88, 90, 0, 13, 8, 255, 255, 32, 89, 49, 0, 0, 14,
    255, 255, 16, 89, 50, 0, 0, 14, 255, 255, 16, 89, 51, 0, 0, 14, 255,
    255, 16, 89, 52, 0, 0, 14, 255, 255, 16, 89, 53, 0, 0, 14, 255, 255,
    16, 89, 54, 0, 0, 14, 255, 255, 16, 89, 55, 0, 0, 14, 255, 255, 16,
    89, 69, 0, 7, 45, 12, 51, 25, 89, 84, 0, 7, 33, 6, 43, 0, 89, 89, 0,
    16, 8, 255, 255, 0, 90, 49, 0, 16, 8, 255, 255, 16, 90, 50, 0, 16, 8,
    255, 255, 16, 90, 51, 0, 16, 8, 255, 255, 16, 90, 52, 0, 16, 8, 255,
    255, 16, 90, 53, 0, 16, 8, 255, 255, 16, 90, 54, 0, 16, 8, 255, 255,
    16, 90, 55, 0, 16, 8, 255, 255, 16, 90, 56, 0, 16, 8, 255, 255, 16,
    90, 57, 0, 16, 8, 255, 255, 16, 90, 65, 0, 7, 33, 6, 43, 32, 90, 77,
    0, 17, 41, 20, 47, 0, 90, 87, 0, 7, 33, 13, 39, 57, 38, 62, 8, 102,
    142, 8, 151, 175, 8, 0, 24, 0, 159, 0, 4, 5, 76, 0, 3, 76, 6, 3, 76,
    10, 3, 76, 11, 3, 66, 12, 3, 1, 4, 62, 0, 0, 66, 4, 0, 62, 9, 0, 58,
    10, 0, 4, 3, 58, 0, 3, 66, 7, 3, 58, 12, 3, 1, 5, 42, 0, 0, 50, 3, 0,
    60, 8, 0, 54, 9, 0, 46, 10, 0, 4, 1, 56, 2, 3, 1, 1, 32, 1, 0, 4, 5,
    58, 0, 3, 68, 6, 3, 74, 10, 3, 68, 11, 3, 66, 12, 3, 1, 5, 48, 0, 0,
    58, 3, 0, 66, 8, 0, 58, 9, 0, 54, 10, 0, 4, 3, 86, 0, 0, 126, 7, 0,
    86, 12, 0, 1, 3, 78, 0, 1, 126, 5, 1, 78, 10, 1, 4, 5, 70, 0, 0, 80,
    6, 0, 80, 10, 0, 80, 11, 0, 72, 12, 0, 1, 5, 58, 0, 1, 68, 3, 1, 80,
    8, 1, 68, 9, 1, 60, 10, 1, 4, 1, 64, 4, 0, 1, 1, 64, 2, 1, 4, 1, 76,
    4, 3, 1, 1, 72, 2, 0, 4, 4, 60, 0, 3, 64, 8, 3, 44, 13, 3, 44, 16, 3,
    1, 3, 40, 0, 0, 52, 5, 0, 46, 11, 0, 0, 2, 64, 3, 3, 46, 16, 3, 4, 2,
    64, 2, 0, 44, 14, 0, 1, 3, 54, 0, 1, 64, 6, 1, 52, 12, 1, 6, 1, 76,
    4, 0, 3, 1, 76, 2, 1, 6, 1, 76, 4, 0, 3, 1, 76, 2, 1, 6, 1, 76, 4, 0,
    3, 1, 76, 2, 1, 6, 1, 76, 4, 0, 3, 1, 128, 2, 1, 4, 1, 64, 4, 0, 1,
    1, 64, 2, 1, 6, 1, 84, 4, 3, 3, 1, 72, 2, 0, 4, 2, 120, 4, 0, 120, 17,
    3, 1, 1, 120, 2, 1, 0, 0, 0, 1, 64, 4, 3, 4, 1, 80, 4, 0, 1, 1, 64,
    2, 1, 4, 1, 88, 4, 0, 1, 1, 60, 2, 1, 6, 1, 100, 4, 0, 3, 1, 88, 2,
    1, 4, 1, 64, 2, 3, 1, 1, 52, 1, 0, 4, 3, 56, 0, 3, 64, 9, 3, 56, 16,
    3, 1, 2, 46, 0, 0, 52, 7, 0, 18, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 20, 21, 1, 18, 1, 255, 1, 58, 1, 14, 1, 15, 3, 29,
    41, 55, 2, 19, 55, 3, 11, 1, 1, 1, 1, 10, 1, 11, 1, 12, 1, 13, 1, 14,
    2, 2, 2, 10, 2, 11, 2, 12, 3, 9, 10, 10, 11, 11, 12, 12, 12, 13, 12,
    14, 13, 13, 14, 14, 34, 46, 36, 48, 36, 64, 36, 116, 36, 140, 36, 144,
    36, 161, 36, 165, 36, 177, 52, 52, 52, 60, 52, 64, 52, 124, 52, 140,
    52, 144, 52, 165, 56, 60, 56, 64, 64, 64, 64, 100, 100, 100, 100, 116,
    100, 140, 100, 144, 100, 165, 104, 128, 104, 136, 104, 140, 104, 165,
    132, 140, 132, 144, 132, 165, 140, 140, 144, 144, 144, 165, 149, 149,
    149, 161, 149, 165, 149, 177, 153, 161, 165, 165, 0, 145, 0, 146, 0,
    147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 0,
    4, 0, 0, 0, 40, 17, 0, 0, 42, 42, 42, 58, 42, 106, 42, 122, 42, 138,
    42, 155, 42, 171, 58, 58, 106, 106, 106, 122, 106, 138, 106, 155, 122,
    122, 122, 138, 122, 171, 138, 138, 138, 155, 155, 155, 155, 171, 0,
    0, 1, 0, 0, 0, 20, 17, 0, 0, 1, 0, 0, 0, 207, 16, 0, 0, 1, 0, 0, 0,
    210, 16, 0, 0, 1, 0, 255, 1, 30, 2, 0, 3, 76, 1, 4, 76, 2, 2, 66, 12,
    4, 1, 0, 255, 1, 30, 2, 0, 7, 72, 0, 2, 58, 0, 4, 68, 6, 4, 74, 8, 2,
    74, 10, 4, 68, 11, 4, 66, 12, 4, 1, 0, 255, 1, 30, 2, 0, 2, 64, 2, 2,
    56, 2, 4, 1, 0, 255, 1, 30, 2, 0, 5, 72, 0, 2, 76, 1, 4, 76, 7, 2, 72,
    12, 2, 66, 12, 4, 1, 0, 255, 1, 30, 2, 0, 4, 58, 0, 4, 68, 2, 2, 66,
    7, 4, 58, 12, 4, 1, 0, 255, 1, 30, 2, 0, 5, 92, 0, 2, 86, 0, 4, 126,
    7, 1, 92, 12, 2, 86, 12, 4, 1, 0, 255, 1, 30, 2, 0, 5, 70, 0, 4, 80,
    1, 2, 80, 7, 4, 76, 12, 2, 72, 12, 4, 2, 4, 255, 1, 20, 4, 2, 1, 76,
    4, 1, 2, 0, 255, 1, 20, 4, 0, 1, 76, 4, 1, 3, 0, 4, 1, 20, 5, 2, 5,
    76, 1, 4, 76, 4, 2, 70, 12, 4, 76, 14, 4, 54, 17, 2, 3, 0, 4, 1, 20,
    5, 0, 6, 60, 0, 4, 68, 2, 2, 64, 8, 4, 48, 14, 2, 44, 14, 4, 64, 17,
    2, 3, 0, 4, 1, 20, 5, 0, 3, 64, 3, 4, 64, 5, 2, 46, 16, 4, 2, 0, 3,
    1, 20, 4, 0, 3, 64, 2, 1, 48, 14, 2, 44, 14, 4, 3, 0, 4, 1, 20, 5, 0,
    6, 62, 0, 4, 66, 4, 2, 66, 7, 4, 62, 12, 4, 66, 14, 4, 42, 17, 2, 3,
    0, 255, 1, 20, 5, 2, 2, 84, 4, 4, 78, 5, 2, 3, 0, 255, 1, 30, 5, 0,
    1, 120, 5, 1, 0, 0, 255, 0, 0, 0, 2, 0, 255, 1, 23, 4, 2, 1, 92, 4,
    1, 2, 0, 255, 1, 36, 4, 2, 1, 100, 4, 1, 2, 4, 3, 1, 20, 4, 2, 1, 76,
    4, 1, 1, 0, 255, 1, 20, 2, 2, 1, 76, 2, 1, 2, 0, 255, 1, 20, 4, 4, 3,
    56, 0, 4, 64, 9, 4, 56, 16, 4, 2, 1, 76, 4, 2, 0, 0, 0, 1, 0, 0, 0,
    100, 28, 0, 0, 1, 0, 0, 0, 103, 28, 0, 0, 1, 0, 0, 0, 106, 28, 0, 0,
    10, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 8, 12, 13, 14, 15, 16, 17,
    18, 19, 8, 4, 5, 6, 7, 8, 9, 10, 11, 0, 9, 0, 19, 0, 22, 0, 24, 0, 32,
    0, 35, 0, 42, 0, 53, 0, 59, 0, 73, 0, 75, 0, 77, 0, 80, 0, 87, 0, 92,
    0, 95, 0, 101, 0, 104, 0, 117, 0, 127, 0, 130, 0, 132, 0, 134, 0, 142,
    0, 144, 0, 160, 0, 173, 0, 175, 0, 183, 0, 188, 0, 190, 0, 192, 0, 195,
    0, 212, 0, 217, 0, 227, 0, 229, 0, 242, 0, 248, 0, 251, 0, 1, 1, 4,
    1, 11, 1, 15, 1, 18, 1, 42, 1, 46, 1, 53, 1, 6, 2, 2, 1, 1, 1, 1, 0,
    6, 2, 5, 1, 1, 1, 7, 2, 4, 1, 1, 1, 2, 8, 4, 2, 2, 1, 1, 1, 14, 2, 2,
    1, 1, 1, 1, 0, 6, 2, 5, 5, 1, 1, 7, 2, 4, 1, 1, 1, 2, 8, 4, 2, 2, 1,
    1, 1, 13, 2, 2, 1, 1, 1, 1, 18, 4, 2, 2, 5, 1, 1, 10, 12, 13, 14, 15,
    16, 17, 18, 19, 20, 21, 12, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 4,
    0, 1, 2, 3, 8, 12, 13, 14, 15, 16, 17, 18, 19, 8, 4, 5, 6, 7, 8, 9,
    10, 11, 21, 2, 2, 21, 2, 2, 50, 48, 50, 50, 45, 48, 56, 45, 48, 51,
    32, 50, 48, 58, 50, 49, 58, 52, 53, 0, 0, 0, 0, 3, 0, 0, 0, 204, 11,
    0, 0, 1, 14, 1, 0, 3, 0, 0, 0, 48, 14, 0, 0, 42, 58, 16, 106, 138, 16,
    155, 171, 16, 0, 0, 0, 3, 0, 0, 0, 140, 22, 0, 0, 21, 2, 2, 0, 3, 0,
    0, 0, 196, 15, 0, 0, 102, 1, 0, 0, 156, 0, 0, 0, 34, 46, 4, 36, 64,
    4, 100, 144, 4, 149, 177, 4, 104, 0, 0, 0, 0, 14, 0, 0, 115, 13, 0,
    0, 95, 13, 0, 0, 124, 21, 0, 0, 220, 15, 0, 0, 72, 14, 0, 0, 244, 17,
    0, 0, 218, 11, 0, 0, 188, 22, 0, 0, 32, 17, 0, 0, 12, 17, 0, 0, 176,
    22, 0, 0, 255, 80, 161, 4, 0, 28, 0, 0, 0, 0, 0, 0, 8, 28, 0, 0, 8,
    14, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 76, 13, 0, 0, 0, 0, 0, 0, 160, 16,
    0, 0, 102, 22, 0, 0, 213, 16, 0, 0, 92, 28, 0, 0, 236, 16, 0, 0, 148,
    0, 0, 0, 88, 22, 0, 0, 116, 21, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 24, 17, 0, 0, 248, 16, 0, 0, 10, 2, 255, 3,
    17, 19, 24, 29, 30, 55, 0, 4, 56, 19, 2, 70, 28, 2, 58, 36, 2, 70, 55,
    2, 14, 0, 255, 2, 23, 19, 23, 55, 2, 2, 84, 19, 2, 84, 55, 2, 14, 0,
    255, 2, 23, 19, 23, 55, 0, 2, 66, 19, 2, 66, 55, 2, 23, 1, 1, 4, 23,
    19, 17, 29, 23, 40, 30, 55, 2, 2, 84, 22, 2, 84, 55, 2, 24, 1, 5, 2,
    23, 23, 30, 55, 0, 4, 56, 19, 2, 58, 29, 2, 60, 41, 2, 70, 55, 2, 15,
    1, 255, 1, 23, 20, 2, 1, 84, 20, 2, 15, 1, 255, 1, 23, 20, 2, 1, 84,
    20, 2, 20, 1, 255, 2, 21, 20, 21, 55, 2, 2, 84, 20, 2, 84, 55, 2, 0,
    0, 255, 0, 0, 0, 19, 1, 255, 2, 23, 20, 23, 54, 0, 2, 66, 20, 2, 66,
    54, 2, 20, 1, 255, 2, 23, 20, 20, 55, 0, 2, 66, 20, 2, 64, 55, 2, 20,
    1, 255, 2, 23, 20, 20, 55, 2, 2, 92, 20, 2, 80, 55, 2, 9, 0, 255, 1,
    23, 19, 2, 1, 84, 19, 2, 9, 0, 255, 1, 20, 19, 0, 1, 56, 19, 2, 11,
    2, 255, 3, 17, 19, 24, 31, 30, 55, 0, 5, 56, 19, 2, 70, 28, 2, 58, 36,
    2, 68, 40, 2, 70, 55, 2, 13, 2, 255, 3, 17, 19, 24, 32, 30, 55, 0, 5,
    56, 19, 2, 78, 28, 2, 64, 36, 2, 68, 38, 2, 78, 46, 2, 26, 1, 255, 2,
    23, 20, 30, 42, 2, 2, 84, 23, 2, 112, 55, 2, 13, 2, 255, 3, 17, 19,
    24, 32, 30, 55, 0, 7, 58, 19, 2, 84, 27, 2, 76, 35, 2, 72, 38, 2, 80,
    44, 2, 68, 50, 2, 80, 52, 2, 27, 0, 255, 1, 30, 26, 0, 1, 120, 26, 2,
    26, 2, 255, 1, 30, 25, 0, 1, 120, 25, 2, 10, 2, 2, 3, 17, 19, 24, 29,
    30, 55, 0, 4, 56, 19, 2, 70, 28, 2, 58, 36, 2, 70, 55, 2, 10, 2, 255,
    3, 17, 19, 24, 29, 30, 55, 0, 4, 56, 19, 2, 66, 28, 2, 60, 36, 2, 66,
    55, 2, 20, 2, 255, 2, 23, 20, 33, 55, 2, 2, 84, 20, 2, 84, 55, 2, 10,
    2, 1, 3, 17, 19, 24, 29, 30, 55, 0, 4, 56, 19, 2, 70, 28, 2, 58, 36,
    2, 70, 55, 2, 32, 2, 255, 1, 30, 40, 2, 1, 84, 40, 2, 29, 2, 255, 2,
    21, 29, 30, 55, 0, 2, 60, 29, 2, 68, 55, 2, 29, 1, 255, 2, 30, 29, 30,
    55, 2, 2, 112, 29, 2, 112, 55, 2, 5, 2, 0, 2, 23, 18, 23, 19, 2, 2,
    84, 18, 2, 84, 19, 2, 7, 2, 0, 2, 23, 18, 23, 20, 2, 2, 84, 18, 2, 84,
    20, 2, 8, 2, 0, 3, 23, 18, 23, 20, 30, 40, 2, 2, 84, 18, 2, 84, 22,
    2, 6, 1, 255, 4, 14, 18, 14, 19, 20, 30, 20, 54, 0, 4, 48, 18, 2, 48,
    19, 2, 60, 30, 2, 60, 54, 2, 14, 0, 255, 2, 17, 19, 30, 55, 0, 2, 56,
    19, 2, 68, 55, 2, 12, 2, 255, 3, 17, 19, 24, 32, 30, 56, 0, 6, 62, 19,
    2, 90, 28, 2, 80, 37, 2, 90, 43, 2, 86, 48, 2, 118, 56, 2, 22, 1, 255,
    2, 23, 20, 30, 40, 2, 1, 84, 22, 2, 25, 1, 255, 1, 23, 24, 2, 1, 84,
    24, 2, 14, 0, 6, 2, 17, 19, 20, 55, 0, 2, 56, 19, 2, 60, 55, 2, 18,
    1, 255, 2, 20, 20, 20, 47, 2, 2, 72, 20, 2, 72, 47, 2, 22, 1, 255, 2,
    23, 20, 30, 40, 2, 1, 84, 22, 2, 22, 2, 255, 1, 20, 22, 0, 2, 62, 20,
    2, 66, 40, 2, 16, 2, 255, 2, 20, 20, 28, 40, 2, 2, 84, 20, 2, 112, 40,
    2, 4, 0, 255, 1, 23, 18, 2, 1, 84, 18, 2, 20, 1, 255, 2, 23, 20, 30,
    55, 2, 2, 84, 20, 2, 84, 55, 2, 21, 1, 255, 3, 23, 20, 30, 39, 30, 49,
    2, 2, 84, 21, 2, 84, 49, 2, 26, 1, 255, 3, 23, 20, 24, 41, 30, 55, 2,
    1, 84, 25, 2, 26, 1, 255, 3, 23, 20, 24, 41, 30, 55, 2, 1, 84, 25, 2,
    17, 1, 255, 2, 23, 20, 30, 42, 2, 2, 84, 20, 2, 112, 42, 2, 34, 0, 255,
    1, 27, 55, 2, 1, 84, 55, 2, 34, 0, 255, 1, 30, 55, 0, 1, 78, 55, 2,
    34, 0, 255, 1, 27, 55, 2, 1, 84, 55, 2, 34, 0, 255, 1, 20, 55, 2, 1,
    76, 55, 2, 31, 2, 255, 2, 17, 35, 30, 55, 0, 2, 68, 35, 2, 68, 55, 2,
    30, 2, 255, 3, 17, 35, 24, 40, 30, 55, 0, 3, 56, 35, 2, 68, 40, 2, 68,
    55, 2, 28, 2, 255, 3, 17, 29, 24, 40, 30, 55, 0, 3, 56, 29, 2, 58, 40,
    2, 62, 55, 2, 33, 0, 255, 1, 27, 54, 2, 1, 84, 54, 2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1, 2, 1, 4, 1, 5, 1, 18, 2, 18, 19, 4, 18, 19,
    30, 54, 2, 18, 20, 2, 18, 22, 1, 19, 3, 19, 29, 55, 3, 19, 31, 55, 3,
    19, 32, 56, 2, 19, 33, 2, 19, 55, 1, 20, 2, 20, 40, 2, 20, 42, 2, 20,
    47, 2, 20, 54, 2, 20, 55, 2, 21, 49, 1, 22, 2, 22, 55, 2, 23, 55, 1,
    24, 1, 25, 1, 26, 3, 29, 40, 55, 2, 29, 55, 3, 35, 40, 55, 2, 35, 55,
    1, 40, 1, 54, 1, 55, 0, 0, 0, 1, 0, 0, 0, 90, 16, 0, 0, 4, 0, 0, 0,
    97, 16, 0, 0, 5, 0, 0, 0, 125, 16, 0, 0, 9, 0, 19, 0, 22, 0, 24, 0,
    32, 0, 35, 0, 42, 0, 53, 0, 59, 0, 73, 0, 75, 0, 77, 0, 80, 0, 87, 0,
    92, 0, 95, 0, 101, 0, 104, 0, 117, 0, 127, 0, 130, 0, 132, 0, 134, 0,
    142, 0, 144, 0, 160, 0, 173, 0, 175, 0, 183, 0, 188, 0, 190, 0, 192,
    0, 195, 0, 212, 0, 217, 0, 227, 0, 229, 0, 242, 0, 248, 0, 251, 0, 1,
    1, 4, 1, 11, 1, 15, 1, 18, 1, 46, 1, 52, 1, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 84, 0, 69, 1, 74, 1, 16, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14,
    15, 16, 17, 18, 19, 18, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16,
    17, 18, 19, 20, 21, 0, 0, 68, 69, 0, 0, 3, 0, 0, 0, 96, 22, 0, 0, 74,
    80, 0, 0, 10, 0, 0, 0, 234, 13, 0, 0, 85, 83, 0, 0, 2, 0, 0, 0, 184,
    22, 0, 0, 3, 0, 0, 0, 220, 27, 0, 0, 252, 0, 253, 0, 4, 2, 64, 19, 1,
    64, 55, 1, 1, 2, 40, 14, 0, 40, 39, 0, 4, 4, 56, 19, 0, 58, 29, 0, 60,
    41, 0, 70, 55, 0, 5, 3, 52, 15, 1, 64, 30, 1, 72, 39, 1, 8, 3, 52, 1,
    0, 64, 10, 0, 72, 17, 0, 4, 3, 60, 20, 1, 60, 40, 1, 60, 55, 1, 1, 3,
    56, 14, 0, 60, 25, 0, 60, 39, 0, 6, 1, 84, 20, 0, 7, 1, 84, 15, 1, 10,
    1, 84, 1, 0, 4, 1, 60, 20, 1, 1, 1, 56, 15, 0, 6, 1, 84, 20, 0, 7, 1,
    88, 15, 1, 10, 1, 88, 1, 0, 6, 2, 84, 20, 0, 84, 55, 0, 7, 2, 84, 15,
    1, 84, 39, 1, 10, 2, 84, 1, 0, 84, 17, 0, 0, 0, 4, 2, 66, 20, 1, 66,
    54, 1, 1, 2, 54, 15, 0, 54, 39, 0, 6, 2, 92, 20, 0, 80, 55, 0, 7, 2,
    88, 15, 1, 76, 39, 1, 10, 2, 88, 1, 0, 76, 17, 0, 4, 2, 66, 20, 1, 64,
    55, 1, 1, 2, 56, 15, 0, 56, 39, 0, 4, 1, 56, 19, 1, 1, 1, 48, 14, 0,
    4, 1, 60, 19, 1, 1, 1, 56, 14, 0, 4, 1, 60, 19, 1, 1, 1, 56, 14, 0,
    6, 2, 84, 23, 0, 112, 55, 0, 7, 2, 88, 19, 1, 116, 39, 1, 10, 2, 88,
    4, 0, 116, 17, 0, 4, 5, 56, 19, 1, 70, 28, 1, 58, 36, 1, 68, 40, 1,
    70, 55, 1, 1, 7, 52, 13, 0, 66, 22, 0, 68, 23, 0, 52, 26, 0, 62, 27,
    0, 72, 33, 0, 74, 39, 0, 4, 11, 58, 19, 0, 84, 27, 0, 76, 34, 0, 76,
    36, 0, 72, 38, 0, 80, 44, 0, 68, 50, 0, 80, 51, 0, 80, 53, 0, 80, 57,
    0, 80, 58, 0, 5, 10, 58, 13, 1, 66, 22, 1, 80, 23, 1, 62, 26, 1, 66,
    27, 1, 82, 32, 1, 74, 35, 1, 76, 37, 1, 72, 38, 1, 80, 41, 1, 8, 5,
    52, 0, 0, 58, 7, 0, 50, 8, 0, 82, 13, 0, 72, 17, 0, 4, 6, 56, 19, 1,
    68, 28, 1, 56, 36, 1, 68, 38, 1, 68, 45, 1, 68, 55, 1, 1, 6, 48, 14,
    0, 68, 23, 0, 48, 26, 0, 62, 27, 0, 74, 33, 0, 72, 39, 0, 4, 5, 56,
    19, 0, 78, 28, 0, 64, 36, 0, 68, 38, 0, 78, 46, 0, 5, 10, 62, 13, 1,
    62, 22, 1, 78, 23, 1, 50, 26, 1, 56, 27, 1, 78, 32, 1, 78, 35, 1, 78,
    37, 1, 60, 38, 1, 78, 41, 1, 8, 6, 58, 0, 0, 64, 7, 0, 76, 8, 0, 76,
    12, 0, 78, 15, 0, 72, 17, 0, 4, 1, 120, 26, 0, 5, 1, 120, 21, 1, 8,
    1, 120, 6, 0, 4, 1, 120, 25, 0, 5, 1, 120, 20, 1, 8, 1, 120, 5, 0, 4,
    4, 56, 19, 1, 70, 28, 1, 58, 36, 1, 70, 55, 1, 1, 4, 48, 14, 0, 62,
    23, 0, 48, 26, 0, 60, 39, 0, 4, 4, 56, 19, 1, 66, 28, 1, 60, 36, 1,
    66, 55, 1, 1, 3, 56, 14, 0, 60, 24, 0, 60, 39, 0, 6, 2, 84, 20, 0, 84,
    55, 0, 7, 2, 88, 15, 1, 88, 39, 1, 10, 2, 88, 1, 0, 88, 17, 0, 4, 4,
    56, 19, 1, 70, 28, 1, 58, 36, 1, 70, 55, 1, 1, 4, 48, 14, 0, 62, 23,
    0, 48, 26, 0, 60, 39, 0, 4, 2, 60, 29, 1, 68, 55, 1, 1, 2, 56, 24, 0,
    56, 39, 0, 6, 2, 112, 29, 0, 112, 55, 0, 7, 2, 112, 24, 1, 112, 39,
    1, 10, 2, 112, 7, 0, 112, 17, 0, 0, 2, 64, 18, 1, 64, 20, 1, 4, 4, 48,
    18, 0, 48, 19, 0, 60, 30, 0, 60, 54, 0, 5, 2, 48, 17, 1, 48, 39, 1,
    8, 2, 48, 2, 0, 48, 17, 0, 4, 2, 56, 19, 1, 68, 55, 1, 1, 2, 48, 14,
    0, 60, 39, 0, 4, 6, 62, 19, 0, 90, 28, 0, 80, 37, 0, 90, 43, 0, 86,
    48, 0, 118, 56, 0, 5, 6, 74, 14, 1, 98, 23, 1, 66, 26, 1, 74, 27, 1,
    98, 34, 1, 118, 40, 1, 8, 5, 74, 0, 0, 78, 7, 0, 82, 9, 0, 98, 15, 0,
    118, 18, 0, 6, 1, 84, 24, 0, 7, 1, 88, 20, 1, 10, 1, 88, 5, 0, 6, 1,
    84, 24, 0, 7, 1, 88, 20, 1, 10, 1, 88, 5, 0, 4, 2, 56, 19, 0, 60, 55,
    0, 5, 2, 48, 14, 1, 60, 39, 1, 8, 2, 64, 0, 0, 70, 17, 0, 6, 2, 72,
    20, 0, 72, 47, 0, 3, 2, 76, 15, 1, 76, 35, 1, 4, 2, 60, 20, 1, 60, 40,
    1, 1, 2, 56, 15, 0, 64, 29, 0, 4, 2, 60, 20, 1, 60, 40, 1, 1, 1, 56,
    18, 0, 4, 2, 84, 20, 1, 84, 40, 1, 1, 1, 56, 18, 0, 6, 1, 84, 22, 0,
    7, 1, 88, 18, 1, 10, 1, 88, 3, 0, 6, 1, 84, 22, 0, 7, 1, 88, 18, 1,
    10, 1, 88, 3, 0, 6, 2, 84, 20, 0, 112, 40, 0, 3, 2, 68, 15, 1, 96, 29,
    1, 4, 2, 66, 20, 0, 66, 40, 0, 1, 2, 42, 15, 1, 64, 29, 1, 4, 2, 62,
    20, 1, 66, 40, 1, 1, 2, 42, 15, 0, 64, 29, 0, 4, 2, 60, 20, 0, 60, 40,
    0, 1, 2, 56, 15, 1, 64, 29, 1, 0, 0, 4, 4, 60, 20, 1, 60, 39, 1, 60,
    47, 1, 60, 55, 1, 1, 4, 56, 15, 0, 60, 28, 0, 60, 35, 0, 60, 39, 0,
    6, 2, 84, 21, 0, 84, 49, 0, 7, 2, 88, 16, 1, 88, 36, 1, 10, 2, 88, 2,
    0, 88, 16, 0, 4, 2, 60, 20, 1, 60, 55, 1, 1, 2, 56, 15, 0, 60, 39, 0,
    0, 2, 60, 20, 1, 60, 55, 1, 6, 1, 84, 25, 0, 7, 1, 84, 20, 1, 10, 1,
    84, 5, 0, 6, 1, 84, 25, 0, 7, 1, 88, 20, 1, 10, 1, 88, 5, 0, 6, 2, 84,
    20, 0, 112, 42, 0, 7, 2, 88, 15, 1, 116, 31, 1, 10, 2, 88, 1, 0, 116,
    11, 0, 4, 3, 60, 20, 1, 60, 40, 1, 60, 55, 1, 1, 3, 56, 15, 0, 64, 29,
    0, 60, 39, 0, 4, 1, 60, 55, 1, 1, 1, 52, 39, 0, 6, 1, 80, 55, 0, 7,
    1, 80, 39, 1, 10, 1, 80, 17, 0, 6, 1, 80, 55, 0, 7, 1, 80, 39, 1, 10,
    1, 80, 17, 0, 6, 1, 76, 55, 0, 7, 1, 68, 39, 1, 10, 1, 68, 17, 0, 6,
    1, 76, 55, 0, 7, 1, 76, 39, 1, 10, 1, 76, 17, 0, 4, 1, 60, 55, 1, 1,
    1, 60, 39, 0, 6, 1, 84, 55, 0, 7, 1, 88, 39, 1, 10, 1, 88, 17, 0, 4,
    1, 78, 55, 0, 5, 1, 78, 39, 1, 8, 1, 78, 17, 0, 4, 3, 56, 35, 1, 68,
    40, 1, 68, 55, 1, 1, 4, 48, 26, 0, 62, 27, 0, 74, 33, 0, 72, 39, 0,
    4, 3, 56, 29, 1, 58, 40, 1, 62, 55, 1, 1, 4, 46, 23, 0, 48, 26, 0, 56,
    29, 0, 56, 39, 0, 4, 2, 68, 35, 1, 68, 55, 1, 1, 2, 66, 26, 0, 60, 39,
    0, 2, 1, 84, 54, 0, 0, 0, 88, 65, 0, 0, 2, 0, 0, 0, 214, 11, 0, 0, 88,
    84, 0, 0, 47, 0, 0, 0, 248, 21, 0, 0, 88, 86, 0, 0, 48, 0, 0, 0, 250,
    15, 0, 0, 3, 0, 0, 0, 224, 21, 0, 0, 3, 3, 3, 9, 3, 11, 4, 4, 4, 7,
    4, 8, 4, 10, 4, 11, 5, 7, 8, 8, 9, 9, 9, 11, 11, 11, 38, 38, 38, 46,
    38, 62, 38, 110, 38, 118, 38, 134, 38, 142, 38, 159, 38, 175, 46, 46,
    54, 54, 54, 62, 54, 134, 62, 62, 102, 102, 102, 110, 102, 134, 102,
    142, 102, 159, 110, 126, 110, 134, 110, 142, 134, 134, 134, 159, 142,
    142, 151, 151, 151, 159, 151, 175, 159, 159, 1, 0, 0, 0, 112, 13, 0,
    0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 115, 67, 0, 0
};
const resource_hnd_t wifi_firmware_clm_blob =
{ RESOURCE_IN_MEMORY, 7341, {.mem = { (const char *)wifi_firmware_clm_blob_data }}};
#endif /* !WLAN_MFG_FIRMWARE */
