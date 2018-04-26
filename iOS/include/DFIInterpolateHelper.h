//
//  DFIInterpolateHelper.h
//  DFI
//
//  Created by vanney on 2017/5/6.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*********************************************
 * D3 Interpolate Helper                     *
 * include d3 basis, basisClosed function    *
 *********************************************/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef CGFloat (^DFIInterpolateHelperBlockType)(CGFloat);

@interface DFIInterpolateHelper : NSObject

+ (DFIInterpolateHelperBlockType)basis:(NSArray *)values;
+ (DFIInterpolateHelperBlockType)basisClosed:(NSArray *)values;
+ (CGFloat)basisWithT1:(CGFloat)t1 v0:(CGFloat)v0 v1:(CGFloat)v1 v2:(CGFloat)v2 andV3:(CGFloat)v3;

@end
