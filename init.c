#ifndef INIT
#define INIT

#include "opengl.h"

	extern const int WINDOW_HEIGHT;
	extern const int WINDOW_WIDTH;
void init(void){
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glShadeModel(GL_FLAT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0, (float)WINDOW_WIDTH, 0.0, (float)WINDOW_HEIGHT);
	glMatrixMode(GL_MODELVIEW);
}

#endif
