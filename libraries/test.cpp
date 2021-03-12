#include <vector>
#include "bitmap.h"

using namespace std;

int main()
{
  Bitmap image;
  vector <vector <Pixel> > bmp;
  Pixel rgb;

  //read a file example.bmp and convert it to a pixel matrix
  image.open("sample.bmp");

  //verify that the file opened was a valid image
  bool validBmp = image.isImage();

  if( validBmp == true )
  {
    bmp = image.toPixelMatrix();


    //take all the redness out of the top-left pixel
    rgb = bmp[2][0];
    rgb.red = 0;
    rgb.green = 0;
    rgb.blue = 0;


    //put changed image back into matrix, update the bitmap and save it
    bmp[2][0] = rgb;
    image.fromPixelMatrix(bmp);
    
    image.save("sample.bmp");
  }
  return 0;
}