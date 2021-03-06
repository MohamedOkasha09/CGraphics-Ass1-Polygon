#include "pch.h"
#include <GL/glut.h>

void initRend();
void polygon();

int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(600, 450); 
	glutCreateWindow("Basic Shapes - Polygon");
	initRend();
	glutDisplayFunc(polygon);
	glutMainLoop();
	
}

void initRend()
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 740.0, 0.0, 580.0);

}

void polygon() {
	glClear(GL_COLOR_BUFFER_BIT);
	

	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 0.0);	
	glVertex2i(150, 100);	
	glVertex2i(400, 100);	
	glVertex2i(500, 275);	
	glVertex2i(425, 450);	
	glVertex2i(275, 500);	
	glVertex2i(125, 450);	
	glVertex2i(50, 275);
	
	glEnd();
	glFlush();

}