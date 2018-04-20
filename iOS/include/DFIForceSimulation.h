//
//  DFIForceSimulation.h
//  DFI
//
//  Created by vanney on 2017/2/9.
//  Copyright © 2017年 vanney9. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DFIForceBaseForce.h"
#import "DFIForceNode.h"

typedef NS_ENUM(NSUInteger, DFIForceSimulationStatus) {
    DFIForceSimulationStatusStartPan = 0,
    DFIForceSimulationStatusNormal,
};

@protocol DFIForceSimulationDelegate;

@interface DFIForceSimulation : NSObject

@property (nonatomic, strong) NSMutableArray *nodes;
@property(nonatomic, assign) float alpha;
@property(nonatomic, assign) float alphaMin;
@property(nonatomic, assign) float alphaDecay;
@property(nonatomic, assign) float alphaTarget;
@property(nonatomic, assign) float velocityDecay;
@property (nonatomic, weak) id<DFIForceSimulationDelegate> delegate;

@property(nonatomic, assign) DFIForceSimulationStatus status;

- (instancetype)initWithNodes:(NSMutableArray *)nodes;
- (void)forceStart;
- (void)addForce:(DFIForceBaseForce *)force;

- (void)restart;

- (DFIForceNode *)findNodeWithinRadius:(float)radius pointX:(float)x andPointY:(float)y;

// reset simulation
- (void)reset;

@end

@protocol DFIForceSimulationDelegate <NSObject>

@optional

- (void)simulationFinishedAnimation:(DFIForceSimulation *)simulation;
- (void)simulationTickFinished;

@end
