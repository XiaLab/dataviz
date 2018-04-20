//
//  DFIShapeStack.h
//  DFI
//
//  Created by vanney on 2017/4/26.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*********************************************
 * D3 Shape Stack                            *
 * 初步理解，只是将给定的数据做一个叠加，排序       *
 * 生成多个序列，再将每个序列交给area等等，渲染啊   *
 *********************************************/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DFIShapeOrderBase.h"
#import "DFIShapeOffsetBase.h"

@interface DFIShapeStackRecord : NSObject 
@property (nonatomic, strong) NSString *key;
@property (nonatomic, strong) NSMutableArray *data;
@property (nonatomic, assign) int index;
@end


@interface DFIShapeStack : NSObject

/*
 * 返回所有的key的block，key也就是各个项目
 */
@property (nonatomic, copy) NSArray *(^keys)(id data);

/*
 * 根据key，返回当前data对应key的value
 */
@property (nonatomic, copy) CGFloat (^value)(id data, NSString *key);

/*
 * 规定stack的排序类型
 */
@property (nonatomic, assign) DFIShapeOrderType stackOrderType;

/*
 * 规定stack的叠加类型
 */
@property (nonatomic, assign) DFIShapeOffsetType stackOffsetType;


@property (nonatomic, strong) NSString *xKey;


/**
 * 初始化stack，并处理返回array数据
 * 返回的array，可以用于area，将其渲染
 * @param data
 * @return
 */
- (NSArray *)loadStackWithData:(NSArray *)data;
@end
