#pragma once
/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2, or (at your option)
 *  any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software Foundation,
 *  Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

/**
 * $Id$
 *
 * @file unlang/edit.h
 *
 * @brief Functions to perform edits on maps
 *
 * @copyright 2023 Network RADIUS SAS (legal@networkradius.com)
 */
#ifdef __cplusplus
extern "C" {
#endif

int		unlang_edit_push(request_t *request, bool *success, fr_edit_list_t *el, map_list_t const *map_list)
				CC_HINT(warn_unused_result) CC_HINT(nonnull(1,2,4));

#ifdef __cplusplus
}
#endif
