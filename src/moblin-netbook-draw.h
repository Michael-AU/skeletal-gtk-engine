/*
 * moblin_netbook-draw.h
 * This file is part of moblin_netbook-engine
 *
 * Copyright (C) 2006,2007 - OpenedHand Ltd
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */


#include <gtk/gtk.h>

void moblin_netbook_draw_style_class_init (GtkStyleClass *style_class);

#define DRAW_ARGS    GtkStyle       *style, \
                     GdkWindow      *window, \
                     GtkStateType    state_type, \
                     GtkShadowType   shadow_type, \
                     GdkRectangle   *area, \
                     GtkWidget      *widget, \
                     const gchar    *detail, \
                     gint            x, \
                     gint            y, \
                     gint            width, \
                     gint            height

#define SANITIZE_SIZE					\
  g_return_if_fail (width  >= -1);			\
  g_return_if_fail (height >= -1);			\
                                                        \
  if ((width == -1) && (height == -1))			\
    gdk_drawable_get_size (window, &width, &height);	\
  else if (width == -1)					\
    gdk_drawable_get_size (window, &width, NULL);	\
  else if (height == -1)				\
    gdk_drawable_get_size (window, NULL, &height);

