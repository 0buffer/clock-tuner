/* A simple user interface for this project

Copyright (C) 2016 Arnie97

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program; if not, write to the Free Software Foundation, Inc.,
51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

*/

#ifndef _MAIN_H
#define _MAIN_H

int event_handler(unsigned row, unsigned col);
int show_system_info(void);
int show_freq_config(int page);
int show_freq_confirm(int choice);
int show_freq_change(unsigned mpllcon, unsigned clkslow, unsigned freq);
int show_credits(void);

#endif
