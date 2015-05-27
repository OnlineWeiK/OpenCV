#include <opencv2\opencv.hpp>
#include <opencv\cv.h>
#include <opencv\highgui.h>
#include <iostream>
#include <string>
using namespace cv;
using namespace std;
int main()
{

	char* imageName = "blacksister.jpg";

	Mat img = imread(imageName);
	if (img.empty())
	{
		cout << "error";
		return -1;
	}

	Mat gray_image;
	cvtColor(img, gray_image, CV_BGR2GRAY);
	imwrite("Gray_Image.jpg", gray_image);

	//namedWindow(imageName, CV_WINDOW_AUTOSIZE);
	//namedWindow("Gray image", CV_WINDOW_AUTOSIZE);

	imshow("Ô­Ê¼Í¼Ïñ", img);
	imshow("»Ò¶ÈÍ¼Ïñ", gray_image);

	
	waitKey(0);

	return 0;
}