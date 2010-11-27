/*
 *  This file is part of RawTherapee.
 *
 *  Copyright (c) 2004-2010 Gabor Horvath <hgabor@rawtherapee.com>
 *
 *  RawTherapee is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 * 
 *  RawTherapee is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with RawTherapee.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef __REFRESHMAP__
#define __REFRESHMAP__

#include <glibmm.h>


#define FIRST          65535
#define ALL            65535
#define TRANSFORM      127
#define RETINEX        63
#define AUTOEXP        31
#define RGBCURVE       15
#define LUMINANCECURVE 6
#define SHARPENING     2
#define IMPULSEDENOISE 2
#define DEFRINGE       2
#define LUMADENOISE    2
#define WHITEBALANCE   255
#define DEMOSAIC       511
#define DARKFRAME      1023
#define COLORBOOST     1
#define COLORDENOISE   1
#define DIRPYRDENOISE  3
#define CROP           16384
#define EXIF           32768
#define IPTC           32768
#define EQUALIZER      3
#define DIRPYREQUALIZER	3
#define NONE           0

#define M_PREPROC   512
#define M_RAW       256
#define M_INIT      128
#define M_TRANSFORM 64
#define M_BLURMAP   32
#define M_AUTOEXP   16
#define M_RGBCURVE   8
#define M_LUMACURVE  4
#define M_LUMINANCE  2
#define M_COLOR      1

extern int refreshmap[];
#endif    
