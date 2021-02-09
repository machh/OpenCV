#include <opencv2\opencv.hpp> 
#include <iostream>

using namespace std;
using namespace cv;   

int main(int argc, char ** argv) 
{
	Mat img;   
	img = imread("d:/opencv/cat.png");  
	if (img.empty())  
	{
		cout << "file error!" << endl;
		return -1;
	}
	imshow("test", img);  
	waitKey(0);  
	return 0;   
}
