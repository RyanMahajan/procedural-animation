#ifndef DISPLAY
#define DISPLAY

#include "opengl.h"
#include "globals.h"
#include "structs.h"

void makechain(point* chain){
	for(int i=0; i<NUM_POINTS; i++){
		chain[i].x=(float)i;
		chain[i].y=(float)i;
		chain[i].z=1.0;
	}
}

void drawchain(point* chain){
	glPointSize(5.0);
	glBegin(GL_POINTS);
        glColor3f(1.0, 0.0, 0.0);  // Set the dot color to red
       
	for(int i=0; i<NUM_POINTS; i++){
		glVertex2f(chain[i].x, chain[i].y);
	}

    	glEnd();
}

void display(void){
	glClear(GL_COLOR_BUFFER_BIT);

	point chain[NUM_POINTS];
	makechain(chain);

	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(XTRANSLATE, 0.0, 0.0);
	drawchain(chain);
	glPopMatrix();

	if(XTRANSLATE > 1000)
		XTRANSLATE = -100.0;
	else
		XTRANSLATE+=1.0;

	glFlush();  // Render the drawing
	glutPostRedisplay();
}
#endif
