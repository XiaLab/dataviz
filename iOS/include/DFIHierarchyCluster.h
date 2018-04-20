//
//  DFIHierarchyCluster.h
//  DFI
//
//  Created by vanney on 2017/2/27.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*
 * 所有的叶子节点在同一层级上面
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class DFIHierarchyNode;

@interface DFIHierarchyCluster : NSObject

@property (nonatomic, copy) int (^separation)(DFIHierarchyNode *, DFIHierarchyNode *);
@property (nonatomic, strong) DFIHierarchyNode *root;
/*
 * 初始化数据
 */
- (void)loadRootNode:(DFIHierarchyNode *)root;

/*
 *  设置size
 */
- (DFIHierarchyCluster *)size:(CGSize)size;

@end
