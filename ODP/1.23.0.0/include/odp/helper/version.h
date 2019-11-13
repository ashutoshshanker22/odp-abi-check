/* Copyright (c) 2019, Nokia
 * All rights reserved.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 */


/**
 * @file
 *
 * ODP helper version
 */

#ifndef ODPH_VERSION_H_
#define ODPH_VERSION_H_

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup odph_version VERSION
 * @{
 */

/**
 * ODP helper generation version
 *
 * Introduction of major new features or changes that make very significant
 * changes to the helper library.
 */
#define ODPH_VERSION_GENERATION 1

/**
 * ODP helper major version
 *
 * Introduction of major new features or changes. Helper libraries with common
 * generation, but with different major version numbers are likely not backward
 * compatible.
 */
#define  ODPH_VERSION_MAJOR 0

/**
 * ODP helper minor version
 *
 * Minor version is incremented when introducing backward compatible changes.
 * Helper libraries with common generation and major version, but with
 * different minor version numbers are backward compatible.
 */
#define ODPH_VERSION_MINOR 3

/**
 * ODP helper version string
 *
 * The version string defines the helper library version in this format:
 * @verbatim <generation>.<major>.<minor> @endverbatim
 *
 * The string is null terminated.
 *
 * @return Pointer to helper library version string
 */
const char *odph_version_str(void);

/**
 * @}
 */

#ifdef __cplusplus
}
#endif

#endif
