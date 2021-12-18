#include <iostream>
#include <cmath>
#include "imageio.h"
#include "funcs.h"

/*
@param input - name of input pgm file
@param output - desired name of output pgm file

Inverts the colors of input.pgm. Creates a file output.pgm
*/
void invert(std::string input, std::string output) {
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w);

  int out[MAX_H][MAX_W];

  for(int row = 0; row < h; row++) {
    for(int col = 0; col < w; col++) {
      out[row][col] = (255 - img[row][col]);
    }
  }

  writeImage(output,out, h, w);

  return;
}

/*
@param input - name of input pgm file
@param output - desired name of output pgm file

Inverts the right half of input.pgm. Creates a file output.pgm
*/
void invertHalf(std::string input, std::string output) {
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w);

  int out[MAX_H][MAX_W];

  for(int row = 0; row < h; row++) {
    for(int col = 0; col < w; col++) {
      if (col >= w/2) {
        out[row][col] = (255 - img[row][col]);
      } else {
        out[row][col] = img[row][col];
      }
    }
  }

  writeImage(output,out, h, w);

  return;
}

/*
@param input - name of input pgm file
@param output - desired name of output pgm file

Creates a white box in the middle of the image with
dimension 50% width by 50% height. Creates a file output.pgm
*/
void box(std::string input, std::string output) {
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w);

  int out[MAX_H][MAX_W];

  for(int row = 0; row < h; row++) {
    for(int col = 0; col < w; col++) {
      if((row > (.25 * h)) && (row < (.75 * h)) &&
        (col > (.25 * w)) && (col < (.75 * w))) {
          out[row][col] = 255;
        } else {
          out[row][col] = img[row][col];
      }
    }
  }

  writeImage(output,out, h, w);

  return;
}

/*
@param input - name of input pgm file
@param output - desired name of output pgm file

Will create a frame one pixel thick on the border of a square with
50% width and height centered at the center of input.pgm. Creates a
file output.pgm
*/
void frame(std::string input, std::string output) {
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w);

  int out[MAX_H][MAX_W];

  for(int row = 0; row < h; row++) {
    for(int col = 0; col < w; col++) {
      //Creates a white box in the square area
      if((row > (.25 * h)) && (row < (.75 * h)) &&
        (col > (.25 * w)) && (col < (.75 * w))) {
          out[row][col] = 255;
        } else {
          out[row][col] = img[row][col];
      }

      //replaces white pixels with original pixles inside the frame area
      if((row > ((.25 * h) + 1)) && (row < ((.75 * h)) - 1) &&
        (col > ((.25 * w)) + 1) && (col < ((.75 * w) - 1))) {
          out[row][col] = img[row][col];
        }
    }
  }

  writeImage(output,out, h, w);

  return;
}

/*
@param input - name of input pgm file
@param output - desired name of output pgm file

Scales the image file input.pgm by 200%. Creates a file output.pgm
*/
void scale(std::string input, std::string output) {
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w);

  int out[MAX_H][MAX_W];

  int orig_row = 0;
  int orig_col = 0;
  for(int row = 0; row < 2*h; row+=2) {
    for(int col = 0; col < 2*w; col+=2) {
      out[row][col] = img[orig_row][orig_col];
      out[row+1][col+1] = img[orig_row][orig_col];
      out[row][col+1] = img[orig_row][orig_col];
      out[row+1][col] = img[orig_row][orig_col];
      orig_col++;
    }
    orig_row++;
    orig_col = 0;
  }

  writeImage(output,out, 2*h, 2*w);

  return;
}

/*
@param input - name of input pgm file
@param output - desired name of output pgm file

Pixeleates input.pgm by averaging input in a 2x2 window. Creates a
file output.pgm
*/
void pixelate(std::string input, std::string output) {
  int img[MAX_H][MAX_W];
  int h, w;
  readImage(input, img, h, w);

  int out[MAX_H][MAX_W];


  for(int row = 0; row < h; row+=2) {
    for(int col = 0; col < w; col+=2) {
      //numerator for average
      int num = (img[row][col] + img[row+1][col+1] + img[row][col+1] + img[row+1][col]);
      int avg = round(num/4);

      out[row][col] = avg;
      out[row+1][col+1] = avg;
      out[row][col+1] = avg;
      out[row+1][col] = avg;
    }
  }

  writeImage(output,out, h, w);

  return;

}
