//
//  DFIScaleBase.h
//  DFI
//
//  Created by vanney on 2017/5/4.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*********************************************
 * D3 Scale Base                             *
 * Scale的基类，定义公共函数接口                 *
 *********************************************/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

/* block一顿疯狂操作，为了适应js的操蛋的语法
 * 函数式编程，听着很NB
 */
typedef CGFloat (^DFIScaleBlockType1)(CGFloat);
typedef DFIScaleBlockType1 (^DFIScaleBlockType2)(CGFloat, CGFloat);
typedef CGFloat (^DFIScaleBlockType3)(CGFloat, CGFloat);

@interface DFIScaleBase : NSObject


@property (nonatomic, strong) NSMutableArray *domain;
@property (nonatomic, strong) NSMutableArray *range;
@property (nonatomic, assign) BOOL clamp;

@end
