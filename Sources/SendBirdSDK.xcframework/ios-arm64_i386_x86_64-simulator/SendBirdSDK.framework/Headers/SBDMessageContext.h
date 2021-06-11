//
//  SBDMessageContext.h
//  SendBirdSDK
//
//  Created by Jed Gyeong on 5/27/21.
//  Copyright © 2021 SENDBIRD.COM. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SBDSource.h"

NS_ASSUME_NONNULL_BEGIN

/// Represents of what happened to the messages.
/// @since [NEXT_VERSION]
@interface SBDMessageContext : NSObject

@property (atomic) SBDSource source;



@end

NS_ASSUME_NONNULL_END
