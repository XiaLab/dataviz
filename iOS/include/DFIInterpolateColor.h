//
//  DFIInterpolateColor.h
//  DFI
//
//  Created by vanney on 2017/5/5.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*********************************************
 * D3 Interpolate Color                      *
 * D3 Color 插值辅助函数                       *
 *********************************************/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef CGFloat (^DFIInterpolateColorBlockType1)(CGFloat);
typedef DFIInterpolateColorBlockType1 (^DFIInterpolateColorBlockType2)(CGFloat, CGFloat);

@interface  DFIInterpolateColor : NSObject

+ (DFIInterpolateColorBlockType1)hueWithA:(CGFloat)a andB:(CGFloat)b;

+ (DFIInterpolateColorBlockType2)gamma:(CGFloat)y;

+ (DFIInterpolateColorBlockType1)nogammaWithA:(CGFloat)a andB:(CGFloat)b;

@end
