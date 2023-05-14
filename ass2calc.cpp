#include <iostream>
#include<math.h>
#include <algorithm>
#include <cmath>
#include <string>
#define pi 3.14159265358
#include<time.h>
using namespace std;
//List of function prototypes
int a;
void Welcoming_Message(void);
int menu(void);
int simplearithmetic(void);
int add(int num1, int num2);
int modulo(int num1, int num2);
int subtract(int num1, int num2);
int multiply(int num1, int num2);
float divide(int num1, int num2);
int square(int x);
int cube(int x);
int squareroot(int x);
int remainder(int num1, int num2);
int remquo(int num1, int num2);
int power(int x);
int logarithmoperations(void);
float natlog(int x);
float logx(int x);
float logb10(int x);
float logb2(int x);
float abslog(int x);
float antilog(int x);
int hypotenuse(int x, int y);
int trigonometricfunctions(void);
float sine(int angle);
float cosine(int angle);
float tangent(int angle);
float cosecant(int angle);
float secant(int angle);
float cotangent(int angle);
float hyperbolicsine(int angle);
float hyperboliccosine(int angle);
float hyperbolictangent(int angle);
float archhyperbolicsine(int angle);
float archhyperboliccosine(int angle);
float archhyperbolictangent(int angle);
float sininverse(int angle);
float cosinverse(int angle);
float taninverse(int angle);
int areafunctions(void);
int areasquare(int b);
int arearectangle(int b, int h);
float areatriangle(int b, int h);
float areacircle(int r);
float areasemicircle(int r);
float areaparallelogram(int b, int h);
float areatrapezium(int a, int b, int h);
float areaellipse(int a, int b);
float areasector(int r);
int surfacearea(void);
float areacube(int b);
float arearectangleprism(int a, int b, int h);
float areacylinder(int r, int h);
float areacone(int r, int l);
float areasphere(int r);
float areahemisphere(int r);
int volumeofobjects(void);
float volumecube(int b);
float volumecuboid(int a, int b, int h);
float volumecylinder(int r, int h);
float volumecone(int r, int h);
float volumesqrpyramid(int b, int h);
float volumerecpyramid(int a, int b, int h);
float volumetripyramid(int a, int b, int h);
float volumeprism(int a, int b, int h);
float volumesphere(int r);
float volumehemisphere(int r);
float bmi(float w, float h);
int unitconversion(void);
int conversionoflength(void);
int conversionofmass(void);
int conversionoftime(void);
int conversionofarea(void);
double convertkmtom(int x);
double convertHmtom(int x);
double convertDmtom(int x);
double convertdmtom(int x);
double convertcmtom(int x);
double convertmmtom(int x);
double convertmiletom(int x);
double convertfeettom(int x);
double convertyardstom(int x);
double convertkgtog(int x);
double convertHgtog(int x);
double convertDgtog(int x);
double convertdgtog(int x);
double convertcgtog(int x);
double convertmgtog(int x);
double converttonnestokg(int x);
double convertpoundstokg(int x);
double convertmintos(int x);
double converthrstomin(int x);
double convertdaystohrs(int x);
double convertweekstodays(int x);
double convertyearstomonths(int x);
double convertdecadestoyears(int x);
double convertcenturiestoyears(int x);
double convertmilleniumtoyears(int x);
double converthatosqrm(int x);
double convertarestosqrm(int x);
double convertacretosqrm(int x);
double converthatoacres(int x);
int conversionofarea(void);
double floorvalue(double y);
double maximumnumber(double x, double y);
double minimumnumber(double x, double y);
double xraisenegative(double x);
double absolutevalue(double x);
double evenodd(double x);
double roundoffdecimal(double y);
double truncate(double y);
double exponential(double y);
int roundoffinteger(int y);
double absolutedifference(double x, double y);
double simpleinterest(double p, double r, double t);
int commercialarithmetic(void);
double compoundinterest(double r, double n);
double hirepurchase(double d, double a, double t);
double appreciation(double p, double r, double t);
double depreciation(double p, double r, double t);
void Welcoming_Message(void)
{
	std::cout << '\a';
	cout << "*****BRANDLY'S CASIO CALCULATOR SOFTWARE*****" << endl;
	cout << endl;
}
int menu(void)
{
	cout << "[1]\t SIMPLE ARITHMETIC OPERATIONS" << endl;
	cout << "[2]\t LOGARITHMIC OPERATIONS" << endl;
	cout << "[3]\t TRIGONOMETRIC FUNCTIONS" << endl;
	cout << "[4]\t AREA OF 2D OBJECTS" << endl;
	cout << "[5]\t SURFACE AREA OF 3D OBJECTS" << endl;
	cout << "[6]\t VOLUME OF OBJECTS" << endl;
	cout << "[7]\t BODY MASS INDEX" << endl;
	cout << "[8]\t UNIT CONVERSION" << endl;
	cout << "[9]\t COMMERCIAL ARITHMETIC" << endl;
	cout << endl;
	int functionselected;
	cout << "\t" << endl;
	cout << "PLEASE SELECT A CATEGORY" << endl;
	cin >> functionselected;
	return functionselected;
}
int simplearithmetic(void)
{
	cout << "*SIMPLE ARITHMETIC OPERATIONS*" << endl;
	cout << "[1]\t ADDITION" << endl;
	cout << "[2]\t SUBTRACTION" << endl;
	cout << "[3]\t MULTIPLICATION" << endl;
	cout << "[4]\t DIVISION" << endl;
	cout << "[5]\t SQUARE" << endl;
	cout << "[6]\t CUBE" << endl;
	cout << "[7]\t SQUAREROOT" << endl;
	cout << "[8]\t CUBEROOT" << endl;
	cout << "[9]\t HYPOTENUSE" << endl;
	cout << "[10]\t MODULUS" << endl;
	cout << "[11]\t POWER" << endl;
	cout << "[12]\t ABSOLUTE DIFFERENCE" << endl;
	cout << "[13]\t FLOOR VALUE OF DECIMAL" << endl;
	cout << "[14]\t MAXIMUM NUMBER" << endl;
	cout << "[15]\t MINIMUM NUMBER" << endl;
	cout << "[16]\t X RAISED POWER NEGATIVE 0NE" << endl;
	cout << "[17]\t ABSOLUTE VALUE" << endl;
	cout << "[18]\t EVEN OR ODD NUMBER" << endl;
	cout << "[19]\t ROUND OFF TO CURRENT ROUNDING MODE" << endl;
	cout << "[20]\t EXPONENTIAL RAISED TO A NUMBER" << endl;
	cout << "[21]\t TRUNCATION OF DECIMAL NUMBER" << endl;
	cout << "[22]\t ROUND OFF INTEGER TO NEAREST ARGUMENT" << endl;
	cout << endl;
	int arithmeticfunction;
	cout << "\t" << endl;
	cout << "PLEASE SELECT A FUNTION" << endl;
	cin >> arithmeticfunction;
	return arithmeticfunction;
}
int logarithmoperations(void)
{
	cout << "LOGARITHMIC OPERATIONS" << endl;
	cout << "[1]\t NATURAL LOG" << endl;
	cout << "[2]\t LOG BASE 10" << endl;
	cout << "[3]\t LOG OF X+1" << endl;
	cout << "[4]\t LOG BASE 2" << endl;
	cout << "[5]\t ABSOLUTE LOG" << endl;
	cout << "[6]\t ANTILOG" << endl;
	cout << endl;
	int logfunction;
	cout << "\t" << endl;
	cout << "PLEASE SELECT A FUNTION" << endl;
	cin >> logfunction;
	return logfunction;
}
int trigonometricfunctions(void)
{
	cout << "TIGONOMETRIC FUNCTIONS" << endl;
	cout << "[1]\t SINE" << endl;
	cout << "[2]\t COSINE" << endl;
	cout << "[3]\t TANGENT" << endl;
	cout << "[4]\t COSECANT" << endl;
	cout << "[5]\t SECANT" << endl;
	cout << "[6]\t COTANGENT" << endl;
	cout << "[7]\t HYPERBOLIC SINE" << endl;
	cout << "[8]\t HYPERBOLIC COSINE" << endl;
	cout << "[9]\t HYPERBOLIC TABGENT" << endl;
	cout << "[10]\t ARC HYPERBOLIC SINE" << endl;
	cout << "[11]\t ARC HYPERBOLIC COSINE" << endl;
	cout << "[12]\t ARC HYPERBOLIC TANGENT" << endl;
	cout << "[13]\t SINE INVERSE" << endl;
	cout << "[14]\t COSINE INVERSE" << endl;
	cout << "[15]\t TANGENT INVERSE" << endl;
	cout << endl;
	int trigfunction;
	cout << "\t" << endl;
	cout << "PLEASE SELECT A FUNTION" << endl;
	cin >> trigfunction;
	return trigfunction;
}
int areafunctions(void)
{
	cout << "AREA OF 2D OBJECTS" << endl;
	cout << "[1]\t AREA OF A SQUARE" << endl;
	cout << "[2]\t AREA OF A RECTANGLE" << endl;
	cout << "[3]\t AREA OF A TRIANGLE" << endl;
	cout << "[4]\t AREA OF A CIRCLE" << endl;
	cout << "[5]\t AREA OF A SEMICIRCLE" << endl;
	cout << "[6]\t AREA OF A PARALLELOGRAM" << endl;
	cout << "[7]\t AREA OF A TRAPEZIUM" << endl;
	cout << "[8]\t AREA OF A RHOMBUS" << endl;
	cout << "[9]\t AREA OF A ELLIPSE" << endl;
	cout << "[10]\t AREA OF A SECTOR OF A CIRCLE" << endl;
	cout << endl;
	int area2d;
	cout << "\t" << endl;
	cout << "PLEASE SELECT A FUNCTION" << endl;
	cin >> area2d;
	return area2d;
}
int surfacearea(void)
{
	cout << "AREA OF 3D OBJECTS" << endl;
	cout << "[1]\t SURFACE AREA OF A CUBE" << endl;
	cout << "[2]\t SURFACE AREA OF A RECTANGULAR PRISM" << endl;
	cout << "[3]\t SURFACE AREA OF A CYLINDER" << endl;
	cout << "[4]\t SURFACE AREA OF A CONE" << endl;
	cout << "[5]\t SURFACE AREA OF A SPHERE" << endl;
	cout << "[6]\t SURFACE AREA OF A HEMISPHERE" << endl;
	cout << endl;
	int surfacefunction;
	cout << "\t" << endl;
	cout << "PLEASE SELECT A SURFACE AREA FUNCTION" << endl;
	cin >> surfacefunction;
	return surfacefunction;
}
int volumeofobjects(void)
{
	cout << "VOLUME OF OBJECTS" << endl;
	cout << "[1]\t VOLUME OF A CUBE" << endl;
	cout << "[2]\t VOLUME OF A CUBOID" << endl;
	cout << "[3]\t VOLUME OF A CYLINDER" << endl;
	cout << "[4]\t VOLUME OF A CONE" << endl;
	cout << "[5]\t VOLUME OF A SPHERE" << endl;
	cout << "[6]\t VOLUME OF A HEMISPHERE" << endl;
	cout << "[7]\t VOLUME OF A SQUARE BASED PYRAMID" << endl;
	cout << "[8]\t VOLUME OF A RECTANGULAR BASED PYRAMID" << endl;
	cout << "[9]\t VOLUME OF A TRIANGULAR BASED PYRAMID" << endl;
	cout << "[10]\t VOLUME OF A PRISM" << endl;
	cout << endl;
	int volumefunction;
	cout << "\t" << endl;
	cout << "PLEASE SELECT A FUNCTION" << endl;
	cin >> volumefunction;
	return volumefunction;
}
int unitconversion(void)
{
	cout << "CONVERSION OF UNITS" << endl;
	cout << "[1]\t UNIT CONVERSION OF LENGTH" << endl;
	cout << "[2]\t UNIT CONVERSION OF MASS" << endl;
	cout << "[3]\t UNIT CONVERSION OF TIME" << endl;
	cout << "[4]\t UNIT CONVERSION OF AREA" << endl;
	cout << endl;
	int unitsconversion;
	cout << "\t" << endl;
	cout << "PLEASE SELECT A UNIT CONVERSION FUNCTION" << endl;
	cin >> unitsconversion;
	return unitsconversion;
}
int conversionoflength(void)
{
	cout << "UNIT CONVESION OF LENGTH" << endl;
	cout << "[1]\t KILOMETERS TO METERS" << endl;
	cout << "[2]\t HECTOMETERS TO METERS" << endl;
	cout << "[3]\t DECAMETERS TO METERS" << endl;
	cout << "[4]\t DECIMETERS TO METERS" << endl;
	cout << "[5]\t CENTIMETERS TO METERS" << endl;
	cout << "[6]\t MILLIIMETERS TO METERS" << endl;
	cout << "[7]\t INCHES TO METERS" << endl;
	cout << "[8]\t FEET TO METERS" << endl;
	cout << "[9]\t MILES TO METERS" << endl;
	cout << "[10]\t YARDS TO METERS" << endl;
	cout << endl;
	int lengthconversion;
	cout << "\t" << endl;
	cout << "PLEASE SELECT A LENGTH CONVERSION FUNCTION" << endl;
	cin >> lengthconversion;
	return lengthconversion;
}
int conversionofmass(void)
{
	cout << "UNIT CONVESION OF MASS" << endl;
	cout << "[1]\t KILOGRAMS TO GRAMS" << endl;
	cout << "[2]\t HECTOGRAMS TO GRAMS" << endl;
	cout << "[3]\t DECAGRAMS TO GRAMS" << endl;
	cout << "[4]\t DECIGRAMS TO GRAMS" << endl;
	cout << "[5]\t CENTIGRAMS TO GRAMS" << endl;
	cout << "[6]\t MILLIIGRAMS TO GRAMS" << endl;
	cout << "[7]\t TONNES TO KILOGRAMS" << endl;
	cout << "[8]\t POUNDS TO KILOGRAMS" << endl;
	cout << endl;
	int massconversion;
	cout << "\t" << endl;
	cout << "PLEASE SELECT A MASS CONVERSION FUNCTION" << endl;
	cin >> massconversion;
	return massconversion;
}
int conversionoftime(void)
{
	cout << "UNIT CONVESION OF TIME" << endl;
	cout << "[1]\t MINUTES TO SECONDS" << endl;
	cout << "[2]\t HOURS TO MINUTES" << endl;
	cout << "[3]\t DAYS TO HOURS" << endl;
	cout << "[4]\t WEEKS TO DAYS" << endl;
	cout << "[5]\t YEARS TO MONTHS" << endl;
	cout << "[6]\t DECADES TO YEARS" << endl;
	cout << "[7]\t CENTURIES TO YEARS" << endl;
	cout << "[8]\t MILLENIUM TO YEARS" << endl;
	cout << endl;
	int timeconversion;
	cout << "\t" << endl;
	cout << "PLEASE SELECT A TIME CONVERSION FUNCTION" << endl;
	cin >> timeconversion;
	return timeconversion;
}
int commercialarithmetic(void)
{
	cout << "COMMERCIAL ARITHMETIC" << endl;
	cout << "[1]\t SIMPLE INTEREST" << endl;
	cout << "[2]\t COMPOUND INTEREST" << endl;
	cout << "[3]\t HIRE PURCHASE" << endl;
	cout << "[4]\t APPRECIATION" << endl;
	cout << "[5\t DEPRECIATION" << endl;
	cout << endl;
	int money;
	cout << "\t" << endl;
	cout << "PLEASE SELECT A COMMERCIAL ARITHMETIC FUNCTION" << endl;
	cin >> money;
	return money;
}
int conversionofarea(void)
{
	cout << "CONVERSION OF AREA UNITS" << endl;
	cout << "[1]\t HECTARES TO SQUARE METERS " << endl;
	cout << "[2]\t ACRE TO SQUARE METERS" << endl;
	cout << "[3]\t ARES TO SQUARE METER" << endl;
	cout << "[4]\t HECTARES TO ACRES" << endl;
	cout << "[5]\t DECARE TO SQUARE METERS" << endl;
	cout << "[6]\t ROOD TO SQUARE METERS" << endl;
	cout << "[7]\t SQUARE CHAIN TO SQUARE METERS" << endl;
	cout << "[8]\t SQUARE ROD TO SQUARE METERS" << endl;
	cout << "[9]\t SQUARE THOU TO SQUARE METERS" << endl;
	cout << endl;
	int areaconversion;
	cout << "\t" << endl;
	cout << "PLEASE SELECT AN AREA CONVERSION FUNCTION" << endl;
	cin >> areaconversion;
	return areaconversion;
}
int addition(int num1, int num2)
{
	int sum = 0;
	sum = (num1 + num2);
	return sum;
}
int subtract(int num1, int num2)
{
	int difference = 0;
	difference = (num1 - num2);
	return difference;
}
int multiply(int num1, int num2)
{
	int product = 0;
	product = (num1 * num2);
	return product;
}
int power(int x, int y)
{
	int power;
	power = pow(x, y);
	return power;
}
float divide(float num1, float num2)
{
	int quotient = 0;
	quotient = (num1 / num2);
	return quotient;
}
int square(int x)
{
	int square;
	square = (x * x);
	return square;
}
int cube(int x)
{
	int cube = 0;
	cube = (x * x * x);
	return cube;
}
int hypotenuse(int x, int y)
{
	int hypoten;
	hypoten = hypot(x, y);
	return hypoten;
}
int squareroot(int x)
{
	int squaret;
	squaret = sqrt(x);
	return squaret;
}
int modulo(int num1, int num2)
{
	int mods;
	mods = fmod(num1, num2);
	return mods;
}
int cuberoot(int x)
{
	int cubet;
	cubet = sqrt(sqrt(sqrt(x * x)));
	return cubet;
}
double absolutedifference(double x, double y)
{
	double posdiff;
	posdiff = fdim(x, y);
	return posdiff;
}
double maximumnumber(double x, double y)
{
	double max;
	max = fmax(x, y);
	return max;
}
double minimumnumber(double x, double y)
{
	double min;
	min = fmin(x, y);
	return min;
}
double absolutevalue(double x)
{
	double absolute;
	absolute = fabs(x);
	return absolute;
}
double evenodd(double x)
{
	double evenodd;
	evenodd = fmod(x, 2);
	return evenodd;
}
double floorvalue(double y)
{
	double flrvalue;
	flrvalue = floor(y);
	return flrvalue;
}
double xraisenegative(double x)
{
	double raisneg;
	raisneg = expm1(x);
	return raisneg;
}
double roundoffdecimal(double y)
{
	double rounddec;
	rounddec = llrint(y);
	return rounddec;
}
double truncate(double y)
{
	double truncat;
	truncat = trunc(y);
	return truncat;
}
double exponential(double y)
{
	double expone;
	expone = exp(y);
	return expone;
}
int roundoffinteger(int y) {
	double roundint;
	roundint = round(y);
	return roundint;
}
float natlog(int x)
{
	float natulog;
	natulog = log(x);
	return natulog;
}
float logb10(int x)
{
	float logb10;
	logb10 = log10(x);
	return logb10;
}
float logx(int x)
{
	float logx;
	logx = log1p(x);
	return logx;
}
float logb2(int x)
{
	float logb2x;
	logb2x = log2(x);
	return logb2x;
}
float abslog(int x)
{
	float absolutelog;
	absolutelog = logb(x);
	return absolutelog;
}
float antilog(int x)
{
	float antilog;
	antilog = 1 / log(x);
	return antilog;
}
float sine(int angle)
{
	float sine;
	sine = sin(angle * pi / 180);
	return sine;
}
float cosine(int angle)
{
	float cosine;
	cosine = cos(angle * pi / 180);
	return cosine;
}
float tangent(int angle)
{
	double tang;
	tang = tan(angle * pi / 180);
	return tang;
}
float cosecant(int angle)
{
	float cosecan;
	cosecan = 1 / sin(angle * pi / 180);
	return cosecan;
}
float secant(int angle)
{
	float secan;
	secan = 1 / cos(angle * pi / 180);
	return secan;
}
float cotangent(int angle)
{
	float cotan;
	cotan = 1 / tan(angle * pi / 180);
	return cotan;
}
float hyperbolicsine(int angle)
{
	float hsine;
	hsine = sinh(angle * pi / 180);
	return hsine;
}
float hyperboliccosine(int angle)
{
	float hcos;
	hcos = cosh(angle * pi / 180);
	return hcos;
}
float hyperbolictangent(int angle)
{
	float htan;
	htan = tanh(angle * pi / 180);
	return htan;
}
float archhyperbolicsine(int angle)
{
	float ahsine;
	ahsine = asinh(angle * pi / 180);
	return ahsine;
}
float archhyperboliccosine(int angle)
{
	float ahcos;
	ahcos = acosh(angle * pi / 180);
	return ahcos;
}
float archhyperbolictangent(int angle)
{
	float ahtan;
	ahtan = atanh(angle * pi / 180);
	return ahtan;
}
float sininverse(int angle)
{
	float asine;
	asine = asin(angle * pi / 180);
	return asine;
}
float cosinverse(int angle)
{
	float acosin;
	acosin = acos(angle * pi / 180);
	return acosin;
}
float taninverse(int angle)
{
	float atanin;
	atanin = atan(angle * pi / 180);
	return atanin;
}
int areasquare(int b)
{
	int areasqr;
	areasqr = (b * b);
	return areasqr;
}
int arearectangle(int b, int h)
{
	int arearec;
	arearec = (b * h);
	return arearec;
}
float areacircle(int r)
{
	int areacirc;
	areacirc = pi * r * r;
	return areacirc;
}
float areasemicircle(int r)
{
	int areasemi;
	areasemi = pi * r * r / 2;
	return areasemi;
}
float areaparallelogram(int b, int h)
{
	int areapar;
	areapar = b * h;
	return areapar;
}
float areatrapezium(float a, float b, float h)
{
	float areatrap;
	areatrap = h * (a + b) / 2;
	return areatrap;
}
float areaellipse(int a, int b)
{
	float areaell;
	areaell = pi * a * b;
	return areaell;
}
float areatriangle(float b, float h)
{
	float areatri;
	areatri = b * h / 2;
	return areatri;
}
float areasector(int r, int angle)
{
	float areasec;
	areasec = pi * r * r * angle / 360;
	return areasec;
}
float arearhombus(float d1, float d2)
{
	float arearho;
	arearho = d1 * d2 / 2;
	return arearho;
}
float areacube(int b)
{
	int areacub;
	areacub = 6 * (b * b);
	return areacub;
}
float arearectangleprism(int a, int b, int h)
{
	float areapris;
	areapris = 2 * (a * b + b * h + a * h);
	return areapris;
}
float areacylinder(int r, int h)
{
	float areacyl;
	areacyl = (2 * pi * r) * (r + h);
	return areacyl;
}
float areacone(int r, int l)
{
	float areacon;
	areacon = pi * r * l;
	return areacon;
}
float areasphere(int r)
{
	float areasph;
	areasph = 4 * pi * r * r;
	return areasph;
}
float areahemisphere(int r)
{
	float areahem;
	areahem = 2 * pi * r * r;
	return areahem;
}
float volumecube(int b)
{
	float vcub;
	vcub = b * b * b;
	return vcub;
}
float volumecuboid(int b, int a, int h)
{
	float vcubo;
	vcubo = b * a * h;
	return vcubo;
}
float volumecone(int r, int h)
{
	float vcon;
	vcon = (pi * r * r * h) * 1 / 3;
	return vcon;
}
float volumecylinder(int r, int h)
{
	float vcyl;
	vcyl = pi * r * r * h;
	return vcyl;
}
float volumesphere(int r)
{
	float volsph;
	volsph = (pi * r * r * r) * 4 / 3;
	return volsph;
}
float volumehemisphere(float r)
{
	float volhem;
	volhem = (pi * r * r * r) * 2 / 3;
	return volhem;
}
float volumesqrpyramid(float b, float h)
{
	float volsqr;
	volsqr = (b * b * h) * 1 / 3;
	return volsqr;
}
float volumerecpyramid(float a, float b, float h)
{
	float volrec;
	volrec = (a * b * h) * 1 / 3;
	return volrec;
}
float volumetripyramid(float a, float b, float h)
{
	float voltri;
	voltri = ((a * b) * h / 2) / 3;
	return voltri;
}
float volumeprism(float a, float b, float h)
{
	float volpri;
	volpri = (a * b) * h / 2;
	return volpri;
}
float bmi(float w, float h)
{
	float bmin;
	bmin = w / (h * h);
	return bmin;
}
double convertmiletom(int x)
{
	float miltm;
	miltm = x * 1609;
	return miltm;
}
double convertinchtom(int x)
{
	float inchtm;
	inchtm = x * 0.254;
	return inchtm;
}
double convertfeettom(int x)
{
	float fttom;
	fttom = x * 0.02116;
	return fttom;
}
float convertkmtom(float x)
{
	float kmtom;
	kmtom = x * 1000;
	return kmtom;
}
double convertHmtom(float x)
{
	float Hmtom;
	Hmtom = x * 100;
	return Hmtom;
}
double convertDmtom(float x)
{
	float Dmtom;
	Dmtom = x * 10;
	return Dmtom;
}
double convertdmtom(float x)
{
	float dmtom;
	dmtom = x * 0.1;
	return dmtom;
}
double convertcmtom(float x)
{
	float cmtom;
	cmtom = x * 00.01;
	return cmtom;
}
double convertmmtom(float x)
{
	float mmtom;
	mmtom = x * 0.001;
	return mmtom;
}
double convertyardtom(float x)
{
	float mmtom;
	mmtom = x * 1.093613;
	return mmtom;
}
double convertpoundtokg(float x)
{
	float pdtokg;
	pdtokg = x * 0.453592;
	return pdtokg;
}
float convertkgtog(float x)
{
	float kgtog;
	kgtog = x * 1000;
	return kgtog;
}
double convertHgtog(float x)
{
	float Hgtog;
	Hgtog = x * 100;
	return Hgtog;
}
double convertDgtog(float x)
{
	float Dgtog;
	Dgtog = x * 10;
	return Dgtog;
}
double convertdgtog(float x)
{
	float dgtog;
	dgtog = x * 0.1;
	return dgtog;
}
double convertcgtog(float x)
{
	float cgtog;
	cgtog = x * 00.01;
	return cgtog;
}
double convertmgtog(float x)
{
	float mgtog;
	mgtog = x * 0.001;
	return mgtog;
}
double converttonnestokg(float x)
{
	float tntokg;
	tntokg = x * 1000;
	return tntokg;
}
double convertmintos(float x)
{
	float mintos;
	mintos = x * 60;
	return mintos;
}
double converthrstomin(double x)
{
	float hrtomin;
	hrtomin = x * 60;
	return hrtomin;
}
double convertdaystohrs(double x)
{
	float dytohr;
	dytohr = x * 24;
	return dytohr;
}
double convertweekstodays(double x)
{
	float wktody;
	wktody = x * 7;
	return wktody;
}
double convertyearstomonths(double x)
{
	float yrtomon;
	yrtomon = x * 12;
	return yrtomon;
}
double convertdecadestoyears(double x)
{
	float dectoyrs;
	dectoyrs = x * 10;
	return dectoyrs;
}
double convertcenturiestoyears(double x)
{
	float centoyrs;
	centoyrs = x * 100;
	return centoyrs;
}
double convertmilleniumtoyears(double x)
{
	float milltoyrs;
	milltoyrs = x * 1000;
	return milltoyrs;
}
double simpleinterest(double p, double r, double t)
{
	double simple;
	simple = p * (r / 100) * t;
	return simple;
}
double compoundinterest(double r, double n)
{
	double compound;
	compound = (1 + (r / 100) / n);
	return compound;
}
double hirepurchase(double d, double a, double t)
{
	double hpp;
	hpp = d + a * t;
	return hpp;
}
double appreciation(double p, double r, double t)
{
	double appre;
	appre = p * pow((1 + (r / 100)), t);
	return appre;
}
double depreciation(double p, double r, double t)
{
	double depre;
	depre = p * pow((1 - (r / 100)), t);
	return depre;
}
double converthatosqrm(double x)
{
	double hatosqrm;
	hatosqrm = x * 1000;
	return hatosqrm;
}
double convertacretosqrm(double x)
{
	double actosqrm;
	actosqrm = x * 4046.8564224;
	return actosqrm;
}
double convertarestosqrm(double x)
{
	double aretosqrm;
	aretosqrm = x * 100;
	return aretosqrm;
}
double converthatoacres(double x)
{
	double hatoac;
	hatoac = x * 2.47105381467;
	return hatoac;
}
double convertdectosqrm(double x)
{
	double dectosqrm;
	dectosqrm = x * 1000;
	return dectosqrm;
}
double convertroodtosqrm(double x)
{
	double roodtosqrm;
	roodtosqrm = x * 1011.7141056;
	return roodtosqrm;
}
double convertsqrchtosqrm(double x)
{
	double schtosqm;
	schtosqm = x * 404.6856224;
	return schtosqm;
}
double convertsqrdtosqrm(double x)
{
	double srdtosqm;
	srdtosqm = x * 25.29285264;
	return srdtosqm;
}
double convertsqrthtosqrn(double x)
{
	double sthtosqm;
	sthtosqm = x * 0.00000000064516;
	return sthtosqm;
}
int main()
{
	Welcoming_Message();
	while (a = 1)
	{
		cout << endl;
		cout << "WOULD YOU WISH TO PROCEED" << "\n [1] YES" << "\n[2] NO" << endl;
		cin >> a;
		if (a == 2)
		{
			return 0;
		}
		int functionselected;
		functionselected = menu();
		if (functionselected > 100 || functionselected <= 0)
		{
			cout << "INVALID SELECTION" << endl;
		}
		else if (functionselected == 1)
		{

			int arithmeticfunction;
			arithmeticfunction = simplearithmetic();
			if (arithmeticfunction > 22 || arithmeticfunction <= 0)
			{
				cout << "INVALID SELECTION" << endl;
			}
			else if (arithmeticfunction == 1)
			{
				int number1, number2;
				cout << "ENTER TWO NUMBERS TO SUM" << endl;
				cin >> number1 >> number2;
				int sumoftwo;
				sumoftwo = addition(number1, number2);
				cout << "number1" << "\t+\t" << "number2" << "\t=\t" << sumoftwo << endl;
			}
			else if (arithmeticfunction == 2)
			{
				int number1, number2;
				cout << "ENTER TWO NUMBERS TO DIFFERENCE" << endl;
				cin >> number1 >> number2;
				int differenceoftwo;
				differenceoftwo = subtract(number1, number2);
				cout << "number1" << "\t-\t" << "number2" << "\t=\t" << differenceoftwo << endl;
			}
			else if (arithmeticfunction == 3)
			{
				int number1, number2;
				cout << "ENTER TWO NUMBERS TO MULTIPLY" << endl;
				cin >> number1 >> number2;
				int productoftwo;
				productoftwo = multiply(number1, number2);
				cout << "number1" << "\t*\t" << "number2" << "\t=\t" << productoftwo << endl;
			}
			else if (arithmeticfunction == 4)
			{
				float number1, number2;
				cout << "ENTER TWO NUMBERS TO DIVIDE" << endl;
				cin >> number1 >> number2;
				int quotientoftwo;
				quotientoftwo = divide(number1, number2);
				cout << "number1" << "\t/\t" << "number2" << "\t=\t" << quotientoftwo << endl;
			}
			else if (arithmeticfunction == 5)
			{
				int x;
				cout << "ENTER A NUMBER TO X" << endl;
				cin >> x;
				int squar;
				squar = square(x);
				cout << "Square of x" << "\t=\t" << squar << endl;
			}
			else if (arithmeticfunction == 6)
			{
				int x;
				cout << "ENTER A NUMBER TO X" << endl;
				cin >> x;
				int cub;
				cub = cube(x);
				cout << "Cube of x" << "\t=\t" << cub << endl;
			}
			else if (arithmeticfunction == 7)
			{
				int x;
				cout << "ENTER A NUMBER TO X" << endl;
				cin >> x;
				int squart;
				squart = squareroot(x);
				cout << "Squareroot of x" << "\t=\t" << squart << endl;
			}
			else if (arithmeticfunction == 8)
			{
				int x;
				cout << "ENTER A NUMBER TO X" << endl;
				cin >> x;
				int cubrt;
				cubrt = cuberoot(x);
				cout << "Cuberoot of x" << "\t=\t" << cubrt << endl;
			}
			else if (arithmeticfunction == 9)
			{
				int x, y;
				cout << "ENTER TWO NUMBERS TO X AND Y" << endl;
				cin >> x >> y;
				int hypot;
				hypot = hypotenuse(x, y);
				cout << "Hypotenuse of x and y" << "\t=\t" << hypot << endl;
			}
			else if (arithmeticfunction == 10)
			{
				int number1, number2;
				cout << "ENTER TWO NUMBERS TO MODULUS" << endl;
				cin >> number1 >> number2;
				int mods;
				mods = modulo(number1, number2);
				cout << "number1" << "\t%\t" << "number2" << "\t=\t" << mods << endl;
			}
			else if (arithmeticfunction == 11)
			{
				double x, y;
				cout << "ENTER BASE NUMBER" << endl;
				cin >> x;
				cout << "ENTER POWER" << endl;
				cin >> y;
				double powe;
				powe = power(x, y);
				cout << "X" << "\t^\t" << "Y" << "\t=\t" << powe << endl;
			}
			else if (arithmeticfunction == 12)
			{
				double x, y;
				cout << "ENTER TWO NUMBERS TO DIFFERENCE" << endl;
				cin >> x;
				cout << endl;
				cin >> y;
				double absdif;
				absdif = absolutedifference(x, y);
				cout << "ABSOLUTE DIFFERENCE BETWEEN X AND Y" << "\t=\t" << absdif << endl;
			}
			else if (arithmeticfunction == 13)
			{
				double x;
				cout << "ENTER DECIMAL NUMBER" << endl;
				cin >> x;
				double flrv;
				flrv = floorvalue(x);
				cout << "FLOOR VALUE OF THE NUMBER" << "\t=\t" << flrv << endl;
			}
			else if (arithmeticfunction == 14)
			{
				double x, y;
				cout << "ENTER TWO NUMBERS TO FIND THE MAXIMUM" << endl;
				cin >> x;
				cout << endl;
				cin >> y;
				double maxn;
				maxn = maximumnumber(x, y);
				cout << "THE MAXIMUM NUMBER" << "\t=\t" << maxn << endl;
			}
			else if (arithmeticfunction == 15)
			{
				double x, y;
				cout << "ENTER TWO NUMBERS TO FIND THE MINIMUM" << endl;
				cin >> x;
				cout << endl;
				cin >> y;
				double minn;
				minn = minimumnumber(x, y);
				cout << "THE MINIMUM NUMBER" << "\t=\t" << minn << endl;
			}
			else if (arithmeticfunction == 16)
			{
				double x;
				cout << "ENTER A NUMBER TO X" << endl;
				cin >> x;
				double raisneg;
				raisneg = xraisenegative(x);
				cout << "X RAISED TO POWER NEGATIVE ONE" << "\t=\t" << raisneg << endl;
			}
			else if (arithmeticfunction == 17)
			{
				double x;
				cout << "ENTER A NUMBER TO FIND IT'S ABSOLUTE" << endl;
				cin >> x;
				double fab;
				fab = absolutevalue(x);
				cout << "ABSOLUTE VALUE OF THE NUMBER" << "\t=\t" << fab << endl;
			}
			else if (arithmeticfunction == 18)
			{
				double x;
				cout << "ENTER A NUMBER TO X" << endl;
				cin >> x;
				double evodd;
				evodd = evenodd(x);
				if (evodd == 0)
				{
					cout << "THE NUMBER IS EVEN" << endl;
				}
				else
				{
					cout << "THE NUMBER IS ODD" << endl;
				}
				return 0;
			}
			else if (arithmeticfunction == 19)
			{
				double x;
				cout << "ENTER DECIMAL NUMBER TO ROUND OFF" << endl;
				cin >> x;
				double roundec;
				roundec = roundoffdecimal(x);
				cout << "NEW VALUE OF X" << "\t=\t" << roundec << endl;
			}
			else if (arithmeticfunction == 20)
			{
				double x;
				cout << "ENTER NUMBER TO FIND THE EXPONENTIAL" << endl;
				cin >> x;
				double expone;
				expone = exponential(x);
				cout << "EXPONENTIAL OF X" << "\t=\t" << expone << endl;
			}
			else if (arithmeticfunction == 21)
			{
				double x;
				cout << "ENTER DECIMAL NUMBER TO TRUNCATE" << endl;
				cin >> x;
				double trunc;
				trunc = truncate(x);
				cout << "NEW VALUE OF X" << "\t=\t" << trunc << endl;
			}
			else if (arithmeticfunction == 22)
			{
				double x;
				cout << "ENTER A NUMBER" << endl;
				cin >> x;
				double roundint;
				roundint = roundoffinteger(x);
				cout << "NEW VALUE OF X" << "\t=\t" << roundint << endl;
			}
		}
		else if (functionselected == 2)
		{
			int logfunction;
			logfunction = logarithmoperations();
			if (logfunction > 6 || logfunction <= 0)
			{
				cout << "INVALID SELECTION" << endl;
			}
			else if (logfunction == 1)
			{
				float x;
				cout << "PLEASE ENTER A NUMBER TO LOG";
				cin >> x;
				float nlog;
				nlog = natlog(x);
				cout << "Natural log of X" << "t=\t" << nlog << endl;
			}
			else if (logfunction == 2)
			{
				float x;
				cout << "PLEASE ENTER A NUMBER TO LOG";
				cin >> x;
				float log10;
				log10 = logb10(x);
				cout << "Log base 10 of X" << "t=\t" << log10 << endl;
			}
			else if (logfunction == 3)
			{
				float x;
				cout << "PLEASE ENTER A NUMBER TO LOG";
				cin >> x;
				float logx1;
				logx1 = logx(x);
				cout << "Log X + 1 of X" << "t=\t" << logx1 << endl;
			}
			else if (logfunction == 4)
			{
				float x;
				cout << "PLEASE ENTER A NUMBER TO LOG";
				cin >> x;
				float log2;
				log2 = logb2(x);
				cout << "Log base 2 of X" << "t=\t" << log2 << endl;
			}
			else if (logfunction == 5)
			{
				float x;
				cout << "PLEASE ENTER A NUMBER TO LOG";
				cin >> x;
				float ablog;
				ablog = abslog(x);
				cout << "Absolute log of X" << "t=\t" << ablog << endl;
			}
			else if (logfunction == 6)
			{
				float x;
				cout << "PLEASE ENTE A NUMBER TO ANTILOG";
				cin >> x;
				float anlog;
				anlog = antilog(x);
				cout << "Antilog of X" << "t=\t" << anlog << endl;
			}
		}
		else if (functionselected == 3)
		{
			int trigfunction;
			trigfunction = trigonometricfunctions();
			if (trigfunction > 15 || trigfunction <= 0)
			{
				cout << "INVALID SELECTION" << endl;
			}
			else if (trigfunction == 1)
			{
				float x;
				cout << "PLEASE ENTER AN ANGLE TO X";
				cin >> x;
				float sin;
				sin = sine(x);
				cout << "SINE OF X" << "\t=\t" << sin << endl;
			}
			else if (trigfunction == 2)
			{
				float x;
				cout << "PLEASE ENTER AN ANGLE TO X";
				cin >> x;
				float cos;
				cos = cosine(x);
				cout << "COSINE OF X" << "\t=\t" << cos << endl;
			}
			else if (trigfunction == 3)
			{
				float x;
				cout << "PLEASE ENTER AN ANGLE TO X";
				cin >> x;
				float tan;
				tan = tangent(x);
				cout << "TANGENT OF X" << "\t=\t" << tan << endl;
			}
			else if (trigfunction == 4)
			{
				float x;
				cout << "PLEASE ENTER AN ANGLE TO X";
				cin >> x;
				float cosec;
				cosec = cosecant(x);
				cout << "COSECANT OF X" << "\t=\t" << cosec << endl;
			}
			else if (trigfunction == 5)
			{
				float x;
				cout << "PLEASE ENTER AN ANGLE TO X";
				cin >> x;
				float sec;
				sec = secant(x);
				cout << "SECANT OF X" << "\t=\t" << sec << endl;
			}
			else if (trigfunction == 6)
			{
				float x;
				cout << "PLEASE ENTER AN ANGLE TO X";
				cin >> x;
				float cot;
				cot = cotangent(x);
				cout << "COTANGENT OF X" << "\t=\t" << cot << endl;
			}
			else if (trigfunction == 7)
			{
				float x;
				cout << "PLEASE ENTER AN ANGLE TO X";
				cin >> x;
				float hsin;
				hsin = hyperbolicsine(x);
				cout << "HYPERBOLICSINE OF X" << "\t=\t" << hsin << endl;
			}
			else if (trigfunction == 8)
			{
				float x;
				cout << "PLEASE ENTER AN ANGLE TO X";
				cin >> x;
				float hcos;
				hcos = hyperboliccosine(x);
				cout << "HYPERBOLIC COSINE OF X" << "\t=\t" << hcos << endl;
			}
			else if (trigfunction == 9)
			{
				float x;
				cout << "PLEASE ENTER AN ANGLE TO X";
				cin >> x;
				float htan;
				htan = hyperbolictangent(x);
				cout << "HYPERBOLIC TANGENT OF X" << "\t=\t" << htan << endl;
			}
			else if (trigfunction == 10)
			{
				float x;
				cout << "PLEASE ENTER AN ANGLE TO X";
				cin >> x;
				float ahsin;
				ahsin = archhyperbolicsine(x);
				cout << "ARC HYPERBOLIC SINE OF X" << "\t=\t" << ahsin << endl;
			}
			else if (trigfunction == 11)
			{
				float x;
				cout << "PLEASE ENTER AN ANGLE TO X";
				cin >> x;
				float ahcos;
				ahcos = archhyperboliccosine(x);
				cout << "ARC HYPERBOLIC COSINE OF X" << "\t=\t" << ahcos << endl;
			}
			else if (trigfunction == 12)
			{
				float x;
				cout << "PLEASE ENTER AN ANGLE TO X";
				cin >> x;
				float ahtan;
				ahtan = archhyperbolictangent(x);
				cout << "ARC HYPERBOLIC TANGENT OF X" << "\t=\t" << ahtan << endl;
			}
			else if (trigfunction == 13)
			{
				float x;
				cout << "PLEASE ENTER AN ANGLE TO X";
				cin >> x;
				float sinin;
				sinin = sininverse(x);
				cout << "SINE INVERSE OF X" << "\t=\t" << sinin << endl;
			}
			else if (trigfunction == 14)
			{
				float x;
				cout << "PLEASE ENTER AN ANGLE TO X";
				cin >> x;
				float cosin;
				cosin = cosinverse(x);
				cout << "COSINE INVERSE OF X" << "\t=\t" << cosin << endl;
			}
			else if (trigfunction == 15)
			{
				float x;
				cout << "PLEASE ENTER AN ANGLE TO X";
				cin >> x;
				float tanin;
				tanin = taninverse(x);
				cout << "TANGENT INVERSE OF X" << "\t=\t" << tanin << endl;
			}
		}
		else if (functionselected == 4)
		{
			int area2d;
			area2d = areafunctions();
			if (area2d > 10 || area2d <= 0)
			{
				cout << "INVALID SELECTION" << endl;
			}
			else if (area2d == 1)
			{
				float b;
				cout << "ENTER LENGTH OF THE SQUARE";
				cout << endl;
				cin >> b;
				float areasqr;
				areasqr = areasquare(b);
				cout << "AREA OF THE SQUARE" << "\t=\t" << areasqr << endl;
			}
			else if (area2d == 2)
			{
				float b, h;
				cout << "ENTER LENGTH OF THE RECTANGLE";
				cout << endl;
				cin >> b;
				cout << "ENTER WIDTH OF THE RECTANGLE";
				cout << endl;
				cin >> h;
				float arearec;
				arearec = arearectangle(b, h);
				cout << "AREA OF THE RECTANGLE" << "\t=\t" << arearec << endl;
			}
			else if (area2d == 3)
			{
				float b, h;
				cout << "ENTER BASE LENGTH OF THE TRIANGLE";
				cout << endl;
				cin >> b;
				cout << "ENTER HEIGHT OF THE TRIANGLE";
				cout << endl;
				cin >> h;
				float areatri;
				areatri = areatriangle(b, h);
				cout << "AREA OF THE TRIANGLE" << "\t=\t" << areatri << endl;
			}
			else if (area2d == 4)
			{
				float r;
				cout << "ENTER RADIUS OF THE CIRCLE";
				cout << endl;
				cin >> r;
				float areacirc;
				areacirc = areacircle(r);
				cout << "AREA OF THE CIRCLE" << "\t=\t" << areacirc << endl;
			}
			else if (area2d == 5)
			{
				float r;
				cout << "ENTER RADIUS OF THE SEMICIRCLE";
				cout << endl;
				cin >> r;
				float areasem;
				areasem = areasemicircle(r);
				cout << "AREA OF THE SEMICIRCLE" << "\t=\t" << areasem << endl;
			}
			else if (area2d == 5)
			{
				float b, h;
				cout << "ENTER BASE LENGTH OF THE PARALLELOGRAM";
				cout << endl;
				cin >> b;
				cout << "ENTER HEIGHT OF THE PARALLELOGRAM";
				cout << endl;
				cin >> h;
				float areapara;
				areapara = areaparallelogram(b, h);
				cout << "AREA OF THE PAALLELOGRAM" << "\t=\t" << areapara << endl;
			}
			else if (area2d == 6)
			{
				float a, b, h;
				cout << "ENTER BASE LENGTH OF THE TRAPEZIUM";
				cout << endl;
				cin >> b;
				cout << "ENTER TOP LENGTH OF TRAPEZIUM";
				cout << endl;
				cin >> a;
				cout << "ENTER HEIGHT OF THE TRAPEZIUM";
				cout << endl;
				cin >> h;
				float areatrap;
				areatrap = areatrapezium(a, b, h);
				cout << "AREA OF THE TRAPEZIUM" << "\t=\t" << areatrap << endl;
			}
			else if (area2d == 7)
			{
				float b, h;
				cout << "ENTER LONGER DIAGONAL OF RHOMBUS";
				cout << endl;
				cin >> b;
				cout << "ENTER SHORTER DIAGONAL OF RHOMBUS";
				cout << endl;
				cin >> h;
				float areaRHO;
				areaRHO = arearhombus(b, h);
				cout << "AREA OF THE RHOMBUS" << "\t=\t" << areaRHO << endl;
			}
			else if (area2d == 9)
			{
				float b, h;
				cout << "ENTER LENGTH OF MAJOR AXIS";
				cout << endl;
				cin >> b;
				cout << "ENTER LENGTH OF MINOR AXIS";
				cout << endl;
				cin >> h;
				float areaell;
				areaell = areaellipse(b, h);
				cout << "AREA OF THE ELLIPSE" << "\t=\t" << areaell << endl;
			}
			else if (area2d == 10)
			{
				float r;
				cout << "ENTER RADIUS OF THE SEMICIRCLE";
				cout << endl;
				cin >> r;
				float areasem;
				areasem = areasemicircle(r);
				cout << "AREA OF THE SEMICIRCLE" << "\t=\t" << areasem << endl;
			}
		}
		else if (functionselected == 5)
		{
			int surfacefunction;
			surfacefunction = surfacearea();
			if (surfacefunction > 6 || surfacefunction <= 0)
			{
				cout << "INVALID SELECTION" << endl;
			}
			else if (surfacefunction == 1)
			{
				float b;
				cout << "PLEASE ENTER THE LENGTH OF THE CUBE";
				cout << endl;
				cin >> b;
				float areacub;
				areacub = areacube(b);
				cout << "SURFACE AREA OF THE CUBE" << "\t=\t" << areacub << '\n';
			}
			else if (surfacefunction == 2)
			{
				float a, b, h;
				cout << "PLEASE ENTER THE LENGTH OF THE CUBOID";
				cout << endl;
				cin >> a;
				cout << "PLEASE ENTER THE WIDTH OF THE CUBOID";
				cout << endl;
				cin >> h;
				cout << "PLEASE ENTER THE HEIGHT OF THE CUBOID";
				cout << endl;
				cin >> b;
				float areacuboid;
				areacuboid = arearectangleprism(b, a, h);
				cout << "SURFACE AREA OF THE RECTANGULAR PRISM" << "\t=\t" << areacuboid << '\n';
			}
			else if (surfacefunction == 3)
			{
				float r, h;
				cout << "PLEASE ENTER THE RADIUS OF THE CYLINDER";
				cout << endl;
				cin >> r;
				cout << "PLEASE ENTER THE HEIGHT OF THE CYLINDER";
				cout << endl;
				cin >> h;
				float areacyl;
				areacyl = areacylinder(r, h);
				cout << "SURFACE AREA OF THE CYLINDER" << "\t=\t" << areacyl << '\n';
			}
			else if (surfacefunction == 4)
			{
				float r, l;
				cout << "PLEASE ENTER THE RADIUS OF THE CONE";
				cout << endl;
				cin >> r;
				cout << "PLEASE ENTER THE SLANT HEIGHT OF THE CONE";
				cout << endl;
				cin >> l;
				float areacon;
				areacon = areacone(r, l);
				cout << "SURFACE AREA OF THE CONE" << "\t=\t" << areacon << '\n';
			}
			else if (surfacefunction == 5)
			{
				float r;
				cout << "PLEASE ENTER THE RADIUS OF THE SPHERE";
				cout << endl;
				cin >> r;
				float areasph;
				areasph = areasphere(r);
				cout << "SURFACE AREA OF THE SPHERE" << "\t=\t" << areasph << '\n';
			}
			else if (surfacefunction == 6)
			{
				float r;
				cout << "PLEASE ENTER THE RADIUS OF THE HEMISPHERE";
				cout << endl;
				cin >> r;
				float areahemsph;
				areahemsph = areahemisphere(r);
				cout << "SURFACE AREA OF THE HEMISPHERE" << "\t=\t" << areahemsph << '\n';
			}
		}
		else if (functionselected == 6)
		{
			int volumefunction;
			volumefunction = volumeofobjects();
			if (volumefunction > 10 || volumefunction <= 0)
			{
				cout << "INVALID SELECTION" << endl;
			}
			else if (volumefunction == 1)
			{
				float b;
				cout << "PLEASE ENTER THE LENGTH OF THE CUBE";
				cout << endl;
				cin >> b;
				float vcub;
				vcub = volumecube(b);
				cout << "VOLUME OF THE CUBE" << "\t=\t" << vcub << endl;
			}
			else if (volumefunction == 2)
			{
				float a, b, h;
				cout << "PLEASE ENTER THE LENGTH OF THE CUBOID";
				cout << endl;
				cin >> a;
				cout << "PLEASE ENTER THE WIDTH OF THE CUBOID";
				cout << endl;
				cin >> b;
				cout << "PLEASE ENTER THE HEIGHT OF THE CUBOID";
				cout << endl;
				cin >> h;
				float vcubo;
				vcubo = volumecuboid(b, a, h);
				cout << "VOLUME OF THE CUBOID" << "\t=\t" << vcubo << endl;
			}
			else if (volumefunction == 3)
			{
				float r, h;
				cout << "PLEASE ENTER THE RADIUS OF THE CYLINDER";
				cout << endl;
				cin >> r;
				cout << "PLEASE ENTER THE HEIGHT OF THE CYLINDER";
				cout << endl;
				cin >> h;
				float vcyl;
				vcyl = volumecylinder(r, h);
				cout << "VOLUME OF THE CYLINDER" << "\t=\t" << vcyl << endl;
			}
			else if (volumefunction == 4)
			{
				float r, h;
				cout << "PLEASE ENTER THE RADIUS OF THE CONE";
				cout << endl;
				cin >> r;
				cout << "PLEASE ENTER THE HEIGHT OF THE CONE";
				cout << endl;
				cin >> h;
				float vcon;
				vcon = volumecone(r, h);
				cout << "VOLUME OF THE CONE" << "\t=\t" << vcon << endl;
			}
			else if (volumefunction == 5)
			{
				float r;
				cout << "PLEASE ENTER THE RADIUS OF THE SPHERE";
				cout << endl;
				cin >> r;
				float vsph;
				vsph = volumesphere(r);
				cout << "VOLUME OF THE SPHERE" << "\t=\t" << vsph << endl;
			}
			else if (volumefunction == 6)
			{
				float r;
				cout << "PLEASE ENTER THE RADIUS OF THE HEMISPHERE";
				cout << endl;
				cin >> r;
				float vhem;
				vhem = volumehemisphere(r);
				cout << "VOLUME OF THE HEMISPHERE" << "\t=\t" << vhem << endl;
			}
			else if (volumefunction == 7)
			{
				float b, h;
				cout << "PLEASE ENTER THE LENGTH OF BASE OF THE PYRAMID";
				cout << endl;
				cin >> b;
				cout << "PLEASE ENTER THE HEIGHT OF THE PYRAMID";
				cout << endl;
				cin >> h;
				float vsqpy;
				vsqpy = volumesqrpyramid(b, h);
				cout << "VOLUME OF THE PYRAMID" << "\t=\t" << vsqpy << endl;
			}
			else if (volumefunction == 8)
			{
				float a, b, h;
				cout << "PLEASE ENTER THE LENGTH OF BASE OF THE PYRAMID";
				cout << endl;
				cin >> a;
				cout << "PLEASE ENTER THE WIDTH OF BASE OF THE PYRAMID";
				cout << endl;
				cin >> b;
				cout << "PLEASE ENTER THE HEIGHT OF THE PYRAMID";
				cout << endl;
				cin >> h;
				float vrecpy;
				vrecpy = volumerecpyramid(a, b, h);
				cout << "VOLUME OF THE PYRAMID" << "\t=\t" << vrecpy << endl;
			}
			else if (volumefunction == 9)
			{
				float a, b, h;
				cout << "PLEASE ENTER THE LENGTH OF BASE OF THE PYRAMID";
				cout << endl;
				cin >> a;
				cout << "PLEASE ENTER THE HEIGHT OF BASE OF THE PYRAMID";
				cout << endl;
				cin >> b;
				cout << "PLEASE ENTER THE HEIGHT OF THE PYRAMID";
				cout << endl;
				cin >> h;
				float vtripy;
				vtripy = volumetripyramid(a, b, h);
				cout << "VOLUME OF THE PYRAMID" << "\t=\t" << vtripy << endl;
			}
			else if (volumefunction == 10)
			{
				float a, b, h;
				cout << "PLEASE ENTER THE LENGTH OF BASE OF TRIANGLE";
				cout << endl;
				cin >> a;
				cout << "PLEASE ENTER THE HEIGHT OF THE PRISM";
				cout << endl;
				cin >> b;
				cout << "PLEASE ENTER THE LENGTH OF THE PRISM";
				cout << endl;
				cin >> h;
				float vpris;
				vpris = volumeprism(a, b, h);
				cout << "VOLUME OF THE PRISM" << "\t=\t" << vpris << endl;
			}
		}
		else if (functionselected == 7)
		{
			float w, h;
			cout << "PLEASE ENTER YOUR WEIGHT IN KG";
			cout << endl;
			cin >> w;
			cout << "PLEASE ENTER YOUR HEIGHT IN METERS";
			cout << endl;
			cin >> h;
			double bmin;
			bmin = bmi(w, h);
			cout << "YOUR BODY MASS INDEX IS" << "\t=\t" << bmin << '\n';
			if (bmin == 0)
			{
				cout << "THERE IS NO SUCH BMI" << endl;
			}
			else if (bmin >= 30.0)
			{
				cout << "YOU ARE OBESE" << endl;
			}
			else if (bmin <= 29.9 && bmin >= 24.9)
			{
				cout << "YOU ARE OVERWEIGHT" << endl;
			}
			else if (bmin >= 18.5 && bmin < 24.9)
			{
				cout << "YOU HAVE HEALTHY WEIGHT" << endl;
			}
			else
			{
				cout << "YOU ARE UNDERWEIGHT" << endl;
			}
		}
		else if (functionselected == 8)
		{
			int unitsconversion;
			unitsconversion = unitconversion();
			if (unitsconversion <= 0 || unitsconversion > 5)
			{
				cout << "INVALID SELECTION" << endl;
			}
			else if (unitsconversion == 1)
			{
				int lengthconversion;
				lengthconversion = conversionoflength();
				if (lengthconversion <= 0 || lengthconversion > 10)
				{
					cout << "INVALID SELECTION" << endl;
				}
				else if (lengthconversion == 1)
				{
					float x;
					cout << "PLEASE ENTER LENGTH IN KILOMETERS";
					cout << endl;
					cin >> x;
					float kilotom;
					kilotom = convertkmtom(x);
					cout << "LENGTH OF X IN METERS" << "\t=\t" << kilotom << endl;
				}
				else if (lengthconversion == 2)
				{
					float x;
					cout << "PLEASE ENTER LENGTH IN HECTOMETERS";
					cout << endl;
					cin >> x;
					float hectom;
					hectom = convertHmtom(x);
					cout << "LENGTH OF X IN METERS" << "\t=\t" << hectom << endl;
				}
				else if (lengthconversion == 3)
				{
					float x;
					cout << "PLEASE ENTER LENGTH IN DECAMETERS";
					cout << endl;
					cin >> x;
					float decatom;
					decatom = convertDmtom(x);
					cout << "LENGTH OF X IN METERS" << "\t=\t" << decatom << endl;
				}
				else if (lengthconversion == 4)
				{
					float x;
					cout << "PLEASE ENTER LENGTH IN DECIMETERS";
					cout << endl;
					cin >> x;
					float decitom;
					decitom = convertdmtom(x);
					cout << "LENGTH OF X IN METERS" << "\t=\t" << decitom << endl;
				}
				else if (lengthconversion == 5)
				{
					float x;
					cout << "PLEASE ENTER LENGTH IN CENTIMETERS";
					cout << endl;
					cin >> x;
					float centom;
					centom = convertcmtom(x);
					cout << "LENGTH OF X IN METERS" << "\t=\t" << centom << endl;
				}
				else if (lengthconversion == 6)
				{
					float x;
					cout << "PLEASE ENTER LENGTH IN MILLIMETERS";
					cout << endl;
					cin >> x;
					float millitom;
					millitom = convertmmtom(x);
					cout << "LENGTH OF X IN METERS" << "\t=\t" << millitom << endl;
				}
				else if (lengthconversion == 7)
				{
					float x;
					cout << "PLEASE ENTER LENGTH IN INCHES";
					cout << endl;
					cin >> x;
					float inchtoms;
					inchtoms = convertinchtom(x);
					cout << "LENGTH OF X IN METERS" << "\t=\t" << inchtoms << endl;
				}
				else if (lengthconversion == 8)
				{
					float x;
					cout << "PLEASE ENTER LENGTH IN FEET";
					cout << endl;
					cin >> x;
					float fttoms;
					fttoms = convertmiletom(x);
					cout << "LENGTH OF X IN METERS" << "\t=\t" << fttoms << endl;
				}
				else if (lengthconversion == 9)
				{
					float x;
					cout << "PLEASE ENTER LENGTH IN MILES";
					cout << endl;
					cin >> x;
					float miltoms;
					miltoms = convertinchtom(x);
					cout << "LENGTH OF X IN METERS" << "\t=\t" << miltoms << endl;
				}
				else if (lengthconversion == 10)
				{
					float x;
					cout << "PLEASE ENTER LENGTH IN YARDS";
					cout << endl;
					cin >> x;
					float ydtoms;
					ydtoms = convertinchtom(x);
					cout << "LENGTH OF X IN METERS" << "\t=\t" << ydtoms << endl;
				}
			}
			else if (unitsconversion == 2)
			{
				int massconversion;
				massconversion = conversionofmass();
				if (massconversion <= 0 || massconversion > 8)
				{
					cout << "INVALID SELECTION" << endl;
				}
				else if (massconversion == 1)
				{
					float x;
					cout << "PLEASE ENTER MASS IN KILOGRAMS";
					cout << endl;
					cin >> x;
					float kGtog;
					kGtog = convertkgtog(x);
					cout << "MASS OF X IN GRAMS" << "\t=\t" << kGtog << endl;
				}
				else if (massconversion == 2)
				{
					float x;
					cout << "PLEASE ENTER MASS IN HECTGRAMS";
					cout << endl;
					cin >> x;
					float hgtog;
					hgtog = convertHgtog(x);
					cout << "MASS OF X IN GRAMS" << "\t=\t" << hgtog << endl;
				}
				else if (massconversion == 3)
				{
					float x;
					cout << "PLEASE ENTER MASS IN DECAGRAMS";
					cout << endl;
					cin >> x;
					float dgtog;
					dgtog = convertDgtog(x);
					cout << "MASS OF X IN GRAMS" << "\t=\t" << dgtog << endl;
				}
				else if (massconversion == 4)
				{
					float x;
					cout << "PLEASE ENTER LENGTH IN DECIGRAMS";
					cout << endl;
					cin >> x;
					float decitog;
					decitog = convertdmtom(x);
					cout << "MASS OF X IN GRAMS" << "\t=\t" << decitog << endl;
				}
				else if (massconversion == 5)
				{
					float x;
					cout << "PLEASE ENTER MASS IN CENTIGRAMS";
					cout << endl;
					cin >> x;
					float cgtog;
					cgtog = convertcgtog(x);
					cout << "MASS OF X IN GRAMS" << "\t = \t" << cgtog << endl;
				}
				else if (massconversion == 6)
				{
					float x;
					cout << "PLEASE ENTER MASS IN MILLIGRAMS";
					cout << endl;
					cin >> x;
					float mgtog;
					mgtog = convertmgtog(x);
					cout << "MASS OF X IN GRAMS" << "\t=\t" << mgtog << endl;
				}
				else if (massconversion == 7)
				{
					float x;
					cout << "PLEASE ENTER MASS IN TONNES";
					cout << endl;
					cin >> x;
					float tontokg;
					tontokg = converttonnestokg(x);
					cout << "MASS OF X IN KILOGRAMS" << "\t=\t" << tontokg << endl;
				}
				else if (massconversion == 8)
				{
					float x;
					cout << "PLEASE ENTER MASS IN POUNDS";
					cout << endl;
					cin >> x;
					float pntokg;
					pntokg = convertmiletom(x);
					cout << "MASS OF X IN KILOGRAMS" << "\t = \t" << pntokg << endl;
				}
			}
			else if (unitsconversion == 3)
			{
				int timeconversion;
				timeconversion = conversionoftime();
				if (timeconversion <= 0 || timeconversion > 8)
				{
					cout << "INVALID SELECTION" << endl;
				}
				else if (timeconversion == 1)
				{
					float x;
					cout << "PLEASE ENTER THE TIME IN MINUTES";
					cout << endl;
					cin >> x;
					float mintosec;
					mintosec = convertmintos(x);
					cout << "TIME IN SECONDS" << "\t=\t" << mintosec << endl;
				}
				else if (timeconversion == 2)
				{
					float x;
					cout << "PLEASE ENTER THE TIME IN HOURS";
					cout << endl;
					cin >> x;
					float htomin;
					htomin = converthrstomin(x);
					cout << "TIME IN MINUTES" << "\t=\t" << htomin << endl;
				}
				else if (timeconversion == 3)
				{
					float x;
					cout << "PLEASE ENTER THE TIME IN DAYS ";
					cout << endl;
					cin >> x;
					float daytohr;
					daytohr = convertdaystohrs(x);
					cout << "TIME IN HOURS" << "\t=\t" << daytohr << endl;
				}
				else if (timeconversion == 4)
				{
					float x;
					cout << "PLEASE ENTER THE TIME IN WEEKS";
					cout << endl;
					cin >> x;
					float wktody;
					wktody = convertweekstodays(x);
					cout << "TIME IN DAYS" << "\t=\t" << wktody << endl;
				}
				else if (timeconversion == 5)
				{
					float x;
					cout << "PLEASE ENTER THE TIME IN YEARS ";
					cout << endl;
					cin >> x;
					float yrstomon;
					yrstomon = convertyearstomonths(x);
					cout << "TIME IN MONTHS" << "\t=\t" << yrstomon << endl;
				}
				else if (timeconversion == 6)
				{
					float x;
					cout << "PLEASE ENTER THE TIME IN DECADES ";
					cout << endl;
					cin >> x;
					float dectoyrs;
					dectoyrs = convertdecadestoyears(x);
					cout << "TIME IN YEARS" << "\t=\t" << dectoyrs << endl;
				}
				else if (timeconversion == 7)
				{
					float x;
					cout << "PLEASE ENTER THE TIME IN CENTURIES ";
					cout << endl;
					cin >> x;
					float centoyrs;
					centoyrs = convertcenturiestoyears(x);
					cout << "TIME IN YEARS" << "\t=\t" << centoyrs << endl;
				}
				else if (timeconversion == 8)
				{
					float x;
					cout << "PLEASE ENTER THE TIME IN MILLENIUM ";
					cout << endl;
					cin >> x;
					float miltoyrs;
					miltoyrs = convertmilleniumtoyears(x);
					cout << "TIME IN YEARS" << "\t=\t" << miltoyrs << endl;
				}
			}
			else if (unitsconversion == 4)
			{
				int areaconversion;
				areaconversion = conversionofarea();
				if (areaconversion <= 0 || areaconversion > 8)
				{
					cout << "INVALID SELECTION" << endl;
				}
				else if (areaconversion == 1)
				{
					double x;
					cout << "PLEASE ENTER THE AREA";
					cout << endl;
					cin >> x;
					double hatosq;
					hatosq = converthatosqrm(x);
					cout << "THE AREA IN SQUARE METERS" << "\t=\t" << hatosq << endl;
				}
				else if (areaconversion == 2)
				{
					double x;
					cout << "PLEASE ENTER THE AREA";
					cout << endl;
					cin >> x;
					double actosq;
					actosq = convertacretosqrm(x);
					cout << "THE AREA IN SQUARE METERS" << "\t=\t" << actosq << endl;
				}
				else if (areaconversion == 3)
				{
					double x;
					cout << "PLEASE ENTER THE AREA";
					cout << endl;
					cin >> x;
					double artosq;
					artosq = convertarestosqrm(x);
					cout << "THE AREA IN SQUARE METERS" << "\t=\t" << artosq << endl;
				}
				else if (areaconversion == 3)
				{
					double x;
					cout << "PLEASE ENTER THE AREA";
					cout << endl;
					cin >> x;
					double artosq;
					artosq = convertarestosqrm(x);
					cout << "THE AREA IN SQUARE METERS" << "\t=\t" << artosq << endl;
				}
				else if (areaconversion == 4)
				{
					double x;
					cout << "PLEASE ENTER THE AREA";
					cout << endl;
					cin >> x;
					double hatoac;
					hatoac = convertarestosqrm(x);
					cout << "THE AREA IN ACRES" << "\t=\t" << hatoac << endl;
				}
				else if (areaconversion == 3)
				{
					double x;
					cout << "PLEASE ENTER THE AREA";
					cout << endl;
					cin >> x;
					double dectosq;
					dectosq = convertdectosqrm(x);
					cout << "THE AREA IN SQUARE METERS" << "\t=\t" << dectosq << endl;
				}
				else if (areaconversion == 6)
				{
					double x;
					cout << "PLEASE ENTER THE AREA";
					cout << endl;
					cin >> x;
					double rdtosq;
					rdtosq = convertroodtosqrm(x);
					cout << "THE AREA IN SQUARE METERS" << "\t=\t" << rdtosq << endl;
				}
				else if (areaconversion == 7)
				{
					double x;
					cout << "PLEASE ENTER THE AREA";
					cout << endl;
					cin >> x;
					double chtosq;
					chtosq = convertsqrchtosqrm(x);
					cout << "THE AREA IN SQUARE METERS" << "\t=\t" << chtosq << endl;
				}
				else if (areaconversion == 8)
				{
					double x;
					cout << "PLEASE ENTER THE AREA";
					cout << endl;
					cin >> x;
					double rdtosq;
					rdtosq = convertsqrdtosqrm(x);
					cout << "THE AREA IN SQUARE METERS" << "\t=\t" << rdtosq << endl;
				}
				else if (areaconversion == 9)
				{
					double x;
					cout << "PLEASE ENTER THE AREA";
					cout << endl;
					cin >> x;
					double thtosq;
					thtosq = convertsqrthtosqrn(x);
					cout << "THE AREA IN SQUARE METERS" << "\t=\t" << thtosq << endl;
				}
			}
		}
		else if (functionselected == 9)
		{
			int money;
			money = commercialarithmetic();
			if (money > 5 || money <= 0)
			{
				cout << "INVALID SELECTION" << endl;
			}
			else if (money == 1)
			{
				double p, r, t;
				cout << "INPUT THE PRINCIPAL AMOUNT";
				cout << endl;
				cin >> p;
				cout << "INPUT THE RATE OF INTEREST";
				cout << endl;
				cin >> r;
				cout << "INPUT THE TIME IN YEARS TO GAIN INTEREST";
				cout << endl;
				cin >> t;
				double simple;
				simple = simpleinterest(p, r, t);
				cout << "SIMPLE INTEREST" << "\t=\t" << simple << "\nAMOUNT" << "\t=\t" << "SIMPLE + PRINCIPAL" << endl;
			}
			else if (money == 2)
			{
				double p, r, t, n, a, b, c, amount;
				cout << "INPUT THE PRINCIPAL AMOUNT";
				cout << endl;
				cin >> p;
				cout << "INPUT THE RATE OF INTEREST";
				cout << endl;
				cin >> r;
				cout << "INPUT THE TIME IN YEARS TO GAIN INTEREST";
				cout << endl;
				cin >> t;
				cout << "INPUT THE NUMBER OF TIMES INTEREST IS GAINED EACH PERIOD";
				cout << endl;
				cin >> n;
				a = compoundinterest(r, n);
				b = (n * t);
				amount = p * pow(a, b);
				c = amount - p;
				cout << "AMOUNT" << "\t=\t" << amount << "\n COMPOUND INTEREST" << "\t=\t" << c << endl;
			}
			else if (money == 3)
			{
				double d, a, t, hpp;
				cout << "INPUT THE DEPOSIT";
				cout << endl;
				cin >> d;
				cout << "INPUT THE AMOUNT OF EACH INSTALMENT";
				cout << endl;
				cin >> a;
				cout << "INPUT THE TIME TAKEN TO PAY INSTALMENTS";
				cout << endl;
				cin >> t;
				hpp = hirepurchase(d, a, t);
				cout << "THE HIRE PURCHASE PRICE" << "\t=\t" << hpp << endl;
			}
			else if (money == 4)
			{
				double p, r, t, appre;
				cout << "ENTER THE ORIGINAL PRICE";
				cout << endl;
				cin >> p;
				cout << "ENTER THE RATE";
				cout << endl;
				cin >> r;
				cout << "ENTER THE INCREASING PERIOD";
				cout << endl;
				cin >> t;
				appre = appreciation(p, r, t);
				cout << "NEW PRICE" << "\t=\t" << appre << endl;
			}
			else if (money == 5)
			{
				double p, r, t, depre;
				cout << "ENTER THE ORIGINAL PRICE";
				cout << endl;
				cin >> p;
				cout << "ENTER THE RATE";
				cout << endl;
				cin >> r;
				cout << "ENTER THE DECREASING PERIOD";
				cout << endl;
				cin >> t;
				depre = depreciation(p, r, t);
				cout << "NEW PRICE" << "\t=\t" << depre << endl;
			}
		}
	}
}