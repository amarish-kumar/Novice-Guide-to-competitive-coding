#include<iostream>
#include"GL/freeglut.h"
#include"GL/gl.h"

using namespace std;
namespace {
	int o_size = 80;
};
static void RenderFunction(void)
{
		glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0f, 0.0f, 0.0f);
 glOrtho(-o_size, o_size, -o_size, o_size, -o_size, o_size);
glPointSize(40);
    glBegin(GL_LINE_LOOP);
    glVertex2f(-100,700);
    glVertex2f (-100, 500) ;
    glVertex2f(100,500) ;
    glVertex2f(100,700);
    glEnd();
    glFlush();
}

 main (int argc, char** argv)
{
        glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("");
	
	glutDisplayFunc(RenderFunction);
	glutMainLoop();
	return 0;
}
