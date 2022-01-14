"""
Colorized - A program to add colour to Node.js console output.
Copyright (C) 2021 prxvvy <qsk55464@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <https://www.gnu.org/licenses/>.
"""


{
    "targets": [
        {
            "target_name": "colorized_lib",
            "sources": [
                "./source/main.c",
                "./source/utils.c",
                "./source/colours.c",
                "./source/include/utils.h",
                "./source/include/colours.h",
                "./source/include/colour_node.h",
                "./source/colour_node.c",
            ],
        }
    ]
}
