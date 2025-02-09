#ifndef DISPLAY
#define DISPLAY

#include "opengl.h"
#include "globals.h"

void display(void){
	glClear(GL_COLOR_BUFFER_BIT);

	glPointSize(5.0);
	glBegin(GL_POINTS);
        glColor3f(1.0, 0.0, 0.0);  // Set the dot color to red
        glVertex2f(0.0, 0.0);      // Position at the center of the screen
    	glEnd();

	glFlush();  // Render the drawing
}
#endif
