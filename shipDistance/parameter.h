//
//  parameter.h
//  shipDistance
//
//  Created by ZENJU Daisuke on 2015/07/23.
//  Copyright (c) 2015年 ZENJU Daisuke. All rights reserved.
//

#ifndef shipDistance_parameter_h
#define shipDistance_parameter_h


#endif

typedef struct {
    double height = 23;       // 撮影高度
    double focalPoint = 0.018;   // 焦点距離
    double x_px = 0.0235 / 4912;    // x軸の長さ[mm]/px
    double y_px = 0.0156 / 3264;    // y軸の長さ[mm]/px};
} camera_t;

typedef struct {
    double horizon = 596;   // 水平線px
    double width = 1920; // 画像（width）の長さ
    double height = 1080; // 画像（height）の長さ
} picture_t;

typedef struct {
    int x;
    int y;
    int flag;
} mouse_t;