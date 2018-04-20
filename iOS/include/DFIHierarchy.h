//
//  DFIHierarchy.h
//  DFI
//
//  Created by vanney on 2017/2/27.
//  Copyright © 2017年 vanney9. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DFIHierarchyNode;

@interface DFIHierarchy : NSObject

/*
 * Hierarchy的根节点属性
 */
@property (nonatomic, strong) DFIHierarchyNode *root;

/*
 * 类方法，计算node的高度
 */
+ (int)computeHeight:(DFIHierarchyNode *)node;

/*
 * 使用JSON数据，构建Hierarchy
 */
- (DFIHierarchyNode *)createHierarchyWithData:(NSMutableDictionary *)data;

@end
