//
//  DFIHierarchyNode.h
//  DFI
//
//  Created by vanney on 2017/2/24.
//  Copyright © 2017年 vanney9. All rights reserved.
//

#import <Foundation/Foundation.h>

// TODO - add an example in comment

@interface DFIHierarchyNode : NSObject

@property(nonatomic, strong) NSMutableDictionary *data;
@property(nonatomic, assign) int depth;
@property(nonatomic, assign) int height;
@property (nonatomic, strong) DFIHierarchyNode *parent;
@property (nonatomic, strong) NSMutableArray *children;
@property (nonatomic, strong) NSString *id;
@property (nonatomic, assign) float x;
@property (nonatomic, assign) float y;

@property (nonatomic, assign) float value;
@property (nonatomic, assign) float radius;

- (instancetype)initWithData:(NSMutableDictionary *)data;
- (instancetype)initAsPreNode;

/*
 * 后序遍历
 */
- (DFIHierarchyNode *)eachBefore:(void (^)(DFIHierarchyNode *))block;

/*
 * 前序遍历
 */
- (DFIHierarchyNode *)eachAfter:(void (^)(DFIHierarchyNode *))block;

/*
 * 广度优先遍历
 */
- (DFIHierarchyNode *)each:(void (^)(DFIHierarchyNode *))block;

/*
 * 广度优先遍历节点，将节点存放在array中
 */
- (NSMutableArray *)descendants;

/*
 * 获取tree的叶子节点
 */
- (NSMutableArray *)leaves;

// TODO - deal with sort
//- (DFIHierarchyNode *)sort:(void (^)(DFIHierarchyNode *, DFIHierarchyNode *))block;


/* for description */
- (NSDictionary *)dfiDescription;
- (void)loadOriginalData:(NSDictionary *)data;

@end
