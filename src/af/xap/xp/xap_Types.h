/* AbiWord
 * Copyright (C) 1998 AbiSource, Inc.
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  
 * 02111-1307, USA.
 */


#ifndef AP_TYPES_H
#define AP_TYPES_H

/*
	The actual set of IDs is private to each app, but we want a general
	way to reference them.  

	The forward declarations are just there to keep compilers from getting
	confused.  We actually always use the typedefs. 
*/
enum _Ap_Menu_Id;
enum _Ap_Toolbar_Id;

typedef enum _Ap_Menu_Id		AP_Menu_Id;
typedef enum _Ap_Toolbar_Id		AP_Toolbar_Id;

#endif /* AP_TYPES_H */
