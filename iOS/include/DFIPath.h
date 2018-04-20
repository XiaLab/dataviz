//
//  DFIPath.h
//  DFI
//
//  Created by vanney on 2017/3/21.
//  Copyright © 2017年 vanney9. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface DFIPath : NSObject

/*
 * path属性
 */
@property (nonatomic, strong) UIBezierPath *path;

/*
 * moveTo : 移动到特定点
 */
- (DFIPath *)moveTo:(CGPoint)point;

/*
 * closePath : 关闭path
 */
- (DFIPath *)closePath;

/*
 * lineTo : 添加一条直线到特定点
 */
- (DFIPath *)lineTo:(CGPoint)point;

/**
 * 添加二次贝塞尔曲线
 * @param endPoint     终点
 * @param controlPoint 控制点
 */
- (DFIPath *)quadraticCurveTo:(CGPoint)endPoint withControl:(CGPoint)controlPoint;

/**
 * 添加三次贝塞尔曲线
 * @param endPoint 终点
 * @param point1   控制点1
 * @param point2   控制点2
 */
- (DFIPath *)bezierCurveTo:(CGPoint)endPoint withControl1:(CGPoint)point1 andControl2:(CGPoint)point2;

/**
 *
 * @param point1
 * @param point2
 * @param radius
 */
- (DFIPath *)arcTo:(CGPoint)point1 to:(CGPoint)point2 withRadius:(float)radius;

/**
 * 添加圆弧
 * @param center
 * @param startAngle
 * @param endAngle
 * @param radius
 * @param clockwise
 */
- (DFIPath *)arcWithCenter:(CGPoint)center startAngle:(float)startAngle endAngle:(float)endAngle andRadius:(float)radius clockwise:(BOOL)clockwise;

/**
 * 添加矩形
 * @param point  左上角
 * @param width  宽
 * @param height 高
 */
- (DFIPath *)rectWithPoint:(CGPoint)point width:(float)width andHeight:(float)height;
@end
