//
//  DFIQuadtree.h
//  DFI
//
//  Created by vanney on 2017/2/9.
//  Copyright © 2017年 vanney9. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DFIForceNode.h"
#import "DFIQuadtreeItem.h"

@interface DFIQuadtreeQuad :NSObject 

@property (nonatomic, strong) DFIQuadtreeItem *item;
@property(nonatomic, assign) float x0;
@property(nonatomic, assign) float y0;
@property(nonatomic, assign) float x1;
@property(nonatomic, assign) float y1;

- (instancetype)initWithItem:(DFIQuadtreeItem *)item x0:(float)x0 y0:(float)y0 x1:(float)x1 andY1:(float)y1;
@end


@protocol DFIQuadtreeDelegate;

@interface DFIQuadtree : NSObject

@property (nonatomic, weak) id<DFIQuadtreeDelegate> delegate;

- (void)addAll:(NSMutableArray *)nodes;
- (void)coverWithX:(float)x andY:(float)y;
- (void)addNode:(DFIForceNode *)node;

// 遍历四叉树，并执行回调函数，对应到OC也就是执行delegate方法
- (void)visit;
- (void)visitAfter;
@end

@protocol DFIQuadtreeDelegate <NSObject>
- (BOOL)quadtree:(DFIQuadtree *)quadtree visitItem:(DFIQuadtreeItem *)item x0:(float)x0 y0:(float)y0 x1:(float)x1 andY1:(float)y1;
- (void)quadtree:(DFIQuadtree *)quadtree visitAfterItem:(DFIQuadtreeItem *)item x0:(float)x0 y0:(float)y0 x1:(float)x1 andY1:(float)y1;
@end



