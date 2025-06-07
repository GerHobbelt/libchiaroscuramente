/*
    MIT License

    Copyright (c) 2017 Alexander Zaitsev

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
*/

#include "Smoothing.hpp"

#include "opencv2/imgproc.hpp"

void prl::smooth(const cv::Mat& src, cv::Mat& dst, SmoothMethod method /*= SmoothMethod::Bilateral*/)
{
    switch (method)
    {
        case SmoothMethod::Median:
            cv::medianBlur(src, dst, 5);
            break;
        case SmoothMethod::Gaussian:
            cv::GaussianBlur(src, dst, cv::Size(11, 11), 10, 30);
            break;
        case SmoothMethod::Bilateral:
            cv::bilateralFilter(src, dst, 5, 100, 100);
            break;
        default:
            //TODO: Implement new algorithms
            throw std::runtime_error("Smooth algorithm is not implemented yet");
    }
}