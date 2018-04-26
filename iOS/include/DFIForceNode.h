//
//  DFIForceNode.h
//  DFI
//
//  Created by vanney on 2017/2/9.
//  Copyright © 2017年 vanney9. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DFIForceNode : NSObject

@property (nonatomic, strong) NSString *id;
@property(nonatomic, assign) int group;
@property(nonatomic, assign) int index;
@property(nonatomic, assign) float x;
@property(nonatomic, assign) float y;
@property(nonatomic, assign) float vx;
@property(nonatomic, assign) float vy;

@property(nonatomic, assign) float fx;
@property(nonatomic, assign) float fy;

- (instancetype)initWithId:(NSString *)id andGroup:(int)group;
+ (DFIForceNode *)findNodeById:(NSString *)nodeId inNodes:(NSMutableArray *)nodes;

@end
