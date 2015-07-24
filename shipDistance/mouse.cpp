//
//  mouse.cpp
//  shipDistance
//
//  Created by ZENJU Daisuke on 2015/07/23.
//  Copyright (c) 2015年 ZENJU Daisuke. All rights reserved.
//

#include "mouse.h"

mouse_t point;

void onMouse(int event, int x, int y, int flag, void* param)
{
    // マウスイベント取得
    switch (event) {
        case cv::EVENT_MOUSEMOVE:
            point.x = x;
            point.y = y;
            point.flag = flag;
            break;
        case cv::EVENT_LBUTTONDOWN:
            point.x = x;
            point.y = y;
            point.flag = flag;
            break;
        default:
            break;
    }
}

mouse_t mousePoint()
{
    return point;
}