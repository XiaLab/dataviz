//
//  DFIForceCenter.h
//  DFI
//
//  Created by vanney on 2017/2/9.
//  Copyright © 2017年 vanney9. All rights reserved.
//

// According to d3-force/center.js

#import <Foundation/Foundation.h>
#import "DFIForceBaseForce.h"
#import "DFIForceNode.h"

@interface DFIForceCenter : DFIForceBaseForce

@property(nonatomic, assign) float x;
@property(nonatomic, assign) float y;

- (instancetype)initWithNodes:(NSMutableArray *)nodes;
- (void)force:(float)alpha;
- (void)centerInitializeWithX:(float)x andY:(float)y;
@end
