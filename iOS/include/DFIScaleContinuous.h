//
//  DFIScaleContinuous.h
//  DFI
//
//  Created by vanney on 2017/5/4.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*********************************************
 * D3 Scale Continuous                       *
 * deinterpolate 和 reinterpolate 都是        *
 * block type 2                              *
 *********************************************/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DFIScaleBase.h"


@interface DFIScaleContinuous : DFIScaleBase

- (DFIScaleBlockType1)deinterpolateLinerWithA:(CGFloat)a andB:(CGFloat)b;

- (instancetype)initWithDeinterpolate:(DFIScaleBlockType2)deinterpolate andReinterpolate:(DFIScaleBlockType2)reinterpolate;

- (CGFloat)scale:(CGFloat)x;
- (CGFloat)invert:(CGFloat)x;

@end
