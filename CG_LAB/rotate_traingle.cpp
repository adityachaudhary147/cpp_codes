#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;
#define pb push_back
const double PI = acos(-1);
int n = 3; //no of vertices (sides of polygon)
float thetha = 0;
vector<vector<float>> polygon, RotationMatrix, translatedPolygon;
void ddaLine(float x1, float y1, float x2, float y2) {
float dx = x2 - x1, dy = y2 - y1;
float steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
float xinc = dx * 1.0 / steps;
float yinc = dy * 1.0 / steps;
putpixel(round(x1), round(y1), WHITE);
for (int i = 0; i < steps; i++) {
x1 += xinc;
y1 += yinc;
putpixel(round(x1), round(y1), WHITE);
}
}
void drawPolygon() {
for (int i = 0; i < n; i++) {
float x1 = polygon[i][0], y1 = polygon[i][1];
float x2 = polygon[(i + 1) % n][0], y2 = polygon[(i + 1) % n][1];
ddaLine(x1, y1, x2, y2);
}
}
void generateRotationMatrix() {
thetha = thetha / 180 * PI;
RotationMatrix.pb({cos(thetha), sin(thetha), 0});
RotationMatrix.pb({ -sin(thetha), cos(thetha), 0});
RotationMatrix.pb({0, 0, 1});
}
void performRotation() {
translatedPolygon.clear();
vector<float> temp(3, 0);
for (int i = 0; i < n; i++) {
for (int j = 0; j < 3; j++) {
temp[j] = polygon[i][0] * RotationMatrix[0][j]
+ polygon[i][1] * RotationMatrix[1][j]
+ polygon[i][2] * RotationMatrix[2][j];
}
translatedPolygon.pb(temp);
}
polygon = translatedPolygon;
}
void inputPointsOfPolygon() {
polygon.clear();
cout << "Enter " << n << " points of triangle in cyclic order :\n";
for (int i = 0; i < n; i++) {
float x, y;
cin >> x >> y;
polygon.pb({x, y, 1});
}
}
int main() {
inputPointsOfPolygon();
int gd = DETECT, gm;
initgraph(&gd, &gm, "C:\\TC\\BGI");
drawPolygon();
cout << "Enter the Rotation angle in degrees(+ve:clockwise and -ve:anti-clockwise) :";
cin >> thetha;
cout << "\n(Rotation is done wrt Origin)";
generateRotationMatrix();
performRotation();
cout << "\n\nCo-ordinates after Rotation:\n";
for (auto t : polygon) {
cout << "(" << (int)round(t[0]) << ", " << (int)round(t[1]) << ")\n";
}
drawPolygon();
getch();
closegraph();
return 0;
}
