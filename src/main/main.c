/*
 * This file is part of AutonomousFlight.
 *
 * AutonomousFlight is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * AutonomousFlight is distributed in the hope that it will be useful,
 * but without any warranty; without even the implied warranty of
 * merchantability or fitness for any purpose. The entire risk as to the
 * quality and performace of the program is with the user. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with AutonomousFlight.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>

void init()
{
  printf("Hello World\n");
}

void processLoop()
{}

 int main(void)
 {
     init();

     while (true)
     {
         processLoop();
     }
 }
