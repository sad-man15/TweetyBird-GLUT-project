//#include<cstdio>
//#include <cstdlib>
//#include <GL/gl.h>
//#include <GL/glut.h>
//#define PI          3.141516
//#include<math.h>
//#include <iostream>
//#include <string>
//#include <cmath>
//
/////text display
//const int font1=(int)GLUT_BITMAP_TIMES_ROMAN_24;
//const int font2=(int)GLUT_BITMAP_HELVETICA_18 ;
//const int font3=(int)GLUT_BITMAP_8_BY_13;
//
//GLfloat position6= 0.0f;//POINT1
//GLfloat position7= 0.0f;//POINT1
//GLfloat speed6 = 0.020f;
//GLfloat position = 0.0f;
//GLfloat position2 = 0.0f;//s
//GLfloat position5 = 0.0f;//s
//GLfloat position3 = 0.0f;//c1
//GLfloat speed3 = 0.0025f;
//GLfloat position4 = 0.0f; //c2
//GLfloat speed4 = 0.0025f;
//
//GLfloat speed = 0.1f;
//
//
/////game trackers
//int start_flag=0;
//int gameover_flag=0;
//int score = 0;
//
//
//
//
////char s[30];
//void renderBitmapString(float x, float y, void *font,const char *string)
//{
//    const char *c;
//    glRasterPos2f(x, y);
//    for (c=string; *c != '\0'; c++) {
//        glutBitmapCharacter(font, *c);
//    }
//}
//
/////ours
//void update6(int value) {//POINT1
//
//    if(position6 < -1.0)
//        position6 = 1.8f;
//
//    position6 -= speed6;
//
//	glutPostRedisplay();
//
//
//	glutTimerFunc(100, update6, 0);
//}
//
/////Brown bar
//void update7(int value) {//POINT1
//
//    if(position7 < -1.0)
//        position7 = 1.8f;
//
//    position7 -= speed6;
//
//	glutPostRedisplay();
//
//
//	glutTimerFunc(100, update7, 0);
//}
//
//
//void update(int value) {
//
//    if(position > 1.0)
//        position = -1.2f;
//
//    position += speed;
//
//	glutPostRedisplay();
//
//
//	glutTimerFunc(100, update, 0);
//}
//void init() {
//   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
//}
//
//void handleMouse(int button, int state, int x, int y) {
//	if (button == GLUT_LEFT_BUTTON)
//	{
//		if (state == GLUT_DOWN)
//		{
//			speed += 0.1f;
//			printf("clicked at (%d, %d)\n", x, y);
//		}
//	}
//
//	glutPostRedisplay();
//}
//
//void positionUp(int value) {
//
//    if(position5 >= 0.9)
//        position5 = 0.8f;
//    else{
//        position5 += speed;
//	glutPostRedisplay();
//    }
//
//
//
//
//	//glutTimerFunc(100, positionUp, 0);
//}
//
//void positionDown(int value) {
//
//    if(position5 <= -0.9)
//        position5 = -0.8f;
//    else{
//        position5 -= speed;
//	glutPostRedisplay();
//    }
//
//
//
//
//	//glutTimerFunc(100, positionUp, 0);
//}
//
//void handleKeypress(unsigned char key, int x, int y) {
//
//	switch (key) {
//
//case 'a':
//    speed = 0.0f;
//    break;
//case 'w':
//    positionUp(0);
//    break;
//case 's':
//    positionDown(0);
//    break;
//case ' ':
//    if(start_flag==0){
//        start_flag = 1;
//        gameover_flag = 0;
//    }
//
//glutPostRedisplay();
//
//
//	}
//}
//
/////DaySky
//void DaySky() {
//glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
//glClear(GL_COLOR_BUFFER_BIT);
//
//    glLineWidth(0.9); //Day sky
//
//
//
//
//glBegin(GL_QUADS);
//glColor3f(1.0f, 1.0f, 1.0f); // white
//glVertex2f(1.0f, 1.0f);
//glColor3f(0.0f, 0.6f, 0.8f); // Blue
//glVertex2f(1.0f, -0.4f);
//glColor3f(0.0f, 0.6f, 0.7f); // blue
//glVertex2f(-1.0f, -0.4f);
//glColor3f(1.0f, 1.0f, 1.0f); // white
//glVertex2f(-1.0f, 1.0f);
//
//
//
//
//glEnd();
//
//glPushMatrix();
//glTranslatef(0.45,0.3,0);
//                   ///score board
//        glColor3f(1, 1, 1);
//        glBegin(GL_QUADS);
//        glVertex2f(0.7,0.5);
//        glVertex2f(0.10,0.5);
//        glVertex2f(0.10,0.7);
//        glVertex2f(0.7,0.7);
//        glEnd();
//
//
//                ///score
//        char buffer [50];
//        sprintf (buffer, "SCORE: %d", score);
//        glColor3ub(64, 255, 0);
//        renderBitmapString(0.3,0.6,(void *)font2,buffer);
//glPopMatrix();
//}
/////Ground
//void ground(){
//
//    glLineWidth(0.5); //Day sky
//
//glBegin(GL_QUADS);
//glColor3f(0.0f, 1.0f, 0.0f); // bronze
//glVertex2f(1.0f, -0.4f);
//glColor3f(0.0f, 0.1f, 0.0f); // brown
//glVertex2f(1.0f, -1.0f);
//glColor3f(0.0f, 0.1f, 0.0f); // brown
//glVertex2f(-1.0f, -1.0f);
//glColor3f(0.0f, 1.0f, 0.0f); // bronze
//glVertex2f(-1.0f, -0.4f);
//
//glEnd();
//}
/////Obstacles
//void obstacles(){
//    glPushMatrix();
//    glTranslatef(position7,0.0f, 0.0f);
//glBegin(GL_QUADS);
//glColor3f(0.1f, 0.0f, 0.0f);//Brown
//glVertex2f(-0.08f, 0.1f);
//glVertex2f(-0.13f, 0.1f);
//glVertex2f(-0.13f, -0.18f);
//glVertex2f(-0.08, -0.18f);
//glEnd();
//
//glBegin(GL_QUADS);
//glVertex2f(0.3f,-0.5f);
//glVertex2f(0.35f,-0.5f);
//glVertex2f(0.35f,-0.8f);
//glVertex2f(0.3,-0.8f);
//glEnd();
//
//
//glBegin(GL_QUADS);
//glVertex2f(0.8f,0.3f);
//glVertex2f(0.85f,0.3f);
//glVertex2f(0.85f, -0.05f);
//glVertex2f(0.8, -0.05f);
//glEnd();
//
//glPopMatrix();
//glFlush();
//}
//
//
//
//void points(){
//    glPushMatrix();
//    glTranslatef(position6,0.0f, 0.0f);
//glBegin(GL_TRIANGLES);
//glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow
//glVertex2f(0.4f, 0.1f);
//glVertex2f(0.45f, 0.15f);
//glVertex2f(0.5, 0.1f);
//
//glVertex2f(-0.4f, -0.1f);
//glVertex2f(-0.45f, -0.05f);
//glVertex2f(-0.5, -0.1f);
//
//glVertex2f(0.0f, -0.7f);
//glVertex2f(0.05f, -0.65f);
//glVertex2f(0.1, -0.7f);
//
//glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
//glVertex2f(0.4f, 0.1f);
//glVertex2f(0.5f, 0.1f);
//glVertex2f(0.45, 0.05f);
//
//glVertex2f(-0.4f, -0.1f);
//glVertex2f(-0.45f, -0.15f);
//glVertex2f(-0.5, -0.1f);
//
//glVertex2f(0.0f, -0.7f);
//glVertex2f(0.05f, -0.75f);
//glVertex2f(0.1, -0.7f);
//
//
//glEnd();
//glPopMatrix();
//glFlush();
//}
/////Sun
//void Sun() {
//    glPushMatrix(); //Sun
//glTranslatef(0.0f,-position2, 0.0f);
//    int f;
//
//    GLfloat f1=0.15f;
//    GLfloat g1= 0.8f;
//     GLfloat h1 = 0.10f;
//    int ftringle2=40;
//
//    GLfloat fp2 =2.0f * PI  ;
//
//    glBegin (GL_TRIANGLE_FAN);
//    glColor3ub ( 255,215,00);
//    glVertex2f (f1,g1);
//    for(f= 0;f<=ftringle2; f++)
//    {
//        glVertex2f (
//                    f1+(h1*cos(f*fp2/ftringle2)),
//                    g1+(h1*sin(f*fp2/ftringle2))
//                    );
//
//
//    }
//    glEnd ();
//
//glPopMatrix();
//glFlush();
//  }
/////Cloud1
//void Cloud1() {
//glPushMatrix();//c1
//glTranslatef(position3,0.0f, 0.0f);
//int i;
//
//    GLfloat p1=0.58f; GLfloat q1= 0.85f; GLfloat r1 = 0.08f;
//    int tringle1=40;
//
//    GLfloat tp1 =2.0f * PI  ;
//
//    glBegin (GL_TRIANGLE_FAN);
//    glColor3ub ( 255,255,255);
//    glVertex2f (p1,q1);
//    for(i= 0;i<=tringle1; i++)
//    {
//        glVertex2f (
//                    p1+(r1*cos(i*tp1/tringle1)),
//                    q1+(r1*sin(i*tp1/tringle1))
//                    );
//
//
//    }
//    glEnd ();
//
//    int j;
//
//    GLfloat pp22=0.45f; GLfloat qq22= 0.85f; GLfloat rr22 = 0.12f;
//    int tringle22=40;
//
//    GLfloat ttp22 =2.0f *PI;
//
//    glBegin (GL_TRIANGLE_FAN);
//    glColor3ub ( 255,255,255);
//    glVertex2f (pp22,qq22);
//    for(j= 0;j<=tringle22; j++)
//    {
//        glVertex2f (
//                    pp22+(rr22*cos(j*ttp22/tringle22)),
//                    qq22+(rr22*sin(j*ttp22/tringle22))
//                    );
//
//
//    }
//    glEnd ();
//
//    int k;
//
//    GLfloat ppp3=0.33f; GLfloat qqq3= 0.85f; GLfloat rrr3 = 0.08f;
//    int tttringle3=40;
//
//    GLfloat tttp3 =2.0f * PI  ;
//
//    glBegin (GL_TRIANGLE_FAN);
//    glColor3ub ( 255,255,255);
//    glVertex2f (ppp3,qqq3);
//    for(k= 0;k<=tttringle3; k++)
//    {
//        glVertex2f (
//                    ppp3+(rrr3*cos(k*tttp3/tttringle3)),
//                    qqq3+(rrr3*sin(k*tttp3/tttringle3))
//                    );
//
//
//    }
//    glEnd ();
//    glPopMatrix();
//    glFlush();
//}
//
//
/////Cloud2
//void Cloud2() {
//
//    glPushMatrix();//c2
//    glTranslatef(-position4,0.0f, 0.0f);
//    int l;
//
//    GLfloat l4=-0.52f; GLfloat m4= 0.7f; GLfloat n4 = 0.08f;
//    int ltringle4=40;
//
//    GLfloat lp4 =2.0f * PI  ;
//
//    glBegin (GL_TRIANGLE_FAN);
//    glColor3ub ( 255,255,255);
//    glVertex2f (l4,m4);
//    for(l= 0;l<=ltringle4; l++)
//    {
//        glVertex2f (
//                    l4+(n4*cos(l*lp4/ltringle4)),
//                    m4+(n4*sin(l*lp4/ltringle4))
//                    );
//
//
//    }
//    glEnd ();
//
//    int m;
//
//    GLfloat ppm5=-0.65f; GLfloat qqm5= 0.7f; GLfloat rrm5 = 0.12f;
//    int tmtringle5=40;
//
//    GLfloat mp5 =2.0f *PI;
//
//    glBegin (GL_TRIANGLE_FAN);
//    glColor3ub ( 255,255,255);
//    glVertex2f (ppm5,qqm5);
//    for(m= 0;m<=tmtringle5; m++)
//    {
//        glVertex2f (
//                    ppm5+(rrm5*cos(m*mp5/tmtringle5)),
//                    qqm5+(rrm5*sin(m*mp5/tmtringle5))
//                    );
//
//
//    }
//    glEnd ();
//
//    int n;
//
//    GLfloat pppn6=-0.76f; GLfloat qqqn6= 0.7f; GLfloat rrrn6 = 0.08f;
//    int ttntringle6=40;
//
//    GLfloat np6 =2.0f * PI  ;
//
//    glBegin (GL_TRIANGLE_FAN);
//    glColor3ub ( 255,255,255);
//    glVertex2f (pppn6,qqqn6);
//    for(n= 0;n<=ttntringle6; n++)
//    {
//        glVertex2f (
//                    pppn6+(rrrn6*cos(n*np6/ttntringle6)),
//                    qqqn6+(rrrn6*sin(n*np6/ttntringle6))
//                    );
//
//
//    }
//    glEnd ();
//    glPopMatrix();
//    glFlush();
//}
//
//
/////Bird_Head
//  void bird() {
//    glPushMatrix(); //bird
//glTranslatef(0.0f,position5, 0.0f);
//    int f;
//
//    GLfloat f1=-0.9f;
//    GLfloat g1= 0.0f;
//     GLfloat h1 = 0.04f;
//    int ftringle2=40;
//
//    GLfloat fp2 =2.0f * PI  ;
//
//    glBegin (GL_TRIANGLE_FAN);
//    glColor3ub ( 255,215,00);
//    glVertex2f (f1,g1);
//    for(f= 0;f<=ftringle2; f++)
//    {
//        glVertex2f (
//                    f1+(h1*cos(f*fp2/ftringle2)),
//                    g1+(h1*sin(f*fp2/ftringle2))
//                    );
//
//
//    }
//    glEnd ();
// ///Bird_Lip
//    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
//    glBegin(GL_TRIANGLES);
//    glVertex2f (-0.88,0.02);
//    glVertex2f (-0.83,0.00);
//    glVertex2f (-0.88,0.0);
//    glEnd ();
/////Birds_tail
//    glBegin(GL_TRIANGLE_FAN);
//    glColor3f(0.0f, 0.1f, 0.0f);
//    glVertex2f(-0.98,-0.08);
//    glVertex2f(-0.94,-0.07);
//    glVertex2f(-0.96,-0.05);
//    glEnd();
/////Bird_body
//    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
//    glBegin(GL_TRIANGLE_FAN);
//    glVertex2f(-0.99,-0.03);
//    glVertex2f(-0.91,-0.10);
//    glVertex2f(-0.85,-0.07);
//    glEnd ();
//
//    glBegin(GL_TRIANGLE_FAN);
//    glVertex2f(-0.91,-0.10);
//    glVertex2f(-0.85,-0.07);
//    glVertex2f(-0.91,-0.01);
//    glEnd();
//
//
//	glTranslatef(-0.9,0.02,0.0);
/////Birds_eye
//float a,b,e;
//
//glBegin(GL_TRIANGLE_FAN);
//		glColor3ub(255,255,255);
//		for(e=0;e<=2*3.14;e+=0.01)
//		{
//			a=0.01*sin(e);
//			b=0.01*cos(e);
//			glVertex2f(a,b);
//
//		}
//	glEnd();
//	glutSwapBuffers();
//
//
//glPopMatrix();
//glFlush();
//}
//
//void update3(int value) {  //c1
//
//    if(position3 <-1.0)
//        position3 = 1.0f;
//
//    position3 -= speed3;
//
//  glutPostRedisplay();
//  glutTimerFunc(100, update3, 0);
//}
//
//
// void update4(int value) {  //c2
//
//    if(position4 <-1.0)
//        position4 = 1.0f;
//
//    position4 -= speed4;
//
//  glutPostRedisplay();
//  glutTimerFunc(100, update4, 0);
//}
//
//
//void firstDesign(){
//
//
//        ///menu
//        //middle
//        glColor3ub(1,1,1);
//        glBegin(GL_POLYGON);
//        glVertex2i(28,85);
//        glVertex2i(78,85);
//        glVertex2i(78,55);
//        glVertex2i(28,55);
//        glEnd();
//
//    if(gameover_flag==1){
//
//        glColor3ub(1,1,1);
//        glBegin(GL_POLYGON);
//        glVertex2i(27,45);
//        glVertex2i(78,45);
//        glVertex2i(78,25);
//        glVertex2i(27,25);
//        glEnd();
//
//            glColor3ub(255, 0, 0);
//            renderBitmapString(47,31,(void *)font1,"GAME OVER");
//            glColor3ub(255, 0, 0);
//            char buffer2 [50];
//            sprintf (buffer2, "Your Score is : %d", score);
//            renderBitmapString(47,36,(void *)font1,buffer2);
//
//        }
//
//        ///text info
//
//        glColor3f(1, 1, 1);
//        renderBitmapString(41,80,(void *)font1,"Tweety Bird");
//
//        glColor3ub(0, 179, 0);
//        renderBitmapString(38,75,(void *)font1,"Press SPACE to START");
//        renderBitmapString(38,72,(void *)font1,"Press ESC to Exit");
//
//        glColor3ub(255, 255, 255);
//        renderBitmapString(30,68,(void *)font2,"              Press w to move up the bird");
//        renderBitmapString(30,66,(void *)font2,"              Press s to move down the bird");
//
//}
//
//
//bool is_collision(float alien_x, float alien_y, float bullet_x, float bullet_y){
//        float distance = sqrt(pow(alien_x - bullet_x, 2) + pow(alien_y - bullet_y, 2));
//        if (distance < 20){
//            return true;
//        }
//        else
//            return false;
//}
//
//
//void display() {
//
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    if(start_flag==1){
//            if(is_collision(position5,0.0,position6,0.0)){
//                score+=100;
//            }
//        score++;
//        glClearColor(0, 392, 0,1);
//        glLoadIdentity();
//       DaySky();
//       Sun();
//       Cloud2();
//       Cloud1();
//       ground();
//       points();
//       obstacles();
//       bird() ;
//
//
//        //startGame();
//    }
//
//    else{
//        firstDesign();
//    }
//    glFlush();
//    glutSwapBuffers();
//
//
//}
//
////void processKeys(unsigned char key, int x, int y) {
////
////      switch (key)
////            {
////                case ' ':
////            if(start_flag==0){
////                start_flag = 1;
////                gameover_flag = 0;
////                FPS = 50;
////                roadDivTopMost = 0;
////                roadDivTop = 0;
////                roadDivMdl = 0;
////                roadDivBtm = 0;
////                lrIndex = 0 ;
////                car1 = 0;
////                lrIndex1=0;
////                car2 = +35;
////                lrIndex2=0;
////                car3 = +70;
////                lrIndex3=0;
////                score=0;
////                //level=0;
////            }
////             break;
////
////             case 27:
////                 exit(0);
////             break;
////             default:
////                break;
////        }
////}
//
//
//int main(int argc, char** argv) {
//   glutInit(&argc, argv);
//   glutInitWindowSize(900, 600);
//   glutInitWindowPosition(100, 100);
//   glutCreateWindow("Tweety Bird");
//   glutDisplayFunc(display);
//
//   glutTimerFunc(100, update3, 0);
//   glutTimerFunc(100, update4, 0);
//   glutTimerFunc(100, update6, 0);
//   glutTimerFunc(100, update7, 0);
//   init();
//   glutKeyboardFunc(handleKeypress);
//   glutMouseFunc(handleMouse);
//
//   glOrtho(0,100,0,100,-1,1);
//   glutTimerFunc(100, update, 0);
//   glutMainLoop();
//   return 0;
//}
#include<cstdio>
#include <list>
#include <cstdlib>
#include <GL/gl.h>
#include <GL/glut.h>
#define PI          3.141516
#include<math.h>
#include <iostream>
#include <iterator>
#include <list>
#include <string>
#include <cmath>
//
std::list <int> rX;
std::list <int> rY;
std::list <int> life;

///text display
const int font1=(int)GLUT_BITMAP_TIMES_ROMAN_24;
const int font2=(int)GLUT_BITMAP_HELVETICA_18 ;
const int font3=(int)GLUT_BITMAP_8_BY_13;

GLfloat position6= 0.0f;//POINT1
GLfloat position7= 0.0f;//POINT1
GLfloat speed6 = 0.020f;
GLfloat position = 0.0f;
GLfloat position2 = 0.0f;//s
GLfloat position5 = 0.0f;//s
GLfloat position3 = 0.0f;//c1
GLfloat speed3 = 0.0025f;
GLfloat position4 = 0.0f; //c2
GLfloat speed4 = 0.0025f;

GLfloat speed = 0.1f;


///game trackers
int start_flag=0;
int gameover_flag=0;
int score = 0;




//char s[30];
void renderBitmapString(float x, float y, void *font,const char *string)
{
    const char *c;
    glRasterPos2f(x, y);
    for (c=string; *c != '\0'; c++) {
        glutBitmapCharacter(font, *c);
    }
}

///ours
void update6(int value) {//POINT1

    if(position6 < -1.0)
        position6 = 1.8f;

    position6 -= speed6;

	glutPostRedisplay();


	glutTimerFunc(100, update6, 0);
}

///Brown bar
void update7(int value) {//POINT1

    if(position7 < -1.0)
        position7 = 1.8f;

    position7 -= speed6;

	glutPostRedisplay();


	glutTimerFunc(100, update7, 0);
}


void update(int value) {

    if(position > 1.0)
        position = -1.2f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			speed += 0.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}

	glutPostRedisplay();
}

void positionUp(int value) {

    if(position5 >= 0.9)
        position5 = 0.8f;
    else{
        position5 += speed;
	glutPostRedisplay();
    }




	//glutTimerFunc(100, positionUp, 0);
}

void positionDown(int value) {

    if(position5 <= -0.9)
        position5 = -0.8f;
    else{
        position5 -= speed;
	glutPostRedisplay();
    }




	//glutTimerFunc(100, positionUp, 0);
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'a':
    speed = 0.0f;
    break;
case 'w':
    positionUp(0);
    break;
case 's':
    positionDown(0);
    break;
case ' ':
    if(start_flag==0){
        start_flag = 1;
        gameover_flag = 0;
    }

glutPostRedisplay();


	}
}

///DaySky
void DaySky() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
glClear(GL_COLOR_BUFFER_BIT);

    glLineWidth(0.9); //Day sky




glBegin(GL_QUADS);
glColor3f(1.0f, 1.0f, 1.0f); // white
glVertex2f(1.0f, 1.0f);
glColor3f(0.0f, 0.6f, 0.8f); // Blue
glVertex2f(1.0f, -0.4f);
glColor3f(0.0f, 0.6f, 0.7f); // blue
glVertex2f(-1.0f, -0.4f);
glColor3f(1.0f, 1.0f, 1.0f); // white
glVertex2f(-1.0f, 1.0f);




glEnd();

glPushMatrix();
glTranslatef(0.45,0.3,0);
                   ///score board
        glColor3f(1, 1, 1);
        glBegin(GL_QUADS);
        glVertex2f(0.7,0.5);
        glVertex2f(0.10,0.5);
        glVertex2f(0.10,0.7);
        glVertex2f(0.7,0.7);
        glEnd();


                ///score
        char buffer [50];
        sprintf (buffer, "SCORE: %d", score);
        glColor3ub(64, 255, 0);
        renderBitmapString(0.3,0.6,(void *)font2,buffer);
glPopMatrix();
}
///Ground
void ground(){

    glLineWidth(0.5); //Day sky

glBegin(GL_QUADS);
glColor3f(0.0f, 1.0f, 0.0f); // bronze
glVertex2f(1.0f, -0.4f);
glColor3f(0.0f, 0.1f, 0.0f); // brown
glVertex2f(1.0f, -1.0f);
glColor3f(0.0f, 0.1f, 0.0f); // brown
glVertex2f(-1.0f, -1.0f);
glColor3f(0.0f, 1.0f, 0.0f); // bronze
glVertex2f(-1.0f, -0.4f);

glEnd();
}
///Obstacles
void obstacles(){
    glPushMatrix();
    glTranslatef(position7,0.0f, 0.0f);
glBegin(GL_QUADS);
glColor3f(0.1f, 0.0f, 0.0f);//Brown
glVertex2f(-0.08f, 0.1f);
glVertex2f(-0.13f, 0.1f);
glVertex2f(-0.13f, -0.18f);
glVertex2f(-0.08, -0.18f);
glEnd();

glBegin(GL_QUADS);
glVertex2f(0.3f,-0.5f);
glVertex2f(0.35f,-0.5f);
glVertex2f(0.35f,-0.8f);
glVertex2f(0.3,-0.8f);
glEnd();


glBegin(GL_QUADS);
glVertex2f(0.8f,0.3f);
glVertex2f(0.85f,0.3f);
glVertex2f(0.85f, -0.05f);
glVertex2f(0.8, -0.05f);
glEnd();

glPopMatrix();
glFlush();
}



void points(){
    glPushMatrix();
    glTranslatef(position6,0.0f, 0.0f);
glBegin(GL_TRIANGLES);
glColor4f(1.0f, 1.0f, 0.0f, 0.0f);//yellow
glVertex2f(0.4f, 0.1f);
glVertex2f(0.45f, 0.15f);
glVertex2f(0.5, 0.1f);

glVertex2f(-0.4f, -0.1f);
glVertex2f(-0.45f, -0.05f);
glVertex2f(-0.5, -0.1f);

glVertex2f(0.0f, -0.7f);
glVertex2f(0.05f, -0.65f);
glVertex2f(0.1, -0.7f);

glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
glVertex2f(0.4f, 0.1f);
glVertex2f(0.5f, 0.1f);
glVertex2f(0.45, 0.05f);

glVertex2f(-0.4f, -0.1f);
glVertex2f(-0.45f, -0.15f);
glVertex2f(-0.5, -0.1f);

glVertex2f(0.0f, -0.7f);
glVertex2f(0.05f, -0.75f);
glVertex2f(0.1, -0.7f);


glEnd();
glPopMatrix();
glFlush();
}
///Sun
void Sun() {
    glPushMatrix(); //Sun
glTranslatef(0.0f,-position2, 0.0f);
    int f;

    GLfloat f1=0.15f;
    GLfloat g1= 0.8f;
     GLfloat h1 = 0.10f;
    int ftringle2=40;

    GLfloat fp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,215,00);
    glVertex2f (f1,g1);
    for(f= 0;f<=ftringle2; f++)
    {
        glVertex2f (
                    f1+(h1*cos(f*fp2/ftringle2)),
                    g1+(h1*sin(f*fp2/ftringle2))
                    );


    }
    glEnd ();

glPopMatrix();
glFlush();
  }
///Cloud1
void Cloud1() {
glPushMatrix();//c1
glTranslatef(position3,0.0f, 0.0f);
int i;

    GLfloat p1=0.58f; GLfloat q1= 0.85f; GLfloat r1 = 0.08f;
    int tringle1=40;

    GLfloat tp1 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle1; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp1/tringle1)),
                    q1+(r1*sin(i*tp1/tringle1))
                    );


    }
    glEnd ();

    int j;

    GLfloat pp22=0.45f; GLfloat qq22= 0.85f; GLfloat rr22 = 0.12f;
    int tringle22=40;

    GLfloat ttp22 =2.0f *PI;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (pp22,qq22);
    for(j= 0;j<=tringle22; j++)
    {
        glVertex2f (
                    pp22+(rr22*cos(j*ttp22/tringle22)),
                    qq22+(rr22*sin(j*ttp22/tringle22))
                    );


    }
    glEnd ();

    int k;

    GLfloat ppp3=0.33f; GLfloat qqq3= 0.85f; GLfloat rrr3 = 0.08f;
    int tttringle3=40;

    GLfloat tttp3 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (ppp3,qqq3);
    for(k= 0;k<=tttringle3; k++)
    {
        glVertex2f (
                    ppp3+(rrr3*cos(k*tttp3/tttringle3)),
                    qqq3+(rrr3*sin(k*tttp3/tttringle3))
                    );


    }
    glEnd ();
    glPopMatrix();
    glFlush();
}


///Cloud2
void Cloud2() {

    glPushMatrix();//c2
    glTranslatef(-position4,0.0f, 0.0f);
    int l;

    GLfloat l4=-0.52f; GLfloat m4= 0.7f; GLfloat n4 = 0.08f;
    int ltringle4=40;

    GLfloat lp4 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (l4,m4);
    for(l= 0;l<=ltringle4; l++)
    {
        glVertex2f (
                    l4+(n4*cos(l*lp4/ltringle4)),
                    m4+(n4*sin(l*lp4/ltringle4))
                    );


    }
    glEnd ();

    int m;

    GLfloat ppm5=-0.65f; GLfloat qqm5= 0.7f; GLfloat rrm5 = 0.12f;
    int tmtringle5=40;

    GLfloat mp5 =2.0f *PI;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (ppm5,qqm5);
    for(m= 0;m<=tmtringle5; m++)
    {
        glVertex2f (
                    ppm5+(rrm5*cos(m*mp5/tmtringle5)),
                    qqm5+(rrm5*sin(m*mp5/tmtringle5))
                    );


    }
    glEnd ();

    int n;

    GLfloat pppn6=-0.76f; GLfloat qqqn6= 0.7f; GLfloat rrrn6 = 0.08f;
    int ttntringle6=40;

    GLfloat np6 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (pppn6,qqqn6);
    for(n= 0;n<=ttntringle6; n++)
    {
        glVertex2f (
                    pppn6+(rrrn6*cos(n*np6/ttntringle6)),
                    qqqn6+(rrrn6*sin(n*np6/ttntringle6))
                    );


    }
    glEnd ();
    glPopMatrix();
    glFlush();
}


///Bird_Head
  void bird() {
    glPushMatrix(); //bird
glTranslatef(0.0f,position5, 0.0f);
    int f;

    GLfloat f1=-0.9f;
    GLfloat g1= 0.0f;
     GLfloat h1 = 0.04f;
    int ftringle2=40;

    GLfloat fp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,215,00);
    glVertex2f (f1,g1);
    for(f= 0;f<=ftringle2; f++)
    {
        glVertex2f (
                    f1+(h1*cos(f*fp2/ftringle2)),
                    g1+(h1*sin(f*fp2/ftringle2))
                    );


    }
    glEnd ();
 ///Bird_Lip
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);//red
    glBegin(GL_TRIANGLES);
    glVertex2f (-0.88,0.02);
    glVertex2f (-0.83,0.00);
    glVertex2f (-0.88,0.0);
    glEnd ();
///Birds_tail
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(0.0f, 0.1f, 0.0f);
    glVertex2f(-0.98,-0.08);
    glVertex2f(-0.94,-0.07);
    glVertex2f(-0.96,-0.05);
    glEnd();
///Bird_body
    glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-0.99,-0.03);
    glVertex2f(-0.91,-0.10);
    glVertex2f(-0.85,-0.07);
    glEnd ();

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(-0.91,-0.10);
    glVertex2f(-0.85,-0.07);
    glVertex2f(-0.91,-0.01);
    glEnd();


	glTranslatef(-0.9,0.02,0.0);
///Birds_eye
float e;
float a=-0.9,b=0.02;
glBegin(GL_TRIANGLE_FAN);
		glColor3ub(255,255,255);
		for(e=0;e<=2*3.14;e+=0.01)
		{
			a=0.01*sin(e);
			b=0.01*cos(e);
			glVertex2f(a,b);

		}
	glEnd();
	glutSwapBuffers();


glPopMatrix();
glFlush();
}

void update3(int value) {  //c1

    if(position3 <-1.0)
        position3 = 1.0f;

    position3 -= speed3;

  glutPostRedisplay();
  glutTimerFunc(100, update3, 0);
}


 void update4(int value) {  //c2

    if(position4 <-1.0)
        position4 = 1.0f;

    position4 -= speed4;

  glutPostRedisplay();
  glutTimerFunc(100, update4, 0);
}


void firstDesign(){


        ///menu
        //middle
        glColor3ub(1,1,1);
        glBegin(GL_POLYGON);
        glVertex2i(28,85);
        glVertex2i(78,85);
        glVertex2i(78,55);
        glVertex2i(28,55);
        glEnd();

    if(gameover_flag==1){

        glColor3ub(1,1,1);
        glBegin(GL_POLYGON);
        glVertex2i(27,45);
        glVertex2i(78,45);
        glVertex2i(78,25);
        glVertex2i(27,25);
        glEnd();

            glColor3ub(255, 0, 0);
            renderBitmapString(47,31,(void *)font1,"GAME OVER");
            glColor3ub(255, 0, 0);
            char buffer2 [50];
            sprintf (buffer2, "Your Score is : %d", score);
            renderBitmapString(47,36,(void *)font1,buffer2);

        }

        ///text info

        glColor3f(1, 1, 1);
        renderBitmapString(41,80,(void *)font1,"Flappy Bird");

        glColor3ub(0, 179, 0);
        renderBitmapString(38,75,(void *)font1,"Press SPACE to START");
        renderBitmapString(38,72,(void *)font1,"Press ESC to Exit");

        glColor3ub(255, 255, 255);
        renderBitmapString(30,68,(void *)font2,"              Press w to move up the bird");
        renderBitmapString(30,66,(void *)font2,"              Press s to move down the bird");

}


//bool is_collision(float alien_x, float alien_y, float bullet_x, float bullet_y){
//        float distance = sqrt(pow(alien_x - bullet_x, 2) + pow(alien_y - bullet_y, 2));
////        if (distance < 0.001){
////            printf("You entered: %d", distance);
////            return true;
////
////        }
//        if(abs(alien_y-bullet_y)<0.01 || ((bullet_x-alien_x)<0.01)){
//           printf("You entered: %d", (bullet_x-alien_x));
//            return true;
//           }
//        else
//            return false;
//}


bool collision()
{
    /// Check collision of obstacles/bar/cube
    rX.sort();
    list<double>::iterator ity = rY.begin();
    for(list<double>::iterator it = rX.begin(); it != rX.end(); ++it){
        ++ity;
        if((position6+(*it)-.55)<=position5){
            if(position6+(*ity)==position5){
                return true;
            }
            else{
                rX.erase(it);
                rY.erase(ity);
                return false;
            }
        }
        else{
            return false;
        }
    }
}

void display() {

    glClear(GL_COLOR_BUFFER_BIT);

    if(start_flag==1){
            if(collision()){

                position6=-1.5;
                score+=100;
            }
        score++;
        glClearColor(0, 392, 0,1);
        glLoadIdentity();
       DaySky();
       Sun();
       Cloud2();
       Cloud1();
       ground();
       points();
       obstacles();
       bird() ;


        //startGame();
    }

    else{
        firstDesign();
    }
    glFlush();
    glutSwapBuffers();


}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(900, 600);
   glutInitWindowPosition(100, 100);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);

   glutTimerFunc(100, update3, 0);
   glutTimerFunc(100, update4, 0);
   glutTimerFunc(100, update6, 0);
   glutTimerFunc(100, update7, 0);
   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);

   glOrtho(0,100,0,100,-1,1);
   glutTimerFunc(100, update, 0);
   glutMainLoop();
   return 0;
}
