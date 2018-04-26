//
//  DFIShapeOffsetBase.h
//  DFI
//
//  Created by vanney on 2017/4/27.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*********************************************
 * D3 Shape Offset                           *
 * 不分基类了，每个offset方法都在这个类里面啊      *
 * offset 计算叠加之后的value啊啊               *
 *********************************************/

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, DFIShapeOffsetType) {
    DFIShapeOffsetTypeNone = 0,
    DFIShapeOffsetTypeExpande,
};

@interface DFIShapeOffsetBase : NSObject

/**
 * 记住，先排序，再offset
 * @param series
 * @param order
 * @param type
 */
+ (void)dealWithSeries:(NSArray *)series andOrder:(NSArray *)order withType:(DFIShapeOffsetType)type;

@end
