//
//  DFIHierarchyTree.h
//  DFI
//
//  Created by vanney on 2017/3/9.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*
 * 最美树算法，同level的节点在同一水平线上
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class DFIHierarchyNode;

@interface DFIHierarchyTree : NSObject

@property (nonatomic, copy) int(^separation)(DFIHierarchyNode *, DFIHierarchyNode *);

/*
 * 根节点属性
 */
@property (nonatomic, strong) DFIHierarchyNode *root;

/*
 * 初始化数据
 */
- (void)loadRootNode:(DFIHierarchyNode *)root;

/*
 * 设置size
 */
- (DFIHierarchyTree *)size:(CGSize)size;
@end
