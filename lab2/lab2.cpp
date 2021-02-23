/**
    @author arn_savannpheakdey

    This is the program that display axis-x and axis-y
    using openGL library.

    This program is written in linux ubuntu so the code
    of include are different.
**/

/* standard library */
#include <iostream>

/** including library for linux system **/
#include <GL/glut.h>


void displayAxis(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);

        // backgorund color
        glColor3f(0.70, 1, 0.34);

        // x axis line
        glVertex2i(100, 10);
        glVertex2i(100, 190);

        // y axis line
        glVertex2i(10, 100);
        glVertex2i(190, 100);

        // y axis  arrow
        glVertex2i(100, 190);
        glVertex2i(105, 185);

        glVertex2i(95, 185);
        glVertex2i(100, 190);

        // x axis arrow
        glVertex2i(185, 95);
        glVertex2i(190, 100);

        glVertex2i(190, 100);
        glVertex2i(185, 105);

        int y =20;
        for (int i = 0; i< 9;i++){
            glVertex2i(95, y);
            glVertex2i(105, y);
            y = y + 20;
       }

       int x = 20;
       for( int i = 0 ; i < 9; i++){
            glVertex2i(x, 95);
            glVertex2i(x, 105);
            x = x + 20;
       }

    glEnd();

    glRasterPos2i(185, 85);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'X');

    glRasterPos2i(110, 185);
    glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,'Y');
    glFlush();
}


void init(){
    glutInitWindowSize(700, 700);
    glutInitWindowPosition(400, 100);
    glutCreateWindow("AXIS");

    glClearColor(0.23, 0.55, 0.632, 0.41);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 200, 0, 200.0);

}

int main(int argc ,char**argv){

    glutInit(&argc,argv);
    init();
    glutDisplayFunc(displayAxis);

    std::cout<<"Working...!!!"<<std::endl;
    glutMainLoop();
    return 0;
}

