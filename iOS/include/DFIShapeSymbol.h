//
//  DFIShapeSymbol.h
//  DFI
//
//  Created by vanney on 2017/4/28.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*********************************************
 * D3 Shape Symbol                           *
 * 真正基本图形                                *
 *********************************************/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DFIShapeSymbolBase.h"


@class DFIPath;

@interface DFIShapeSymbol : NSObject

/*
 * 定义该symbol的类型，默认circle
 */
@property (nonatomic, assign) DFIShapeSymbolType type;

/*
 * 定义该symbol的size，默认64
 * 这个size是面积，乖乖的
 */
@property (nonatomic, assign) CGFloat size;

/*
 * 用来存放该symbol的贝塞尔曲线
 */
@property (nonatomic, strong) DFIPath *context;


/**
 * 加载symbol，在init，设置type，size之后
 */
- (void)loadSymbol;
@end
