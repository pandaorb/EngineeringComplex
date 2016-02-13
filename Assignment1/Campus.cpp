// GraphicsTest.cpp : Defines the entry point for the console application.
//

#include "types.h"
#include "stdafx.h"
#include <GL/glut.h>
#include "Broun.h"
#include "Davis.h"
#include "Harbert.h"
#include "L.h"
#include "Ramsay.h"
#include "Ross.h"
#include "Shelby.h"
#include "Shops.h"
#include "Stairs.h"
#include "Streets.h"
#include "Textile.h"
#include "Wiggins.h"
#include "Wilmore.h"
#include "Woltosz.h"

int standardInit(void);
int programInit(void);
void drawBuildings(void);


int _tmain(int argc, char** argv)
{
	glutInit(&argc, argv);
	standardInit();
	glutDisplayFunc(drawBuildings);
	programInit();
	glutMainLoop();
	return 0;
}

int standardInit(void)
{
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0); //This is top left in windows
	glutCreateWindow("Engineering Campus");
	return 0;
}

int programInit(void)
{
	/* set background color to blue */
	glClearColor(0.0, 0.0, 0.25, 0.5); //fourth parameter indicates opacity
	glClear(GL_COLOR_BUFFER_BIT);
	/* set buildings to orange */
	glColor3f(0.5, 0.2, 0.0);

	/* set up camera */
	glMatrixMode(GL_PROJECTION);

	//http://stackoverflow.com/questions/628796/what-does-glloadidentity-do-in-opengl
	glLoadIdentity();

	// sets 500 x 500 window with lower left
	// corner starting at the origin
	gluOrtho2D(0.0, 500.0, 0.0, 500.0);
	glMatrixMode(GL_MODELVIEW);
	return 0;
}

void drawBuildings(void)
{
	drawBroun();
	drawL();
	drawDavis();
	drawHarbert();
	drawRamsay();
	drawRoss();
	drawShelby();
	drawShops();
	drawTextile();
	drawWiggins();
	drawWilmore();
	drawWoltosz();

	glLineWidth(2.5);
	glColor4f(0.3, 0.3, 0.3, 0.5);
	drawStreets();

	glLineWidth(1.0);
	glColor4f(1.0, 1.0, 1.0, 0.5);
	drawStairs();

	glFlush(); //clear buffers
}

