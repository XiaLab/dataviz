//
//  DFIShapeArea.h
//  DFI
//
//  Created by vanney on 2017/4/25.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*********************************************
 * D3 Shape Area                             *
 * D3基本图形 - Area 啊啊                      *
 * 本质就是由两条line构成的区域                  *
 *********************************************/

#import <Foundation/Foundation.h>
#import "DFIShapeCurveBase.h"

@interface DFIShapeArea : NSObject

/*
 * 两点之间的线的类型
 */
@property (nonatomic, assign) DFIShapeCurveType curveType;

/*
 * area的贝塞尔曲线
 */
@property (nonatomic, strong) DFIPath *context;

/*
 * 判断当前data是否定义了
 */
@property (nonatomic, copy) BOOL (^defined)(id data);

/*
 * 求x0,y0,x1,y1的block
 */
@property (nonatomic, copy) CGFloat (^x0)(id data);
@property (nonatomic, copy) CGFloat (^x1)(id data);
@property (nonatomic, copy) CGFloat (^y0)(id data);
@property (nonatomic, copy) CGFloat (^y1)(id data);

/**
 * 初始化之后，加载area的数据
 * @param data
 */
- (void)loadAreaWithData:(NSArray *)data;

@end
