//
//  DFIScaleOrdinal.h
//  DFI
//
//  Created by vanney on 2017/5/6.
//  Copyright © 2017年 vanney9. All rights reserved.
//

/*********************************************
 * D3 Scale Ordinal                          *
 * D3 Scale 离散的                            *
 *********************************************/

#import "DFIScaleBase.h"

@interface DFIScaleOrdinal : DFIScaleBase

/**
 * 使用range初始化自己
 * @param range
 * @return
 */
- (instancetype)initWithRange:(NSArray *)range;

/**
 * 根据range中的 d，来获取domain中相对应的值
 * @param d
 * @return
 */
- (id)scale:(id)d;

@end
