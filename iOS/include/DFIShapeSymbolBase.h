//
//  DFIShapeSymbolBase.h
//  DFI
//
//  Created by vanney on 2017/4/28.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*********************************************
 * D3 Shape Symbol Instance                  *
 * 各种symbol的类型的设置函数啊啊                *
 *********************************************/

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class DFIPath;

typedef NS_ENUM(NSInteger, DFIShapeSymbolType) {
    DFIShapeSymbolTypeCircle = 0,
    DFIShapeSymbolTypeCross,
    DFIShapeSymbolTypeDiamond,
    DFIShapeSymbolTypeSquare,
    DFIShapeSymbolTypeStar,
    DFIShapeSymbolTypeTriangle,
    DFIShapeSymbolTypeWye,
};

@interface DFIShapeSymbolBase : NSObject

/**
 * 根据symbol的参数不同，将其绘制在贝塞尔曲线上面
 * @param context
 * @param type
 * @param size
 */
+ (void)drawInContext:(DFIPath *)context withType:(DFIShapeSymbolType)type andSize:(CGFloat)size;

@end
