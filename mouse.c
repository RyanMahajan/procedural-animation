#ifndef MOUSE
#define MOUSE

#include <GL/glut.h>
#include <stdio.h>

#include "globals.h"
#include "prototypes.h"

void mouse(int button, int state, int x, int y){
	int ycoord = WINDOW_HEIGHT-y;
	switch(button){
		case GLUT_LEFT_BUTTON:
			if(state == GLUT_DOWN){
				printf("left");
			}
			break;
		case GLUT_RIGHT_BUTTON:
			if(state == GLUT_DOWN){
				printf("right");
			}
			break;
		default:
			break;
	}
}

#endif
