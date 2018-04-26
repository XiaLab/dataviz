//
//  DFIShapePie.h
//  DFI
//
//  Created by vanney on 2017/3/24.
//  Copyright © 2017年 vanney9. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DFIDSVParseResult;

@interface DFIShapePie : NSObject

@property (nonatomic, assign) float startAngle;
@property (nonatomic, assign) float endAngle;
// TODO - padAngle
@property (nonatomic, assign) float padAngle;

// 保存pie的结果
@property (nonatomic, strong) NSArray *arcs;

/*
 * 返回每个值的value的block
 */
@property (nonatomic, copy) float(^value)(id);

/*
 * 加载pie数据，创建饼图，全局加载方法, 返回arc数组
 */
- (NSMutableArray *)loadPieWithData:(NSMutableArray *)data;

/*
 * 加载pie数据，使用DFIDSVParseResult，最终还是调用全局加载方法
 */
- (NSMutableArray *)loadPieWithDSVParseResult:(DFIDSVParseResult *)result;

@end
