//
//  DFIShapeArc.h
//  DFI
//
//  Created by vanney on 2017/3/21.
//  Copyright © 2017年 vanney9. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DFIPath;
@class CAShapeLayer;

@interface DFIShapeArc : NSObject

@property (nonatomic, strong) DFIPath *path;
//@property (nonatomic, strong) CAShapeLayer *layer;

// TODO - 将直接赋值改成Block
@property (nonatomic, assign) float innerRadius;
@property (nonatomic, assign) float outerRadius;
@property (nonatomic, assign) float cornerRadius;
@property (nonatomic, assign) float padRadius;
@property (nonatomic, assign) float startAngle;
@property (nonatomic, assign) float endAngle;
@property (nonatomic, assign) float padAngle;

/*
 * create an arc
 */
- (void)loadArcWithData:(NSDictionary *)data;


/* for description */
- (NSDictionary *)dfiDescription;
- (void)loadOriginalData:(NSDictionary *)data;

@end
