//Author: James Whitcomb-Weston
#include <iostream>
#include <vector>
#include "bitmap.h"
using namespace std;

int main() {
Bitmap image;
vector <vector <Pixel> > bmp;
Pixel rgb;
string filename = "";



cout << "File to Open\n";
cin >> filename;
image.open(filename);

  bool validBmp = image.isImage();

  if( validBmp == true )
  {
cout <<"succesfully opened";
    bmp = image.toPixelMatrix();
rgb = bmp[0][0];
  }
  
  return 0;
}
