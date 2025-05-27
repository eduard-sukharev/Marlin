/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/********************************************************************************
 * @file     dwin_lcd.h
 * @author   LEO / Creality3D
 * @date     2019/07/18
 * @version  2.0.1
 * @brief    迪文屏控制操作函数
 ********************************************************************************/

#include "../common/dwin_api.h"
#include "../common/dwin_set.h"
#include "../common/dwin_font.h"
#include "../common/dwin_color.h"

#define DWIN_FONT_MENU  font8x16
#define DWIN_FONT_STAT  font10x20
#define DWIN_FONT_HEAD  font10x20
#define DWIN_FONT_ALERT font14x28
#define DWIN_MIDDLE_FONT_STAT font8x16

#define DWIN_MENU_FONT_HEIGHT  16
#define DWIN_MENU_FONT_WIDTH    8
#define DWIN_MENU_LINE_HEIGHT  20

#define DWIN_BTN_WIDTH 110
#define DWIN_BTN_HEIGHT 30
#define DWIN_TWO_BTN_LEFT_X 26
#define DWIN_TWO_BTN_RIGHT_X 146
#define DWIN_ONE_BTN_X 86

#define DWIN_MAIN_MENU_H_PADDING 12
#define DWIN_MAIN_MENU_V_PADDING 10
#define DWIN_MAIN_MENU_TOP_PADDING 30
#define DWIN_MAIN_MENU_ICON_W 102
#define DWIN_MAIN_MENU_ICON_H 115

#define DWIN_MENU_ICON_WIDTH 20
#define DWIN_MENU_ICON_RIGHT_ALIGN_X (DWIN_WIDTH - DWIN_MENU_ICON_WIDTH - DWIN_MAIN_MENU_H_PADDING)

// Copy area from virtual display area to current screen
//  cacheID: virtual area number
//  xStart/yStart: Upper-left of virtual area
//  xEnd/yEnd: Lower-right of virtual area
//  x/y: Screen paste point
void dwinFrameAreaCopy(uint8_t cacheID, uint16_t xStart, uint16_t yStart, uint16_t xEnd, uint16_t yEnd, uint16_t x, uint16_t y);

// Draw a rectangle button with text
//  x/y: Upper-left point
//  w/h: Width/height
//  caption: button caption
void dwinDrawButton(uint16_t x, uint16_t y, uint16_t w, uint16_t h, const char * const caption);
inline void dwinDrawButton(uint16_t x, uint16_t y, uint16_t w, uint16_t h, FSTR_P const ftitle) {
  #ifdef __AVR__
    char ctitle[strlen_P(FTOP(ftitle)) + 1];
    strcpy_P(ctitle, FTOP(ftitle));
    dwinDrawButton(x, y, w, h, ctitle);
  #else
    dwinDrawButton(x, y, w, h, FTOP(ftitle));
  #endif
}