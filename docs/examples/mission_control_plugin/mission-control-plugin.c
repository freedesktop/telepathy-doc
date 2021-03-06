/*
 * mission-control-plugin.c
 *
 * A Mission Control plugin to expose libsocialweb accounts with chat
 * capabilities (e.g. Facebook) to Mission Control
 *
 * Copyright (C) 2010 Collabora Ltd.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 *
 * Authors:
 *    Danielle Madeley <danielle.madeley@collabora.co.uk>
 */

#include <mission-control-plugins/mission-control-plugins.h>

#include "mcp-account-manager-example.h"

GObject *
mcp_plugin_ref_nth_object (guint n)
{
  static void *plugin_0 = NULL;

  if (plugin_0 == NULL)
    plugin_0 = g_object_new (MCP_TYPE_ACCOUNT_MANAGER_EXAMPLE, NULL);

  switch (n)
    {
      case 0:
        return g_object_ref (plugin_0);
	break;

      default:
        return NULL;
	break;
    }
}
