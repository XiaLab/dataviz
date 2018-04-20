//
//  DFIHierarchyNode+Treemap.h
//  DFI
//
//  Created by vanney on 2017/3/13.
//  Copyright © 2017年 vanney9. All rights reserved.
//

#import "DFIHierarchyNode.h"

@interface DFIHierarchyNode (Treemap)

//@property (nonatomic, assign) float value;
@property (nonatomic, assign) float x0;
@property (nonatomic, assign) float y0;
@property (nonatomic, assign) float x1;
@property (nonatomic, assign) float y1;

/*
 * for pack : radius
 */
//@property (nonatomic, assign) float radius;

/*
 * 根据特定的Block规则，求每个节点的所有子树的和， 后序遍历
 */
- (void)sum:(float (^)(NSMutableDictionary *))block;

/*
 * 遍历，排序，对同一层级的节点进行排序
 */
- (void)sort:(BOOL (^)(DFIHierarchyNode *, DFIHierarchyNode *))block;

@end
