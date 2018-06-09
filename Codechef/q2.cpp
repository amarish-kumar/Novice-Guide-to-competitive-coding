#include <iostream>
#include "GL/freeglut.h"
#include "GL/gl.h"
#include <GL/glu.h>
using namespace std;

namespace {
	int o_size = 100;
};
typedef struct POINTS {
	double x;
	double y;
	double z;
} point;

point mat[35][2];
void init1()
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glShadeModel(GL_FLAT);
	glScaled(3, 3, 3);
}
void input()
{
	mat[1][0].x = -50;
	mat[1][0].y = 0;
	mat[1][0].z = 0;

	mat[1][1].x = -50;
	mat[1][1].y = 500;
	mat[1][1].z = 0;

	mat[2][0].x = 150;
	mat[2][0].y = 0;
	mat[2][0].z = 0;

	mat[2][1].x = -500;
	mat[2][1].y = 400;
	mat[2][1].z = 0;
	
	mat[3][0].x = -500;
	mat[3][0].y = 400;
	mat[3][0].z = 0;

	mat[3][1].x = -100;
	mat[3][1].y = 700;
	mat[3][1].z = 0;
	
	mat[4][0].x = -50;
	mat[4][0].y = 0;
	mat[4][0].z = 0;

	mat[4][1].x = -400;
	mat[4][1].y = 400;
	mat[4][1].z = 0;
	
	mat[5][0].x = -400;
	mat[5][0].y = 400;
	mat[5][0].z = 0;

	mat[5][1].x = -100;
	mat[5][1].y = 600;
	mat[5][1].z = 0;

	for (int i = 1; i < 6; i++) {
		cout << mat[i][0].x << " " << mat[i][0].y << " " << mat[i][0].z << endl;
		cout << mat[i][1].x << " " << mat[i][1].y << " " << mat[i][1].z << endl;
		glBegin(GL_LINE);
			glVertex3f(mat[i][0].x, mat[i][0].y, mat[i][0].z);
			glVertex3f(mat[i][1].x, mat[i][1].y, mat[i][1].z);
		glEnd();
	}
}
/*void ResizeFunction(int Width, int Height)
{
	glOrtho(-o_size, o_size, -o_size, o_size, -o_size, o_size);
	glViewport(0, 0, Width, Height);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(1, 1, 1, 0, 0, 0, 1, 0, 1);
	glFrustum(-100, 100 ,-100, 100, -100 ,100);
	init1();
}*/
void draw_axis()
{
	glPointSize(3);
	glBegin(GL_POINTS);
	for (float i = -o_size; i < o_size; i = i + 0.5) {
		glVertex2f(i, 0);
		glVertex2f(0, i);
	}
	glEnd();
}	
void static RenderFunction(void)
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0f, 0.0f, 0.0f);
	glOrtho(-o_size, o_size, -o_size, o_size, -o_size, o_size);
	glViewport(0, 0,100 , 100);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(1, 1, 1, 0, 0, 0, 1, 0, 1);
	glFrustum(-100, 100 ,-100, 100, -100 ,100);
	draw_axis();
	glPointSize(10);
	// code actual here
		input();
	// code ends here
	cout << "end" << endl;
	glutSwapBuffers();
	glFlush();
}

int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("");
	//glutReshapeFunc(ResizeFunction);
	glutDisplayFunc(RenderFunction);
	glutMainLoop();

	return 0;
}

