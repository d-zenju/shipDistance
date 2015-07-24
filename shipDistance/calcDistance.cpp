//
//  calcDistance.cpp
//  shipDistance
//
//  Created by ZENJU Daisuke on 2015/07/23.
//  Copyright (c) 2015年 ZENJU Daisuke. All rights reserved.
//

#include "calcDistance.h"
#include "parameter.h"

double calcDistance(int x_ship, int y_ship)
{
    camera_t camera;
    picture_t picture;
    
    // 水平線と中心座標の角度
    double a = atan2(picture.horizon * camera.y_px, camera.focalPoint);
    
    // 船舶のy座標と中心座標の角度
    double b = atan2(y_ship * camera.y_px, camera.focalPoint);
    
    // 水平線と船舶のy座標の角度差
    double c = b - a;
    
    // 正船首方向距離[m]
    double z = camera.height / tan(c);
    
    // 正横方向距離[m]
    double x = camera.x_px * (x_ship - (picture.width / 2)) * z / camera.focalPoint;
    
    // 船舶距離[m]
    double distance = sqrt(z * z + x * x);
    
    return distance;
}