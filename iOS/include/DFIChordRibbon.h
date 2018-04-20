//
//  DFIChordRibbon.h
//  DFI
//
//  Created by vanney on 2017/5/3.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*********************************************
 * D3 Chord Ribbon                           *
 * 保存弦图色带的信息                           *
 *********************************************/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class DFIPath;

@interface DFIChordRibbon : NSObject

/**
 * 初始化之后，使用该函数加载色带的数据
 * @param data
 */
- (void)loadRibbonWithData:(id)data;

/*
 * 保存色带的贝塞尔曲线的信息
 */
@property (nonatomic, strong) DFIPath *context;

/* 获取数据的各个部分 */
@property (nonatomic, copy) id (^source)(id data);
@property (nonatomic, copy) id (^target)(id data);
@property (nonatomic, copy) CGFloat (^radius)(id data);
@property (nonatomic, copy) CGFloat (^startAngle)(id data);
@property (nonatomic, copy) CGFloat (^endAngle)(id data);

/* for description */
- (NSDictionary *)dfiDescription;
- (void)loadOriginalData:(NSDictionary *)data;
@end
