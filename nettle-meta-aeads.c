/* nettle-meta-aeads.c

   Copyright (C) 2014 Niels Möller

   This file is part of GNU Nettle.

   GNU Nettle is free software: you can redistribute it and/or
   modify it under the terms of either:

     * the GNU Lesser General Public License as published by the Free
       Software Foundation; either version 3 of the License, or (at your
       option) any later version.

   or

     * the GNU General Public License as published by the Free
       Software Foundation; either version 2 of the License, or (at your
       option) any later version.

   or both in parallel, as here.

   GNU Nettle is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   General Public License for more details.

   You should have received copies of the GNU General Public License and
   the GNU Lesser General Public License along with this program.  If
   not, see http://www.gnu.org/licenses/.
*/

#if HAVE_CONFIG_H
# include "config.h"
#endif

#include <stddef.h>

#include "nettle-meta.h"

const struct nettle_aead * const _nettle_aeads[] = {
  &nettle_gcm_aes128,
  &nettle_gcm_aes192,
  &nettle_gcm_aes256,
  &nettle_gcm_camellia128,
  &nettle_gcm_camellia256,
  &nettle_gcm_sm4,
  &nettle_eax_aes128,
  &nettle_chacha_poly1305,
  NULL
};

const struct nettle_aead * const *
nettle_get_aeads (void)
{
  return _nettle_aeads;
}
