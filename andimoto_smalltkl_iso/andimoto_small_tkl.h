#pragma once

#include "quantum.h"

#define XXX KC_NO

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
 
#define LAYOUT( \
    K000 ,        K002 , K003 , K004 , K005 ,        K007 , K008 , K009 , K010 , K011, K012, K013, K014, K015, K016, \
    K100 , K101 , K102 , K103 , K104 , K105 , K106 , K107 , K108 , K109 , K110 , K111, K112,       K114, K115, K116, \
    K200 ,        K202 , K203 , K204 , K205 , K206 , K207 , K208 , K209 , K210 , K211, K212, K213,       K215, K216, \
    K300 ,        K302 , K303 , K304 , K305 , K306 , K307 , K308 , K309 , K310 , K311, K312, K313, K314,            \
    K400 , K401 , K402 , K403 , K404 , K405 ,        K407 , K408 , K409 , K410 , K411, K412, K413,       K415,      \
    K500 , K501 , K502 ,                             K507 ,                      K511, K512, K513, K514, K515, K516 \
) { \
	{ K000, KC_NO, K002, K003 , K004 , K005 , KC_NO, K007, K008 , K009 , K010 , K011, K012 , K013 , K014 , K015 , K016 }, \
    { K100, K101 , K102, K103 , K104 , K105 , K106 , K107, K108 , K109 , K110 , K111, K112 , KC_NO, K114 , K115 , K116 }, \
    { K200, KC_NO, K202, K203 , K204 , K205 , K206 , K207, K208 , K209 , K210 , K211, K212 , K213 , KC_NO, K215 , K216 }, \
    { K300, KC_NO, K302, K303 , K304 , K305 , K306 , K307, K308 , K309 , K310 , K311, K312 , K313 , K314 , KC_NO, KC_NO }, \
    { K400, K401 , K402, K403 , K404 , K405 , KC_NO, K407, K408 , K409 , K410 , K411, K412 , K413 , KC_NO, K415 , KC_NO }, \
    { K500, K501 , K502, KC_NO, KC_NO, KC_NO, KC_NO, K507, KC_NO, KC_NO, KC_NO, K511, K512 , K513 , K514 , K515 , K516 }  \
}
