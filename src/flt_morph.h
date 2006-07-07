/* -------------------------------------------------------------------------

Morphological filters: erode, dilate, open and close
For binary images
 
Copyright (c) 2006 Oleg Sklyar

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public License 
as published by the Free Software Foundation; either version 2.1
of the License, or (at your option) any later version.          

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  

See the GNU Lesser General Public License for more details.
LGPL license wording: http://www.gnu.org/licenses/lgpl.html

------------------------------------------------------------------------- */

#include "common.h"

extern "C" {
    SEXP erodeDilate(SEXP x, SEXP kernel, SEXP iters, SEXP alg);
};

