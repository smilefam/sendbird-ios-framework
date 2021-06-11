//
//  SBDChannelCollection.h
//  SendBirdSDK
//
//  Created by Jed Gyeong on 4/22/21.
//  Copyright © 2021 SENDBIRD.COM. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SBDBaseCollection.h"
#import "SBDChannelCollectionDelegate.h"
#import "SBDError.h"
#import "SBDGroupChannel.h"
#import "SBDGroupChannelListQuery.h"

NS_ASSUME_NONNULL_BEGIN

@interface SBDChannelCollection : SBDBaseCollection<SBDConnectionDelegate>

/// The channels that the collection has fetched.
/// @since [NEXT_VERSION]
@property (strong, nonnull, readonly) NSArray<SBDGroupChannel *> *channelList;

/// If YES, the next page might exist.
/// @since [NEXT_VERSION]
@property (atomic, readonly) BOOL hasNext;

/// Collection delegate.
/// @since [NEXT_VERSION]
@property (weak, nullable) id<SBDChannelCollectionDelegate> delegate;

/// Initializes the collection object.
/// @param query SBDGroupChannelListQuery object.
/// @since [NEXT_VERSION]
- (instancetype)initWithQuery:(nonnull SBDGroupChannelListQuery *)query;

/// Loads next page.
/// @param completionHandler The completion handler to be executed.
/// @since [NEXT_VERSION]
- (void)loadNextWithCompletionHandler:(nullable void (^)(NSArray<SBDGroupChannel *> * _Nullable channels, SBDError * _Nullable error))completionHandler;

/// Invalidates the object.
/// @since [NEXT_VERSION]
- (void)invalidate;

@end

NS_ASSUME_NONNULL_END
