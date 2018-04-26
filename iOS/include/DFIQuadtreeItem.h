//
//  DFIQuadtreeItem.h
//  DFI
//
//  Created by vanney on 2017/2/9.
//  Copyright © 2017年 vanney9. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DFIForceNode.h"

typedef NS_ENUM(NSUInteger, DFIQuadtreeItemStatus) {
    DFIQuadtreeItemStatusEmpty = 0,
    DFIQuadtreeItemStatusLeaf,
    DFIQuadtreeItemStatusBranch
};

@interface DFIQuadtreeItem : NSObject

@property (nonatomic, strong) NSMutableArray *items;
@property (nonatomic, strong) DFIForceNode *node;
@property(nonatomic, assign) float value;
@property(nonatomic, assign) float x;
@property(nonatomic, assign) float y;

@property(nonatomic, assign) DFIQuadtreeItemStatus status;

- (instancetype)initWithLeaf:(DFIForceNode *)node;
- (instancetype)initWithBranch:(DFIQuadtreeItem *)branch andIndex:(int)index;
- (DFIQuadtreeItemStatus)itemStatus;

@end
