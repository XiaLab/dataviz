//
//  DFIForceManybody.h
//  DFI
//
//  Created by vanney on 2017/2/10.
//  Copyright © 2017年 vanney9. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DFIForceBaseForce.h"
#import "DFIQuadtree.h"

@interface DFIForceManybody : DFIForceBaseForce <DFIQuadtreeDelegate>

@property(nonatomic, assign) float distanceMin;
@property(nonatomic, assign) float distanceMax;
@property(nonatomic, assign) float theta;

- (instancetype)initWithNodes:(NSMutableArray *)nodes;
- (void)force:(float)alpha;

@end
