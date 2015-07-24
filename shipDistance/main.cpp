//
//  main.cpp
//  shipDistance
//
//  Created by ZENJU Daisuke on 2015/07/23.
//  Copyright (c) 2015年 ZENJU Daisuke. All rights reserved.
//

// mouseの実装

#include <iostream>
#include "opencv2/opencv.hpp"

#include "calcDistance.h"
#include "mouse.h"


using namespace std;

int main(int argc, const char * argv[]) {
    
    // キャプチャー画像表示準備
    cv::Mat frame;
    cv::VideoCapture capture(0);
    cv::namedWindow("Frame", CV_WINDOW_AUTOSIZE | CV_WINDOW_FREERATIO);
    
    // マウスイベント準備
    cv::setMouseCallback("Frame", &onMouse);
    mouse_t point, oldpoint;
    
    // キャプチャー表示
    while (cv::waitKey(1) != 'q') {
        capture >> frame;
        
        // マウスイベント
        point = mousePoint();
        if(oldpoint.flag == 0 && point.flag == 1)
            cout << calcDistance(point.x, point.y) << endl;
        oldpoint = point;
        
        cv::imshow("Frame", frame);
    }
    
    return 0;
}