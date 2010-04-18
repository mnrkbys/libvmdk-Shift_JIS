/*
 * Segment file reading/writing functions
 *
 * Copyright (c) 2010, Joachim Metz <jbmetz@users.sourceforge.net>
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

#if !defined( _LIBVMDK_SEGMENT_FILE_H )
#define _LIBVMDK_SEGMENT_FILE_H

#include <common.h>
#include <types.h>

#include <liberror.h>

#include "libvmdk_libbfio.h"
#include "libvmdk_segment_file_handle.h"

#if defined( __cplusplus )
extern "C" {
#endif

extern const char cowd_sparse_file_signature[ 4 ];
extern const char vmdk_sparse_file_signature[ 4 ];

ssize_t libvmdk_segment_file_read_file_header(
         libvmdk_segment_file_handle_t *segment_file_handle,
         libbfio_pool_t *file_io_pool,
         liberror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif

