//
//  DFIHierarchyStratify.h
//  DFI
//
//  Created by vanney on 2017/2/24.
//  Copyright © 2017年 vanney9. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DFIDSVParseResult;
@class DFIHierarchyNode;

@protocol DFIHierarchyStratifyDelegate;


@interface DFIHierarchyStratify : NSObject

@property (nonatomic, weak) id<DFIHierarchyStratifyDelegate> delegate;
@property (nonatomic, strong) DFIHierarchyNode *root;
@property (nonatomic, copy) NSString *(^parentID)(DFIHierarchyNode *);

- (DFIHierarchyNode *)loadDSVData:(DFIDSVParseResult *)data;

@end


@protocol DFIHierarchyStratifyDelegate <NSObject>
@optional
- (NSString *)parentIDWithCurData:(NSMutableDictionary *)curData index:(int)index andWholeData:(DFIDSVParseResult *)wholeData;
@end
