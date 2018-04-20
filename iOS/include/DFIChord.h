//
//  DFIChord.h
//  DFI
//
//  Created by vanney on 2017/5/2.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*********************************************
 * D3 Chord                                  *
 * 主要用来生成弦图的外面的圆啊啊                 *
 *********************************************/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface DFIChordRecord : NSObject
/*
 * 存放外圈的饼图的数据
 */
@property (nonatomic, strong) NSArray *groups;

/*
 * 存放圈内的色带的数据
 */
@property (nonatomic, strong) NSArray *data;
@end

@interface DFIChord : NSObject

/*
 * 两个chord之间的夹缝的夹角，默认是0度
 */
@property (nonatomic, assign) CGFloat padAngle;

/*
 * 排序大的group
 */
@property (nonatomic, copy) NSComparisonResult (^sortGroups)(id obj1, id obj2);

/*
 * 排序内部的小的group
 */
@property (nonatomic, copy) NSComparisonResult (^sortSubgroups)(id obj1, id obj2);

/*
 * 排序最后生成的chord record
 */
@property (nonatomic, copy) NSComparisonResult (^sortChords)(id obj1, id obj2);

@property (nonatomic, strong) DFIChordRecord *chords;

/**
 * 初始化之后，使用该函数加载chord的数据
 * @param matrix
 */
- (void)loadChordWithMatrix:(NSArray *)matrix;


@end
