#include <stdio.h>
#include <omp.h>
#include <stdlib.h>
#include <sys/time.h>
#include <time.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <opencv/cv.h>
#include <opencv/highgui.h>


int main( int argc, char** argv ) {
    char imagem[30];
    strcpy(imagem,"coracao.jpg");
// cvLoadImage determines an image type and creates datastructure with appropriate size
    IplImage* img = cvLoadImage(imagem);
// create a window. Window name is determined by a supplied argument
    cvNamedWindow(imagem, CV_WINDOW_AUTOSIZE );
// Display an image inside and window. Window name is determined by a supplied argument
    cvShowImage(imagem, img );
// wait indefinitely for keystroke
    cvWaitKey(0);

// release pointer to an object
    cvReleaseImage( &img );
// Destroy a window
    cvDestroyWindow(imagem);
}
