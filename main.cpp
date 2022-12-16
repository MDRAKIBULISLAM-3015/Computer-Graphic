#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include<iostream>

using namespace std;
void rectengle(float a,float b, float c, float d)
{




}
static void resize(int width, int height)
{
    const float ar = (float) width / (float) height;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-ar, ar, -1.0, 1.0, 2.0, 100.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity() ;
}


void circle(float radius,float x=0,float y=0)
{

    glPushMatrix();
    glTranslated(x,y,0);
    glScaled(1,1,0);
    glutSolidSphere(radius,100,100);
    glPopMatrix();

}
void ground()
{
    //ground
    glPushMatrix();
    glColor3ub(190,222,169);
    glBegin(GL_POLYGON);
    glVertex2d(-250,165);
    glVertex2d(250,165);
    glVertex2d(250,-165);
    glVertex2d(-250,-165);
    glEnd();
    glPopMatrix();

}
void sky()
{
    //sky
    glPushMatrix();
    glColor3ub(9,176,218);
    glBegin(GL_POLYGON);
    glVertex2d(-250,165);
    glVertex2d(250,165);
    glVertex2f(250,90.04171);
    glVertex2f(-250,80.9076);
    glEnd();
    glPopMatrix();

}
void river()
{
    //river
    glPushMatrix();
    glColor3ub(40,196,244);
    glBegin(GL_POLYGON);
    glVertex2f(-250,-107.256);
    glVertex2f(-90,-90);
    glVertex2f(-89.20139,-165);
    glVertex2f(-250,-165);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-90,-95.63584);
    glVertex2f(1.00305,-67.53294);
    glVertex2f(3.48574,-165);;
    glVertex2f(-89.94126,-165);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1.00305,-73.49413);
    glVertex2f(250,-25.46563);
    glVertex2f(250,-165);
    glVertex2f(2.36956,-165);
    glEnd();
    glPopMatrix();
}
void tree1()
{
    //tree
    glColor3ub(15,149,71);
    glPushMatrix();
    circle(6.128,-176.40072, 20.40875);
    circle(7.4899,-174.90286, 32.84733);
    circle(9.09,-160.97746,38.84979);
    circle(6.53,-146,38);
    circle(8.99,-142.89776,24.21895);
    glBegin(GL_POLYGON);
    glVertex2f(-174.90286,32.84733);
    glVertex2f(-146.11722,36.34942);
    glVertex2f(-144.67996,18.81485);
    glVertex2f(-173.54012,17.3201);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-174.90286,32.84733);
    glVertex2f(-146.11722,36.34942);
    glVertex2f(-144.67996,18.81485);
    glVertex2f(-173.54012,17.3201);
    glEnd();

    //center leaf
    glBegin(GL_POLYGON);
    glVertex2f(-174.90286, 32.84733);
    glVertex2f(-146, 38);
    glVertex2f(-144.67996, 18.81485);
    glVertex2f(-173.54012, 17.3201);
    glEnd();

    //main branch
    glBegin(GL_POLYGON);
    glColor3ub(144,44,29);
    glVertex2f(-164.13,17.81);
    glVertex2f(-153.46,18.36);
    glVertex2f(-149.27003, 2.35337);
    glVertex2f(-161.43612, -0.07985);
    glEnd();



    glPopMatrix();
}
void house1()
{
    // house roof side
    glPushMatrix();
    glColor3ub(176,157,50);
    glBegin(GL_TRIANGLES);
    glVertex2f(-217.9067, 13.9166);
    glVertex2f(-206.605, -9.31858);
    glVertex2f(-240.274, -9.35974);
    glEnd();

    // house roof front
    glBegin(GL_POLYGON);
    glColor3ub(220,202,35);
    glVertex2f(-217.9067, 13.9166);
    glVertex2f(-170, 15);
    glVertex2f(-155.50166, -3.42204);
    glVertex2f(-206.605, -9.31858);
    glEnd();

    // house wall
    glBegin(GL_POLYGON);
    glColor3ub(153,102,39);
    glVertex2f(-230.90697,-9.46407);
    glVertex2f(-156.94105, -3.66808);
    glVertex2f(-156.89635, -21.04092);
    glVertex2f(-203.8286, -26.32341);
    glVertex2f(-233.06247, -20.91807);
    glEnd();

    //house window
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-223.46799, -10.55784);
    glVertex2f(-212.92759, -10.51279);
    glVertex2f(-212.20688, -17.22442);
    glVertex2f(-223.3779, -17.31451);
    glEnd();

    //house door
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(-184.33253, -15.11143);
    glVertex2f(-172.90762, -13.3506);
    glVertex2f(-171.55628, -22.48234);
    glVertex2f(-184.41443, -23.66988);
    glEnd();
    glPopMatrix();
}
void house2()
{
    //roof
    glPushMatrix();
    glColor3ub(221,216,32);
    glBegin(GL_POLYGON);
    glVertex2f(-157.1104, -0.89092);
    glVertex2f(-141.70002, 14.2491);
    glVertex2f(-140.16,12.19);
    glVertex2f(-153.32539, -3.32414);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-141.70002, 14.2491);
    glVertex2f(-97.63175, 17.62857);
    glVertex2f(-86.00637, 3.84034);
    glVertex2f(-129.39875, -2.24271);
    glEnd();

    //door left side
    glColor3ub(146,96,38);
    glBegin(GL_POLYGON);
    glVertex2f(-140.16,12.19);
    glVertex2f(-129.39875, -2.24271);
    glVertex2f(-129.3151, -20.84001);
    glVertex2f(-153.85675, -19.63919);
    glVertex2f(-153.32539, -3.32414);
    glEnd();

    //door front side
    glColor3ub(190,129,43);
    glBegin(GL_POLYGON);
    glVertex2f(-129.39875, -2.24271);
    glVertex2f(-89.79,3.31);
    glVertex2f(-87.74161, -14.98083);
    glVertex2f(-129.35333, -19.66115);
    glEnd();

    //window
    glColor3ub(35,31,32);
    glBegin(GL_POLYGON);
    glVertex2f(-146.10714, -7.33973);
    glVertex2f(-137.85205, -6.39242);
    glVertex2f(-137.08518, -12.61758);
    glVertex2f(-146.19736, -12.7078);
    glEnd();

    //door
    glColor3ub(35,31,32);
    glBegin(GL_POLYGON);
    glVertex2f(-112.29715, -9.65636);
    glVertex2f(-103.74548, -7.46168);
    glVertex2f(-101.55081, -16.24039);
    glVertex2f(-112.07012, -17.67828);
    glEnd();


    glPopMatrix();

}

void tree2()
{
    glPushMatrix();
    glScaled(0.8,0.8,0);
    glTranslated(19.3,10,0);
    tree1();
    glPopMatrix();

}
void fencebarVertical()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glVertex2f(-82.01707, 14.39685);
    glVertex2f(-80.6,10.29);
    glVertex2f(-80.55318, -10.74745);
    glVertex2f(-83.3364, -10.74745);
    glVertex2f(-83.46, 10.44);
    glEnd();
    glPopMatrix();

}
void fence()
{
    //horizontal bar
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(244,118,33);
    glVertex2f(-93.53356, 10.23951);
    glVertex2f(-18.67149, 10.54548);
    glVertex2f(-18.67149, 8.50564);
    glVertex2f(-93.22759, 8.30166);
    glEnd();


    //bar down
    glPushMatrix();
    glTranslated(0,-8.06,0);
    glBegin(GL_POLYGON);
    glColor3ub(244,118,33);
    glVertex2f(-93.53356, 10.23951);
    glVertex2f(-18.67149, 10.54548);
    glVertex2f(-18.67149, 8.50564);
    glVertex2f(-93.22759, 8.30166);
    glEnd();
    glPopMatrix();

    //Y bar
    fencebarVertical();

    glPushMatrix();
    glTranslated(9.4,0,0);
    fencebarVertical();

    glTranslated(9.4,0,0);
    fencebarVertical();

    glTranslated(9.4,0,0);
    fencebarVertical();

    glTranslated(9.4,0,0);
    fencebarVertical();

    glTranslated(9.4,0,0);
    fencebarVertical();

    glTranslated(9.4,0,0);
    fencebarVertical();

    glPopMatrix();

    glPushMatrix();

}
void tree3()
{
    glPushMatrix();

    //branch
    glColor3ub(144,44,29);
    glBegin(GL_POLYGON);
    glVertex2f(-29.31571, 20.45788);
    glVertex2f(-26, 24);
    glVertex2f(-15.41996, 12.53323);
    glVertex2f(-19.33387, 9.08765);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-16.99222, 24.07424);
    glVertex2f(-12, 24);
    glVertex2f(-12, 10);
    glVertex2f(-16.92531, 10.29193);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-5.15014, 23.33829);
    glVertex2f(-1.83837, 19.29058);
    glVertex2f(-12, 10);
    glVertex2f(-15.35306, 14.00513);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(-19.06511, 14.16724);
    glVertex2f(-9.38244, 14.20862);
    glVertex2f(-9.09278, -7.51534);
    glVertex2f(-19.14787, -7.51534);
    glEnd();




    glColor3ub(8,147,71);

    circle(6.7156,-44.3451, 28.92786);
    circle(7.5967,-37.91872,38.56743);
    circle(7.3477,-25.37198, 44.68779);
    circle(11.119352,-7.62293, 46.67691);
    circle(7.3477,-25.37198, 44.68779);
    circle(6.9123,9.20807, 45.29983);
    circle(7.8377,19.45967, 36.4253);
    circle(8.4386,15, 25);
    circle(6.0299,2.32266, 20.97138);
    circle(6.7134,-4.08019, 27.10993);
    circle(7.0731,-16.65046, 28.62184);
    circle(8.6579,-31.64535, 23.57254);


    glBegin(GL_POLYGON);
    glVertex2f(-38.79354, 43.65602);
    glVertex2f(16.4487, 42.9339);
    glVertex2f(18.97613, 24.70034);
    glVertex2f(-38.16169, 24.97114);
    glEnd();


    glPopMatrix();

}
void schoolFontSideDoor()
{

    glBegin(GL_POLYGON);
    glVertex2f(143.25596, 25.86177);
    glVertex2f(150.3513, 25.86177);
    glVertex2f(150.17249, 16.72649);
    glVertex2f(143.14861, 16.60877);
    glEnd();

}
void tree4()
{
    glPushMatrix();
    glTranslated(81.6,20,0);
    tree3();
    glPopMatrix();

}
void schoolHouse()
{

    glPushMatrix();
    //roof
    glColor3ub(220,202,36);
    glBegin(GL_POLYGON);
    glVertex2f(112.28795, 59.10958);
    glVertex2f(228.89393, 62.98688);
    glVertex2f(246.54415, 42.78185);
    glVertex2f(177.81608, 39.18273);
    glVertex2f(141.99504, 30.67779);
    glEnd();

    //left side
    glColor3ub(169,124,80);
    glBegin(GL_POLYGON);
    glVertex2f(112.28795, 59.10958);
    glVertex2f(140.98431, 32.44937);
    glVertex2f(140, 15);
    glVertex2f(91.84271, 28.62297);
    glVertex2f(94.25692, 48.0052);
    glEnd();

    //left element door
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(124.3546, 34.36565);
    glVertex2f(133.98297, 32.51912);
    glVertex2f(131.071, 17.77138);
    glVertex2f(122.05327, 20.11974);
    glEnd();

    //left element top window
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(108.5931, 52.03964);
    glVertex2f(117.82578, 51.90775);
    glVertex2f(116.83657, 47.95088);
    glVertex2f(108.79095, 47.95088);
    glEnd();

    //left element middle window
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(113.34134, 36.21219);
    glVertex2f(120.39774, 35.75056);
    glVertex2f(119.80421, 29.15578);
    glVertex2f(113.07755, 30.47474);
    glEnd();

    //front side
    glColor3ub(117,76,41);
    glBegin(GL_POLYGON);
    glVertex2f(140.98431, 32.44937);
    glVertex2f(177.81608, 39.18273);
    glVertex2f(244.91758, 42.59322);
    glVertex2f(247.61156, 28.15767);
    glVertex2f(178.99056, 21.80752);
    glVertex2f(140, 15);
    glEnd();

    //font side door
    glColor3ub(0,0,0);
    schoolFontSideDoor();
    glTranslated(10.93,2,0);
    schoolFontSideDoor();
    glTranslated(10.93,1.8,0);
    schoolFontSideDoor();

    glTranslated(15.62,1.8,0);
    schoolFontSideDoor();

    glTranslated(10.93,1.5,0);
    schoolFontSideDoor();

    glTranslated(10.93,1,0);
    schoolFontSideDoor();

    glTranslated(10.93,1,0);
    schoolFontSideDoor();

    glTranslated(10.93,1,0);
    schoolFontSideDoor();

    glPopMatrix();
}
void road()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(234,179,129);
    glVertex2f(-167.59072, -32.97679);
    glVertex2f(-94.31851, -14.54543);
    glVertex2f(10.95193, -26.04625);
    glVertex2f(178.99056, 21.80752);
    glVertex2f(250, 28.25383);
    glVertex2f(250, -12.45016);
    glVertex2f(-88.87935, -58.66275);
    glEnd();
    glPopMatrix();
}
void flag()
{
    glPushMatrix();

    //flag
    glColor3ub(15,138,67);
    glBegin(GL_POLYGON);
    glVertex2f(188, 74);
    glVertex2f(211.71266, 78.62816);
    glVertex2f(213.45379, 68.28089);
    glVertex2f(189.47599, 64.00269);
    glEnd();

    glColor3ub(237,32,36);
    circle(3.2848,200.76844, 71.46467);

    glColor3ub(113,31,18);
    glBegin(GL_POLYGON);
    glVertex2f(187.93202, 77.28527);
    glVertex2f(188.94463, 77.46273);
    glVertex2f(197.78789, 10.89352);
    glVertex2f(196.48821, 10.78522);
    glEnd();



    glPopMatrix();
}
void cloud1()
{

    glColor3ub(255,255,255);
    circle(12.0490,-189.4534, 143.04518);
    circle(11.1494,-170, 150);
    circle(12.2979,-150.51966, 154.11639);
    circle(10.5966,-160.85279, 136.95602);
    circle(10.8489,-177.82863, 133.45014);

}
void cloud2()
{
    glTranslated(313.24,-12,0);
    circle(12.0490,-189.4534, 143.04518);
    circle(11.1494,-170, 150);
    circle(12.2979,-150.51966, 154.11639);
    circle(10.5966,-160.85279, 136.95602);
    circle(10.8489,-177.82863, 133.45014);

}
float cloud1x=-50;
float cloud2x=100;
void cloud()
{
    glPushMatrix();

    glPushMatrix();
    glTranslated(cloud1x,0,0);
    cloud1();
    glPopMatrix();

    glPushMatrix();
    glTranslated(cloud2x,0,0);
    cloud2();
    glPopMatrix();

    glPopMatrix();
}
void mountain1()
{
    glColor3ub(83,48,18);
    glBegin(GL_POLYGON);
    glVertex2f(-201.68801, 124.44788);
    glVertex2f(-215.04633, 57.33822);
    glVertex2f(-248.44212, 69.10627);
    glEnd();

    glColor3ub(200,92,40);
    glBegin(GL_POLYGON);
    glVertex2f(-201.68801, 124.44788);
    glVertex2f(-215.04633, 57.33822);
    glVertex2f(-128.21725, 64.01738);
    glEnd();
}
void mountain()
{

    glPushMatrix();
    mountain1();

    //mountain 2
    glColor3ub(83,48,18);
    glBegin(GL_POLYGON);
    glVertex2f(-85.40503, 119.55282);
    glVertex2f(-102.83636, 38.08839);
    glVertex2f(-139.09789, 57.42652);
    glEnd();

    glColor3ub(200,92,40);
    glBegin(GL_POLYGON);
    glVertex2f(-85.40503, 119.55282);
    glVertex2f(-102.83636, 38.08839);
    glVertex2f(-2.08582, 50.72664);
    glEnd();



    //mountain 4
    glColor3ub(83,48,18);
    glBegin(GL_POLYGON);
    glVertex2f(80.82384, 144.46398);
    glVertex2f(66.77246, 77.8821);
    glVertex2f(33.44693, 89.10509);
    glEnd();

    glColor3ub(200,92,40);
    glBegin(GL_POLYGON);
    glVertex2f(80.82384, 144.46398);
    glVertex2f(66.77246, 77.8821);
    glVertex2f(152.88858, 83.49892);
    glEnd();

    //mountain 3
    glColor3ub(83,48,18);
    glBegin(GL_POLYGON);
    glVertex2f(5.72219, 129.78767);
    glVertex2f(-6.12302, 68.12285);
    glVertex2f(-36.29929, 78.64793);
    glEnd();

    glColor3ub(200,92,40);
    glBegin(GL_POLYGON);
    glVertex2f(5.72219, 129.78767);
    glVertex2f(-6.12302, 68.12285);
    glVertex2f(66.69022, 74.74224);
    glEnd();




    //mountain 6
    glColor3ub(83,48,18);
    glBegin(GL_POLYGON);
    glVertex2f(193.08436, 132.09917);
    glVertex2f(183.43427, 81.70426);
    glVertex2f(157.85388, 90.28212);
    glEnd();

    glColor3ub(200,92,40);
    glBegin(GL_POLYGON);
    glVertex2f(193.08436, 132.09917);
    glVertex2f(183.43427, 81.70426);
    glVertex2f(247.76819, 87.06542);
    glEnd();

    //mountain 5
    glColor3ub(83,48,18);
    glBegin(GL_POLYGON);
    glVertex2f(142.23199, 108.67052);
    glVertex2f(136.71996, 81.66158);
    glVertex2f(123.4911, 86.43867);
    glEnd();

    glColor3ub(200,92,40);
    glBegin(GL_POLYGON);
    glVertex2f(142.23199, 108.67052);
    glVertex2f(136.71996, 81.66158);
    glVertex2f(170.89454, 84.78506);
    glEnd();

    glPopMatrix();

}
void sun()
{
    glColor3ub(249,237,36);
    circle(16.5139,-50.13163, 135.86938);

}
void boat1()
{
    glPushMatrix();

    //boat shape
    glColor3ub(13,31,32);
    glBegin(GL_POLYGON);
    glVertex2f(-46.52988, -122.6218);
    glVertex2f(-31.69899, -131.87717);
    glVertex2f(-25.78894, -129.98149);
    glVertex2f(-36.27092, -135.11098);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(-25.78894, -129.98149);
    glVertex2f(2.53471, -127.8628);
    glVertex2f(4.1551, -128.12676);
    glVertex2f(-36.27092, -135.11098);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(4.1551, -128.12676);
    glVertex2f(16.71561, -119.23561);
    glVertex2f(7.04825, -132.00782);
    glVertex2f(-36.27092, -135.11098);
    glEnd();


    //house
    glColor3ub(150,69,33);
    glBegin(GL_POLYGON);
    glVertex2f(-30.68391, -123.00202);
    glVertex2f(-1.54678, -121.75974);
    glVertex2f(2.53471, -127.8628);
    glVertex2f(-25.78894, -129.98149);
    glEnd();


    //pal
    glColor3ub(167,79,158);
    glBegin(GL_POLYGON);
    glVertex2f(-24.45081, -107.79091);
    glVertex2f(-4.93648, -108.683);
    glVertex2f(-6.83216, -117.82685);
    glVertex2f(-30, -120);
    glEnd();

    //bamboo
    glColor3ub(182,162,50);
    glBegin(GL_POLYGON);
    glVertex2f(-17.75305, -106.2064);
    glVertex2f(-14.83103, -106.26828);
    glVertex2f(-16, -123);
    glVertex2f(-18, -123);
    glEnd();


    glPopMatrix();


}
void boat2()
{
    glPushMatrix();

    //boat shape
    glColor3ub(13,31,32);
    glBegin(GL_POLYGON);
    glVertex2f(120.03332, -101.97915);
    glVertex2f(139.51838, -114.37827);
    glVertex2f(133.65752, -118.23425);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(139.51838, -114.37827);
    glVertex2f(147.5103, -112.2278);
    glVertex2f(133.65752, -118.23425);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(147.5103, -112.2278);
    glVertex2f(185.19674, -108.19956);
    glVertex2f(188.28609, -108.6409);
    glVertex2f(133.65752, -118.23425);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(188.28609, -108.6409);
    glVertex2f(205.19523, -97.79011);
    glVertex2f(192.44556, -114.51841);
    glVertex2f(133.65752, -118.23425);
    glEnd();


    //house
    glColor3ub(150,69,33);
    glBegin(GL_POLYGON);
    glVertex2f(140.97237, -102.5976);
    glVertex2f(180, -100);
    glVertex2f(185.19674, -108.19956);
    glVertex2f(147.5103, -112.2278);
    glVertex2f(139.51838, -114.37827);
    glVertex2f(133.63929, -110.63749);
    glEnd();


    //pal
    glColor3ub(167,79,158);
    glBegin(GL_POLYGON);
    glVertex2f(149.27731, -81.3935);
    glVertex2f(176.31253, -82.80711);
    glVertex2f(174.10377, -95.26452);
    glVertex2f(141.94423, -98.62183);
    glEnd();

    //bamboo
    glColor3ub(182,162,50);
    glBegin(GL_POLYGON);
    glVertex2f(158.9075, -79.18474);
    glVertex2f(163.05997, -79.44979);
    glVertex2f(161.02791, -101.184);
    glVertex2f(158.99585, -101.184);
    glEnd();


    glPopMatrix();

}
float boat1x=0;
float boat2x=-400;
int state=1;

void windmill()
{
    glPushMatrix();

    glColor3ub(188,81,158);
    glBegin(GL_POLYGON);
    glVertex2f(-217.66795, 33.22182);
    glVertex2f(-195.69932, 0.47504);
    glVertex2f(-193.19247, 1.72624);
    glEnd();

    glColor3ub(188,81,158);
    glBegin(GL_POLYGON);
    glVertex2f(-229.64297, -25.36184);
    glVertex2f(-196.09567, -2.8375);
    glVertex2f(-195.49547, -5.57798);
    glEnd();

    glColor3ub(188,81,158);
    glBegin(GL_POLYGON);
    glVertex2f(-151.80622, 5.79608);
    glVertex2f(-190.28041, 0.71783);
    glVertex2f(-188.44916, -1.78381);
    glEnd();

    //stand
    glColor3ub(169,124,80);
    glBegin(GL_POLYGON);
    glVertex2f(-193.36146, -6.00998);
    glVertex2f(-192, -6);
    glVertex2f(-196.48792, -88.74288);
    glVertex2f(-201.19566, -88.70179);
    glEnd();

    glColor3ub(92,92,92);
    circle(4.8445,-192.5249, -2.36688);

    glPopMatrix();

}
void tree5()
{
    glPushMatrix();
    glTranslated(70,30,0);
    tree2();
    glPopMatrix();

}
void tree6()
{
    glPushMatrix();
    glColor3ub(96,187,70);
    glBegin(GL_POLYGON);
    glVertex2f(-148.9325, 94.89213);
    glVertex2f(-152.68311, 88.35881);
    glVertex2f(-143.24609, 87.99585);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-148.9325, 94.89213);
    glVertex2f(-152.68311, 88.35881);
    glVertex2f(-143.24609, 87.99585);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-148.20657, 90.4156);
    glVertex2f(-152.44114, 81.94648);
    glVertex2f(-141.1893, 81.7045);
    glEnd();



    glBegin(GL_POLYGON);
    glVertex2f(-147.0219, 85.16512);
    glVertex2f(-153.71821, 72.2508);
    glVertex2f(-136.59479, 72.44213);
    glEnd();

    glColor3ub(89,31,12);
    glBegin(GL_POLYGON);
    glVertex2f(-147.0219, 71.96382);
    glVertex2f(-143.48242, 72.05948);
    glVertex2f(-143.67375, 61.72803);
    glVertex2f(-147.21322, 61.91935);
    glEnd();

    glPopMatrix();

}
void tree7()
{
    glPushMatrix();

    //branch
    glColor3ub(140,43,28);
    glBegin(GL_POLYGON);
    glVertex2f(-130.76351, 97.66928);
    glVertex2f(-128.59438, 99.9719);
    glVertex2f(-124.08925, 94.86609);
    glVertex2f(-126.5921, 92.36325);
    glEnd();




    glBegin(GL_POLYGON);
    glVertex2f(-119.08356, 107.6473);
    glVertex2f(-116.44723, 106.27907);
    glVertex2f(-122.2872, 94.1653);
    glVertex2f(-124.89016, 95.66701);
    glEnd();


    glBegin(GL_POLYGON);
    glVertex2f(-124.20231, 89.81016);
    glVertex2f(-120.67661, 90.20253);
    glVertex2f(-119.70145, 74.02232);
    glVertex2f(-123.80751, 73.52346);
    glEnd();



    glColor3ub(96,187,70);
    circle(4.7063,-139.29474, 107.95754);
    circle(6.0835,-132.79345, 101.84323);
    circle(7.5139,-115.06969, 112.29174);
    circle(4.7989,-124.51204, 91.62692);
    circle(3.7282,-120.41004, 95.88372);





    glPopMatrix();

}
static void display(void)
{


    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


    ground();
    road();

    sky();
    sun();
    cloud();
    tree7();
    mountain();

    river();
    house1();
    tree1();
    tree2();
    tree5();
    tree6();

    fence();
    house2();
    tree3();
    tree4();
    schoolHouse();
    flag();
    windmill();

    glPushMatrix();
    glTranslated(boat2x,-15,0);
    boat2();
    glPopMatrix();


    glPushMatrix();
    glTranslated(boat1x,0,0);
    boat1();
    glPopMatrix();

    glutSwapBuffers();
}
void timer(int)
{

    glutPostRedisplay();

    if(boat1x>-300)
        boat1x-=0.15;
    else
    {
        boat1x=300;
    }

    if(boat2x<150)
        boat2x+=1;
    else
    {
        boat2x=-400;
    }

    if(cloud1x<500)
        cloud1x+=0.2;
    else
    {
        cloud1x=-50;
    }
    if(cloud2x>-450)
        cloud2x-=0.2;
    else
    {
        cloud2x=-50;
    }


    glutTimerFunc(1000/60,timer,0);

}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(1212.08,800);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("Village scenario");

    //glutReshapeFunc(resize);


    gluOrtho2D(-250,250,-165,165);
    glClearColor(1,1,1,0);
    glutDisplayFunc(display);
    glutTimerFunc(1000,timer,0);

    glutMainLoop();

    return EXIT_SUCCESS;
}
