from OpenGL.GL import *
from OpenGL.GLU import *
from OpenGL.GLUT import *
import numpy as np
from math import *
# Initial
def myInit():
    glEnable(GL_DEPTH_TEST)
    glMatrixMode(GL_PROJECTION)
    glLoadIdentity()
    gluPerspective(70,1,0.1,70)
    gluLookAt(8,9,10,
              0,0,0,
              0,1,0)
    glClearColor(1, 1, 1, 1)
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
def Car_1() :

    # Lower
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 1)
    glScalef(1, 0.25, 0.5)
    glutSolidCube(5)

    #Upper

        #Upper Body
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 1)
    glTranslate(0, 0.25 * 5, 0)
    glScalef(0.5, 0.25, 0.5)
    glutSolidCube(5)

        #front Glass
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 0)
    glTranslate(1.3, 0.25 * 5, 0)
    glScalef(0, 0.25, 0.5)
    glutSolidCube(5)

        #left Glass
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 0)
    glRotate(90,0,1,0)
    glTranslate(1.3, 0.25 * 5, 0)
    glScalef(0, 0.25, 0.5)
    glutSolidCube(5)

        #Right Glass
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 0)
    glRotate(-90, 0, 1, 0)
    glTranslate(1.3, 0.25 * 5, 0)
    glScalef(0, 0.25, 0.5)
    glutSolidCube(5)

        #back glass
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 0)
    glRotate(180, 0, 1, 0)
    glTranslate(1.3, 0.25 * 5, 0)
    glScalef(0, 0.25, 0.5)
    glutSolidCube(5)

    #Wheels

        #Right front
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 0)
    glTranslate(2, -2.5 * 0.2, 2.5 * 0.5)
    glScale(0.3,0.3,0.3)
    glutSolidCube(2)
            #inside
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0.6,0.6,0.6)
    glTranslate(2, -2.5 * 0.2, 1.6)
    glScale(0.2, 0.2, 0)
    glutSolidCube(2)

        #Left front
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 0)
    glTranslate(2, -2.5 * 0.2, -2.5 * 0.5)
    glScale(0.3, 0.3, 0.3)
    glutSolidCube(2)

            # inside
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0.6, 0.6, 0.6)
    glTranslate(2, -2.5 * 0.2, -1.6)
    glScale(0.2, 0.2, 0)
    glutSolidCube(2)

        #Right back
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 0)
    glTranslate(-2, -2.5 * 0.2, 2.5 * 0.5)
    glScale(0.3, 0.3, 0.3)
    glutSolidCube(2)

            # inside
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0.6, 0.6, 0.6)
    glTranslate(-2, -2.5 * 0.2, 1.6)
    glScale(0.2, 0.2, 0)
    glutSolidCube(2)

        #Left back
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 0)
    glTranslate(-2, -2.5 * 0.2, -2.5 * 0.5)
    glScale(0.3, 0.3, 0.3)
    glutSolidCube(2)

            # inside
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0.6, 0.6, 0.6)
    glTranslate(-2, -2.5 * 0.2, -1.6)
    glScale(0.2, 0.2, 0)
    glutSolidCube(2)

    #Lamps
        #Right
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 0)
    glTranslate(2.6, 1.5 * 0.25, 1)
    glScale(0, 0.2, 0.2)
    glutSolidCube(3)

        #Left
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 0)
    glTranslate(2.6 , 1.5 * 0.25, -0.3)
    glScale(0, 0.2, 0.2)
    glutSolidCube(3)
def Car_2() :

    # Lower
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 1)
    glScalef(1, 0.25, 0.5)
    glutSolidCube(5)

    #Upper

        #Upper Body
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 1)
    glTranslate(1, 0.25 * 5, 0)
    glScalef(0.3, 0.25, 0.5)
    glutSolidCube(5)

        #front Glass
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 0)
    glTranslate(1.8, 0.25 * 5, 0)
    glScalef(0, 0.25, 0.5)
    glutSolidCube(5)

        #left Glass
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 0)
    glRotate(90,0,1,0)
    glTranslate(1.3, 0.25 * 5,1)
    glScalef(0, 0.25, 0.3)
    glutSolidCube(5)

        #Right Glass
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 0)
    glRotate(-90, 0, 1, 0)
    glTranslate(1.3, 0.25 * 5, -1)
    glScalef(0, 0.25, 0.3)
    glutSolidCube(5)

        #back glass
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 0)
    glRotate(180, 0, 1, 0)
    glTranslate(-0.2, 0.25 * 5, 0)
    glScalef(0, 0.25, 0.5)
    glutSolidCube(5)

    #Wheels

        #Right front
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 0)
    glTranslate(2, -2.5 * 0.2, 2.5 * 0.5)
    glScale(0.3,0.3,0.3)
    glutSolidCube(2)
            #inside
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0.6,0.6,0.6)
    glTranslate(2, -2.5 * 0.2, 1.6)
    glScale(0.2, 0.2, 0)
    glutSolidCube(2)

        #Left front
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 0)
    glTranslate(2, -2.5 * 0.2, -2.5 * 0.5)
    glScale(0.3, 0.3, 0.3)
    glutSolidCube(2)

            # inside
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0.6, 0.6, 0.6)
    glTranslate(2, -2.5 * 0.2, -1.6)
    glScale(0.2, 0.2, 0)
    glutSolidCube(2)

        #Right back
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 0)
    glTranslate(-2, -2.5 * 0.2, 2.5 * 0.5)
    glScale(0.3, 0.3, 0.3)
    glutSolidCube(2)

            # inside
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0.6, 0.6, 0.6)
    glTranslate(-2, -2.5 * 0.2, 1.6)
    glScale(0.2, 0.2, 0)
    glutSolidCube(2)

        #Left back
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 0)
    glTranslate(-2, -2.5 * 0.2, -2.5 * 0.5)
    glScale(0.3, 0.3, 0.3)
    glutSolidCube(2)

            # inside
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0.6, 0.6, 0.6)
    glTranslate(-2, -2.5 * 0.2, -1.6)
    glScale(0.2, 0.2, 0)
    glutSolidCube(2)

    #Lamps
        #Right
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 0)
    glTranslate(2.6, 1.5 * 0.25, 1)
    glScale(0, 0.2, 0.2)
    glutSolidCube(3)

        #Left
    glLoadIdentity()
    glRotate(0,0,0,0)
    glColor3f(0, 0, 0)
    glTranslate(2.6 , 1.5 * 0.25, -0.3)
    glScale(0, 0.2, 0.2)
    glutSolidCube(3)
def Bus() :

    # Body
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 1)
    glScalef(2.5, 1, 1)
    glutSolidCube(5)

    #Glass
        #front
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 0)
    glTranslate(6.3,1.5,0)
    glScalef(0, 0.4, 1)
    glutSolidCube(5)

        # back
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 0)
    glTranslate(-6.3, 1.5, 0)
    glScalef(0, 0.4, 1)
    glutSolidCube(5)

        #right
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 0)
    glRotate(-90, 0, 1, 0)
    glTranslate(2.6, 1.7, 4)
    glScalef(0, 0.3, 0.3)
    glutSolidCube(5)
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 0)
    glRotate(-90, 0, 1, 0)
    glTranslate(2.6, 1.7, 1.5)
    glScalef(0, 0.3, 0.3)
    glutSolidCube(5)
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 0)
    glRotate(-90, 0, 1, 0)
    glTranslate(2.6, 1.7, -1)
    glScalef(0, 0.3, 0.3)
    glutSolidCube(5)
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 0)
    glRotate(-90, 0, 1, 0)
    glTranslate(2.6, 1.7, -3.5)
    glScalef(0, 0.3, 0.3)
    glutSolidCube(5)
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 0)
    glRotate(-90, 0, 1, 0)
    glTranslate(2.6, 1.7, -5.4)
    glScalef(0, 0.3, 0.3)
    glutSolidCube(5)

        # left
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 0)
    glRotate(-90, 0, 1, 0)
    glTranslate(-2.6, 1.7, 4)
    glScalef(0, 0.3, 0.3)
    glutSolidCube(5)
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 0)
    glRotate(-90, 0, 1, 0)
    glTranslate(-2.6, 1.7, 1.5)
    glScalef(0, 0.3, 0.3)
    glutSolidCube(5)
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 0)
    glRotate(-90, 0, 1, 0)
    glTranslate(-2.6, 1.7, -1)
    glScalef(0, 0.3, 0.3)
    glutSolidCube(5)
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 0)
    glRotate(-90, 0, 1, 0)
    glTranslate(-2.6, 1.7, -3.5)
    glScalef(0, 0.3, 0.3)
    glutSolidCube(5)
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 0)
    glRotate(-90, 0, 1, 0)
    glTranslate(-2.6, 1.7, -5.4)
    glScalef(0, 0.3, 0.3)
    glutSolidCube(5)

    #Wheels

        #Right front
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 0)
    glTranslate(4, -2, 2.5)
    glScale(0.6,0.6,0.6)
    glutSolidCube(2)
            #inside
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0.6,0.6,0.6)
    glTranslate(4, -2, 3.2)
    glScale(0.4, 0.4, 0)
    glutSolidCube(2)

        #Left front
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 0)
    glTranslate(4, -2, -2.5)
    glScale(0.6, 0.6, 0.6)
    glutSolidCube(2)

            # inside
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0.6, 0.6, 0.6)
    glTranslate(4, -2, -3.2)
    glScale(0.4, 0.4, 0)
    glutSolidCube(2)

        #Right back
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 0)
    glTranslate(-4, -2, 2.5)
    glScale(0.6, 0.6, 0.6)
    glutSolidCube(2)
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 0)
    glTranslate(-2, -2, 2.5)
    glScale(0.6, 0.6, 0.6)
    glutSolidCube(2)

            # inside
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0.6, 0.6, 0.6)
    glTranslate(-4, -2, 3.2)
    glScale(0.4, 0.4, 0)
    glutSolidCube(2)
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0.6, 0.6, 0.6)
    glTranslate(-2, -2, 3.2)
    glScale(0.4, 0.4, 0)
    glutSolidCube(2)

        #Left back
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 0)
    glTranslate(-4, -2, -2.5)
    glScale(0.6, 0.6, 0.6)
    glutSolidCube(2)
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 0)
    glTranslate(-2, -2, -2.5)
    glScale(0.6, 0.6, 0.6)
    glutSolidCube(2)

            # inside
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0.6, 0.6, 0.6)
    glTranslate(-4, -2, -3.2)
    glScale(0.4, 0.4, 0)
    glutSolidCube(2)
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0.6, 0.6, 0.6)
    glTranslate(-2, -2, -3.2)
    glScale(0.4, 0.4, 0)
    glutSolidCube(2)

    #Lamps
        #Right
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 0)
    glTranslate(2.6, 1.5 * 0.25, 1)
    glScale(0, 0.2, 0.2)
    glutSolidCube(3)

        #Left
    glLoadIdentity()
    glRotate(0,0,1,0)
    glColor3f(0, 0, 0)
    glTranslate(2.6 , 1.5 * 0.25, -0.3)
    glScale(0, 0.2, 0.2)
    glutSolidCube(3)

def display():
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT)
    glMatrixMode(GL_MODELVIEW)
    #Car_1()
    #Car_2()
    Bus()
    glutSwapBuffers()


glutInit()
glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH)
glutInitWindowSize(600,600)
glutCreateWindow(b"Cars Models")
glutDisplayFunc(display)
glutIdleFunc(display)
myInit()
glutMainLoop()