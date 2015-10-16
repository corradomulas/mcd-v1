/*
##################PROGRAMMA PER IL CALCOLO DEL MCD v1.0######################
#                                                                           #
#Copyright © 2015 Corrado Mulas.                                            #
#                                                                           #
#Rilasciato dietro licenza GNU GENERAL PUBLIC LICENSE VERSION 3             #
#                                                                           #
#    This program is free software: you can redistribute it and/or modify   #
#    it under the terms of the GNU General Public License as published by   #
#    the Free Software Foundation, either version 3 of the License, or      #
#    (at your option) any later version.                                    #
#                                                                           #
#    This program is distributed in the hope that it will be useful,        #
#    but WITHOUT ANY WARRANTY; without even the implied warranty of         #
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          #
#    GNU General Public License for more details.                           #
#                                                                           #
#    You should have received a copy of the GNU General Public License      #
#    along with this program.  If not, see <http://www.gnu.org/licenses/>.  #
#                                                                           #
#############################################################################
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    unsigned int A;
    unsigned int B;
    unsigned int mcd;
    unsigned int buffer;

    printf("Inserire il primo numero: ");
    scanf("%i", &buffer);
    if(buffer > 999999999)
    {
        printf("Buffer overflow \n");
        return 0;
    }
    printf("Numero inserito (A): %i\n", buffer);
    A = buffer;

    printf("Inserire il secondo numero: ");
    scanf("%i", &buffer);
    if(buffer > 999999999)
    {
        printf("Buffer overflow \n");
        return 0;
    }
    printf("Numero inserito (B): %i\n", buffer);
    B = buffer;

while(A != B)
{
    if(A > B)
    {
        A = (A - B);
    }
    else if(A < B)
    {
        B = (B - A);
    }
}

    if(A == B)
    {
       mcd = A;
       printf("Massimo Comune Divisore (MCD): %d\n", mcd);
    }
}












