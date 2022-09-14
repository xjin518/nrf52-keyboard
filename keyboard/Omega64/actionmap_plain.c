/*
 Copyright (C) 2021,2022 Geno <geno@live.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "actionmap.h"
#include "action_code.h"
#include "actionmap_common.h"
#include "keyboard_fn.h"
#include "user_fn.h"

/* 
 * 定义需使用的FN按键
 */
#define AC_FN0    ACTION_LAYER_TAP(1, KC_RALT)
#define AC_FN1    ACTION_LAYER_TAP(2, KC_RCTL)
/* 
 * @brief 按键映射
 * 下面的按键映射与按键布局的第一组实际布局对应
 */
const action_t actionmaps[][MATRIX_ROWS][MATRIX_COLS] = { 
	[0] = ACTIONMAP(
		ESC, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, MINS, EQL, BSPC, HOME, END, 
		TAB, Q, W, E, R, T, Y, U, I, O, P, LBRC, RBRC, BSLS, INT, PGUP, 
		CAPS, A, S, D, F, G, H, J, K, L, SCLN, QUOT, ENT, DEL, PGDN, 
		LSFT, Z, X, C, V, B, N, M, COMM, DOT, SLSH, RSFT, UP, 
		LCTL, LGUI, LALT, SPC, RALT, FN1, RCTL, LEFT, DOWN, RGHT),

	[1] = ACTIONMAP(
		GRV, F1, F2, F3, F4, F5, F6, F7, F8, F9, F10, F11, F12, TRNS, TRNS, TRNS, 
		TRNS, BTN1, MS_U, BTN2, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, 
		TRNS, MS_L, MS_D, MS_R, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, 
		TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, 
		TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS),


};
