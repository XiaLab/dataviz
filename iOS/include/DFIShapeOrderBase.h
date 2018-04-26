//
//  DFIShapeOrderBase.h
//  DFI
//
//  Created by vanney on 2017/4/26.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*********************************************
 * D3 Shape Order Base                       *
 * 用来给stack中的各个项目排序的基类啊            *
 * 返回的array表示stack中的每条记录的排序顺序啊啊  *
 *********************************************/

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, DFIShapeOrderType) {
    DFIShapeOrderTypeNone = 0,
    DFIShapeOrderTypeAscending,
    DFIShapeOrderTypeDescending,
};

@interface DFIShapeOrderBase : NSObject

/**
 * 传入series，也就是未排序的stacks的记录
 * @param series
 * @return
 */
+ (id)dealWithSeries:(NSArray *)series andType:(DFIShapeOrderType)type;

@end
