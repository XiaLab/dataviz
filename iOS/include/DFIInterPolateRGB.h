//
//  DFIInterPolateRGB.h
//  DFI
//
//  Created by vanney on 2017/5/5.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*********************************************
 * D3 Interpolate RGB                        *
 * RGB插值算法 线性插值和B-spline插值          啊*
 *********************************************/

#import "DFIInterpolateBase.h"
#import <UIKit/UIKit.h>

@class DFIColor;

@interface DFIInterPolateRGB : DFIInterpolateBase

@property (nonatomic, assign) CGFloat gamma;

/**
 * 传入开始和结束的颜色format，生成处理插值的InterpolateRGB对象，默认的gamma为1
 * @param startColor
 * @param endColor
 * @return
 */
- (instancetype)initWithStart:(NSString *)startColorFormat andEnd:(NSString *)endColorFormat;

/**
 * 全局初始化函数
 * @param startColorFormat
 * @param endColorFormat
 * @param y
 * @return
 */
- (instancetype)initWithStart:(NSString *)startColorFormat andEnd:(NSString *)endColorFormat andGamma:(CGFloat)gamma;

/** 以 B-spline 插值的两种方式 */
- (instancetype)initBasisWithColors:(NSArray *)colors;
- (instancetype)initBasisClosedWithColors:(NSArray *)colors;

/**
 * 根据插值t(0-1)之间，来计算start color 和 end color之间的特定颜色值
 * @param t
 * @return
 */
- (DFIColor *)interpolate:(CGFloat)t;

@end
