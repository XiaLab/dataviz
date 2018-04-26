//
//  DFIShapeLine.h
//  DFI
//
//  Created by vanney on 2017/4/24.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*********************************************
 * D3 Shape Line                             *
 *********************************************/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DFIShapeCurveBase.h"

@class DFIShapeCurveBase;
@class DFIPath;
@class DFIDSVParseResult;

@interface DFIShapeLine : NSObject

/**
 * 给line构造器添加数据
 * @param data
 */
- (void)loadLineWithData:(NSArray *)data;

/**
 * 使用dsv解析的结果来填充数据，最终还是调用的 loadLineWithData 方法
 * @param result
 */
- (void)loadLineWithDSVParseResult:(DFIDSVParseResult *)result;

/*
 * 指定两点之间的线的类型
 */
@property (nonatomic, assign) DFIShapeCurveType curveType;

/*
 * line的贝塞尔曲线
 * 注意：这个变量命名有点奇怪，不要和你所理解的context上下文弄混了
 * 注意：正常来说，这个变量是不指定的，由内部自动生成
 */
@property (nonatomic, strong) DFIPath *context;

/*
 * 用来求x的函数
 */
@property (nonatomic, copy) CGFloat (^x)(id point);

/*
 * 用来求y的函数
 */
@property (nonatomic, copy) CGFloat (^y)(id point);

/*
 * 不是很清楚，貌似是用来说明该点有没有被定义
 */
@property (nonatomic, copy) BOOL (^defined)(id data);
@end
