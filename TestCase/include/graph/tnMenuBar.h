 /*Header file for the Menu Bar widget
 * This file is part of `TinyWidgets', a widget set for the nano-X GUI which is  * a part of the Microwindows project (www.microwindows.org).
 * Copyright C 2000
 * Sunil Soman <sunil_soman@vsnl.com>
 * Amit Kulkarni <amms@vsnl.net>
 * Navin Thadani <navs@vsnl.net>
 *
 * This library is free software; you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published by the 
 * Free Software Foundation; either version 2.1 of the License, 
 * or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License 
 * for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License 
 * along with this library; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef _TNMENUBAR_H_
#define _TNMENUBAR_H_
#define MENUBAR_CALLBACKS 1
#include "tnBase.h"
#include<nano-X.h>
#define TN_MENUBAR_HEIGHT 20
#define TN_MENUBAR_WIDTH 1
typedef struct
{
	GR_COORD lastx;
	CallBackStruct CallBack[MENUBAR_CALLBACKS];
	
}
TN_STRUCT_MENUBAR;

void
CreateMenuBar (TN_WIDGET *,
	      TN_WIDGET *,
	      int,
	      int,
	      GR_SIZE, GR_SIZE, GR_COLOR, int);
void MenuBarEventHandler (GR_EVENT *, TN_WIDGET *);
void DrawMenuBar (TN_WIDGET *);
void DestroyMenuBar(TN_WIDGET *);
#endif /*_TNMENUBAR_H_*/
