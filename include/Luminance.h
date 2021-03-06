#ifndef __LUMINANCE_H_INCLUDED__
#define __LUMINANCE_H_INCLUDED__

#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

Mat Luminance(Mat *image);
float channelMean(Mat *channel);
float meanLuminance(Mat *image, const Size *finalResolution);

#endif