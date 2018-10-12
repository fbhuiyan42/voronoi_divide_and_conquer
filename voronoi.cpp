#include <stdio.h>
#include <iostream>
#include <vector>
//#include <GL/glut.h>


using namespace std;

class Point2D
{
    public:
    float x;
    float y;
    Point2D(float x1,float y1)
    {
        x = x1;
        y = y1;
    }
    Point2D()
    {
        x=0;
        y=0;
    }
};

class Edge2D
{
    public:
    Point2D firstPoint; //left or upper one
    Point2D lastPoint;
    Edge2D(Point2D p1,Point2D p2)
    {
        firstPoint = p1;
        firstPoint = p2;
    }
    Edge2D()
    {

    }
};

vector<Point2D> points;

void input()
{
    int numOfPoints;
    freopen("input.txt","r",stdin);
    cin >> numOfPoints;
    for(int i=0 ; i<numOfPoints ; i++)
    {
        float x1,y1;
        cin >> x1 ;
        cin >> y1 ;

        Point2D newpoint = Point2D(x1,y1);
        points.push_back(newpoint);
    }
}
/*
void display(void){


	glClear(GL_COLOR_BUFFER_BIT);
    glPointSize(4.0);
    glBegin(GL_LINES);
        glVertex2f(10.0,5.0);
        glVertex2f(5.0,15.0);
    glEnd();
    glBegin(GL_LINES);
        glVertex2f(10.0,5.0);
        glVertex2f(5.0,15.0);
    glEnd();
	glFlush();

}

void init(){

	/* clears the window according to RGBA */
/*	glClearColor(0.0, 0.0, 0.0, 0.0);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	//gluOrtho2D(GLdouble  left,  GLdouble  right,  GLdouble  bottom,  GLdouble  top);
	gluOrtho2D(-360/2.0, 1000/2.0, -350/2.0, 780/2.0);

}
*/
int main (int argc, char** argv)
{

    //cout << "Please enter an integer value: ";
    input();
    divideCon
    glutInit(&argc, argv);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Minimalistic Window");
    glutDisplayFunc(display);
    init();
    glutMainLoop();
    return 0;
}
