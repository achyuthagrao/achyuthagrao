#include<stdio.h>
#include<GL/glut.h>
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,1.0);
	glPointSize(3.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.0,250.0);
	glVertex2f(0.0,500.0);
	glVertex2f(500.0,500.0);
	glVertex2f(500.0,250.0);
	glEnd();
	glColor3f(0.0,1.0,0.0);
	glPointSize(3.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.0,0.0);
	glVertex2f(0.0,250.0);
	glVertex2f(500.0,250.0);
	glVertex2f(500.0,0.0);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glPointSize(3.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.0,250.0);
	glVertex2f(166.0,250.0);
	glVertex2f(82.0,500.0);
	glEnd();
	glBegin(GL_POLYGON);
	glVertex2f(166.0,250.0);
	glVertex2f(332.0,250.0);
	glVertex2f(260.0,500.0);
	glEnd();
	glBegin(GL_POLYGON);
	glColor3f(3.0,4.0,0.0);
	glPointSize(3.0);
	glVertex2f(332.0,250.0);
	glVertex2f(332.0,250.0);
	glVertex2f(260.0,500.0);
	glEnd();
	glPushMatrix();
	glTranslatef(220,250,0);
	glutSolidSphere(15.0,100.0,100.100);
	glPopMatrix();
	glColor3f(0.0,0.0,1.0);
	glPushMatrix();
	glTranslatef(240,250,0);
	glutSolidSphere(15.0,100.0,100.100);
	glPopMatrix();
	glColor3f(0.0,0.0,1.0);
	glPushMatrix();
	glTranslatef(260,250,0);
	glutSolidSphere(15.0,100.0,100.100);
	glPopMatrix();
	glColor3f(0.0,0.0,1.0);
	glPushMatrix();
	glTranslatef(280,250,0);
	glutSolidSphere(15.0,100.0,100.100);
	glPopMatrix();
	glFlush();
}	
int main(int argc,char **argv)
{
	printf("hello");
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(100,100);
	glutCreateWindow("first program");
	glClearColor(1.0,1.0,1.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,500.0,0.0,500.0);
	glutDisplayFunc(display);
	glutMainLoop();
	
}
