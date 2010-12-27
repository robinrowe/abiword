/* Copyright (C) 2006,2007 Marc Maurer <uwog@uwog.net>
 * Copyright (C) 2008 AbiSource Corporation B.V.
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

#ifndef __SERVICEUNIXACCOUNTHANDLER__
#define __SERVICEUNIXACCOUNTHANDLER__

#include <backends/service/xp/ServiceAccountHandler.h>

class XAP_Frame;

class ServiceUnixAccountHandler : public ServiceAccountHandler
{
public:
	ServiceUnixAccountHandler();

	static AccountHandler*					static_constructor();

	// dialog management 
	virtual void							embedDialogWidgets(void* pEmbeddingParent);
	virtual void							removeDialogWidgets(void* pEmbeddingParent);
	virtual void							loadProperties();
	virtual void							storeProperties();

private:
	GtkWidget*								table;
	GtkWidget*								username_entry;
	GtkWidget*								password_entry;
	GtkWidget*								autoconnect_button;
	GtkWidget*								register_button;
#if DEBUG
	GtkWidget*								uri_entry;
	GtkWidget*								verify_webapp_host_button;
	GtkWidget*								verify_realm_host_button;
#endif
};

#endif /* __SERVICEUNIXACCOUNTHANDLER__ */
