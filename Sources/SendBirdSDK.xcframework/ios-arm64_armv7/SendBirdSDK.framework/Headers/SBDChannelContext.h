//
//  SBDChannelContext.h
//  SendBirdSDK
//
//  Created by Jed Gyeong on 5/3/21.
//  Copyright © 2021 SENDBIRD.COM. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SBDSource.h"

NS_ASSUME_NONNULL_BEGIN

@interface SBDChannelContext : NSObject

@property (atomic) SBDSource source;

/// Initializes with the channel source.
/// @param source Channel source.
/// @return SBDChannelContext object.
/// @since [NEXT_VERSION]
- (instancetype)initWithChannelSource:(SBDSource)source;

/// Checks whether the context is from an event or not.
/// @return If YES, the context is from an event.
/// @since [NEXT_VERSION]
- (BOOL)isFromEvent;

@end

NS_ASSUME_NONNULL_END
