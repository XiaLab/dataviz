//
//  DFIForceLink.h
//  DFI
//
//  Created by vanney on 2017/2/9.
//  Copyright © 2017年 vanney9. All rights reserved.
//

// According to d3-force/link.js

#import <Foundation/Foundation.h>
#import "DFIForceBaseForce.h"
#import "DFIForceNode.h"

@interface DFIForceLinkElement : NSObject

@property(nonatomic, assign) int index;
@property (nonatomic, strong) NSString *source;
@property (nonatomic, strong) NSString *target;
@property (nonatomic, strong) DFIForceNode *sourceNode;
@property (nonatomic, strong) DFIForceNode *targetNode;
@property(nonatomic, assign) float value;

- (instancetype)initWithSource:(NSString *)source target:(NSString *)target andValue:(float)value;

@end


@interface DFIForceLink : DFIForceBaseForce

@property (nonatomic, strong) NSMutableArray *links;
@property (nonatomic, strong) NSString *id;
@property (nonatomic, assign) int iterations;
//@property (nonatomic, assign) float strength;
//@property (nonatomic, assign) float distance;

- (instancetype)initWithNodes:(NSMutableArray *)nodes;
- (void)force:(float)alpha;
- (void)linksInitialize:(NSMutableArray *)links;

@end
