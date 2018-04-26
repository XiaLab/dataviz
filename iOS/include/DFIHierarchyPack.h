//
//  DFIHierarchyPack.h
//  DFI
//
//  Created by vanney on 2017/3/15.
//  Copyright © 2017年 vanney9. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class DFIHierarchyNode;

@interface DFIHierarchyPack : NSObject

/*
 * 与pack相关的属性
 */
@property (nonatomic, assign) float padding; // circle之间的间隙
@property (nonatomic, assign) float radius; // 默认是不设置半径的，有内部算法得出

/*
 * 根节点属性
 */
@property (nonatomic, strong) DFIHierarchyNode *root;

/*
 * 加载数据
 */
- (void)loadRootData:(DFIHierarchyNode *)root;

/*
 * 设置整个图形的大小
 */
- (DFIHierarchyPack *)size:(CGSize)size;
@end
