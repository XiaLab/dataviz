//
//  DFIHierarchyTreemapTile.h
//  DFI
//
//  Created by vanney on 2017/3/13.
//  Copyright © 2017年 vanney9. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DFIHierarchyNode;
@class DFIHelperStack;

@interface DFIHierarchyTreemapTile : NSObject

@property (nonatomic, assign) float ratio;

/*
 * instanced method
 */
+ (instancetype)defaultManager;

/*
 * dice切割方法: 均分parent的x轴，按照每个child的value的比例
 */
- (void)dice:(DFIHierarchyNode *)parent x0:(float)x0 y0:(float)y0 x1:(float)x1 andY1:(float)y1;

/*
 * slice切割方法: 均分parent的y轴，按照每个child的value的比例
 */
- (void)slice:(DFIHierarchyNode *)parent x0:(float)x0 y0:(float)y0 x1:(float)x1 andY1:(float)y1;

/*
 * squarify切割方法:
 */
- (DFIHelperStack *)squarify:(DFIHierarchyNode *)parent x0:(float)x0 y0:(float)y0 x1:(float)x1 andY1:(float)y1;

/*
 * resquarify切割方法:
 */
- (void)resquarify:(DFIHierarchyNode *)parent x0:(float)x0 y0:(float)y0 x1:(float)x1 andY1:(float)y1;
@end
