//
//  DFIAxis.h
//  DFI
//
//  Created by vanney on 2017/5/4.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*********************************************
 * D3 Axis                                   *
 * 与坐标轴相关                                *
 *********************************************/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, DFIAxisType) {
    DFIAxisTypeLeft = 0,
    DFIAxisTypeTop,
    DFIAxisTypeRight,
    DFIAxisTypeBottom
};

@interface DFIAxis : NSObject

@property (nonatomic, strong) NSMutableArray *tickArguments;
@property (nonatomic, assign) CGFloat tickSizeInner;
@property (nonatomic, assign) CGFloat tickSizeOuter;
@property (nonatomic, assign) CGFloat tickPadding;

@property (nonatomic, copy) id (^tickValues)(id data);
@property (nonatomic, copy) id (^tickFormat)(id data);

@property (nonatomic, assign) DFIAxisType type;
@property (nonatomic, strong) id scale;

/* 一大堆初始化函数 */
- (instancetype)initTopWithScale:(id)scale;
- (instancetype)initRightWithScale:(id)scale;
- (instancetype)initBottomWithScale:(id)scale;
- (instancetype)initLeftWithScale:(id)scale;


/**
 * 初始化之后加载坐标轴数据
 * @param context
 */
- (void)loadAxisWithContext:(id)context;

@end
