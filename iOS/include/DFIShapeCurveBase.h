//
//  DFIShapeCurveBase.h
//  DFI
//
//  Created by vanney on 2017/4/24.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*********************************************
 * D3 Shape Curve Base                       *
 * line两点间的线的类型的基类啊                  *
 *********************************************/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, DFIShapeCurveType) {
    DFIShapeCurveTypeLinear = 0,
    DFIShapeCurveTypeStep,
};

@class DFIPath;

@interface DFIShapeCurveBase : NSObject

@property (nonatomic, strong) DFIPath *context;
@property (nonatomic, assign) CGFloat line;

// point为0，1，2；用来表示line的当前状态：是处于第一个点，还是后续的点
@property (nonatomic, assign) int point;

/**
 * 使用类族创建curve
 * @param type
 * @return
 */
+ (DFIShapeCurveBase *)curveWithType:(DFIShapeCurveType)type;

/**
 * 初始化之后，记得要先调用带函数，指定一个context
 * @param path
 */
- (void)loadPath:(DFIPath *)path;

- (void)areaStart;
- (void)areaEnd;
- (void)lineStart;
- (void)lineEnd;
- (void)point:(CGPoint)point;

@end
