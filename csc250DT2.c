/*
A simple example of using the gfx library.
CSE 20211
9/7/2011
by Prof. Thain / as modified by Isaiah K.
*/

// angle brackets around an include filename mean it is provided by the system
// the compiler "should" know where to find it
#include <stdio.h>

// #include directive finds the named file and "inludes" all the text file
// right at this location in your program, BEFORE the compiler actually builds
// the program
// commands starting with # are called "preprocessor compiler directives"

// filename in quotes (with no path) just means a file in the current directory
// or folder
#include "gfx2.h"

// filename in quotes (with path)
// #include "~/csc250DT2/lab0x02/gfx2.h"

void drawSquare(double xCenter, double yCenter, double side)
{
   //calculate x,y coordinates of all corners... ulx means upper left x, etc
   double ulx = xCenter - side/2;
   double uly = yCenter - side/2;
   double llx = xCenter - side/2;
   double lly = yCenter + side/2;
   double urx = xCenter + side/2;
   double ury = yCenter - side/2;
   double lrx = xCenter + side/2;
   double lry = yCenter + side/2;

   gfx_line(ulx,uly,llx,lly);
   gfx_line(llx,lly,lrx,lry);
   gfx_line(lrx,lry,urx,ury);
   gfx_line(urx,ury,ulx,uly);
}

int main()
{
	int ysize = 300;
	int xsize = 300;

	char c;

	// Open a new window for drawing.
	gfx_open(xsize,ysize,"Example Graphics Program");

	// Set the current drawing color to green.
	gfx_color(0,200,100);// RGB 0..255

	// Draw a triangle on the screen.
	gfx_line(100,100,200,100);
	gfx_line(200,100,150,150);
	gfx_line(150,150,100,100);

   gfx_color(200,0,0);  //RGB 0...255
   drawSquare(150,150,32);
   drawSquare(150,150,16);
   drawSquare(240,99,50);

	while(1) {
		// Wait for the user to press a character.
		c = gfx_wait();

		// Quit if it is the letter q.
		if(c=='q') break;
	}

	return 0;
}


/*
Isaiah Keating
csc250DT2
lab0x02
01/31/2020
*/

#include <stdio.h>
#include "gfx2.h"

int main()
{
   int ysize = 300;
   int xsize = 300;

   char h;

   // Open a new window for drawing.
   //gfx_open(xsize,ysize,"DSU Hexagon");
   gfx_open(xsize, ysize, "DSU Hexagon");

/*

   int a=0, b=150, c=300, d=0;
   int e=255, f=0, g=0;

   for(int j=0;j<255;j++)
      {
         
         gfx_color(e,f,g);
         e = e - 1;
         //f = f + 1;
         g = g + 1;
         
         
         gfx_line(a,b,c,d);
         d = d+1;
      }

*/

//*
   // Set the current drawing color to navy.
   gfx_color(0,0,128);// RGB 0..255

   // DSU Hexagon
   gfx_line(20,75,150,0);
   gfx_line(150,0,280,75);
   gfx_line(280,75,280,225);
   gfx_line(280,225,150,300);
   gfx_line(150,300,20,225);
   gfx_line(20,225,20,75);

   gfx_color(255,0,0);
   gfx_line(150,150,150,100);

   gfx_color(0,255,0);
   gfx_line(150,150,150,200);

   gfx_color(0,0,255);
   gfx_line(150,150,100,150);

   gfx_color(255,255,255);
   gfx_line(150,150,200,150);
   
//*/
   while(1)
   {
      // Wait for the user to press a character.
      h = gfx_wait();

      // Quit if it is the letter q.
      if(h=='q') break;
   }
   return(0);
}


/*
Isaiah Keating
csc250DT2
lab0x02_part1
02/02/2020
*/

#include <stdio.h>
#include "gfx2.h"
#include "drawSquare.h"//my first header file!

int main()
{
   int ysize = 300;
   int xsize = 300;

   char h;

   // Open a new window for drawing.
   //gfx_open(xsize,ysize,"DSU Hexagon");
   gfx_open(xsize, ysize, "lab0x02_part1");


   // Set the current drawing color to navy.
   gfx_color(0,0,128);// RGB 0..255

   // DSU Hexagon
   gfx_line(20,75,150,0);
   gfx_line(150,0,280,75);
   gfx_line(280,75,280,225);
   gfx_line(280,225,150,300);
   gfx_line(150,300,20,225);
   gfx_line(20,225,20,75);

   gfx_color(255,0,0);
   gfx_line(150,150,150,100);

   gfx_color(0,255,0);
   gfx_line(150,150,150,200);

   gfx_color(0,0,255);
   gfx_line(150,150,100,150);

   gfx_color(255,255,255);
   gfx_line(150,150,200,150);
   
   drawSquare(150,150,20);

   while(1)
   {
      // Wait for the user to press a character.
      h = gfx_wait();

      // Quit if it is the letter q.
      if(h=='q') break;
   }
   return(0);
}


/*
Isaiah Keating
csc250DT2
lab0x02_part2
02/02/2020
*/

#include <stdio.h>
#include "gfx2.h"
#include "drawSquare.h"

int main()
{
   int ysize = 300;
   int xsize = 300;

   char h;

   // Open a new window for drawing.
   gfx_open(xsize, ysize, "Lab0x02--p2-myFancyGraphics");

   int a=0, b=150, c=300, d=0;
   int e=255, f=0, g=0;

   for(int j=0;j<255;j++)
      {
         
         gfx_color(e,f,g);
         e = e - 1;
         //f = f + 1;
         g = g + 1;
         
         
         gfx_line(a,b,c,d);
         d = d+1;
      }

   while(1)
   {
      // Wait for the user to press a character.
      h = gfx_wait();

      // Quit if it is the letter q.
      if(h=='q') break;
   }
   return(0);
}



