//
//  LSITip.h
//  Tips
//
//  Created by Kenneth Jones on 11/16/20.
//  Copyright © 2020 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LSITip : NSObject

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) double total;
@property (nonatomic, readonly) NSInteger splitCount;
@property (nonatomic, readonly) double tipPercentage;

@end

NS_ASSUME_NONNULL_END
