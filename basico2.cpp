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
#include <iostream>


int main(){
	cv::Mat frame = cv::Mat::zeros(16, 16, CV_8UC1);
	for(int row = 0; row < frame.rows; ++row){
		for(int col = 0; col < frame.cols; ++col){
			const	uchar pixel_value = (row+1)*(col+1) - 1;
			frame.at<uchar>(row,col) = pixel_value;
		}
	}
	cv::resize(frame, frame, cv::Size(256, 256), 0, 0,cv::INTER_LINEAR);
	cv::imshow("gradient", frame);
	cv::waitKey(0);
	return EXIT_SUCCESS;
}
