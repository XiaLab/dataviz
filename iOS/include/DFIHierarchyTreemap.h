//
//  DFIHierarchyTreemap.h
//  DFI
//
//  Created by vanney on 2017/3/13.
//  Copyright © 2017年 vanney9. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class DFIHierarchyNode;

@interface DFIHierarchyTreemap : NSObject

@property (nonatomic, assign) float paddingInner;
@property (nonatomic, assign) float paddingTop;
@property (nonatomic, assign) float paddingRight;
@property (nonatomic, assign) float paddingBottom;
@property (nonatomic, assign) float paddingLeft;

/*
 * 根节点属性
 */
@property (nonatomic, strong) DFIHierarchyNode *root;

/*
 * 加载数据，初始化，创建一个treemap
 */
- (void)loadRootNode:(DFIHierarchyNode *)root;

/*
 * 设置size的大小
 */
- (DFIHierarchyTreemap *)size:(CGSize)size;

@end
