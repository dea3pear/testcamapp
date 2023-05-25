#include "opencv2\opencv.hpp"
#include "opencv2\highgui.hpp"
#include "opencv2\tracking.hpp"

int main() {

	// cameracapture
	cv::VideoCapture camcap(0);

	// no cam -> end program
	if (!camcap.isOpened()) return -1;

	cv::Mat frame;

	// display
	while (camcap.read(frame)) {

		cv::imshow("CamCap", frame);

		if (cv::waitKey(25) >= 0) break;

	} 
	camcap.release();

	cv::destroyAllWindows();

	return 0;

}