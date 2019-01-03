/*
 * The libcaes header wrapper
 *
 * Copyright (C) 2011-2019, Omar Choudary <choudary.omar@gmail.com>,
 *                          Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#if !defined( _LIBFVDE_LIBCAES_H )
#define _LIBFVDE_LIBCAES_H

#include <common.h>

/* Define HAVE_LOCAL_LIBCAES for local use of libcaes
 */
#if defined( HAVE_LOCAL_LIBCAES )

#include <libcaes_context.h>
#include <libcaes_definitions.h>
#include <libcaes_support.h>
#include <libcaes_tweaked_context.h>
#include <libcaes_types.h>

#else

/* If libtool DLL support is enabled set LIBCAES_DLL_IMPORT
 * before including libcaes.h
 */
#if defined( _WIN32 ) && defined( DLL_IMPORT )
#define LIBCAES_DLL_IMPORT
#endif

#include <libcaes.h>

#endif /* defined( HAVE_LOCAL_LIBCAES ) */

#endif /* !defined( _LIBFVDE_LIBCAES_H ) */

