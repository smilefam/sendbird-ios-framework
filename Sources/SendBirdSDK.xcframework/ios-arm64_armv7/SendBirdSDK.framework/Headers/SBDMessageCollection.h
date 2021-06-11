//
//  SBDMessageCollection.h
//  SendBirdSDK
//
//  Created by Jed Gyeong on 5/24/21.
//  Copyright © 2021 SENDBIRD.COM. All rights reserved.
//

#import "SBDBaseCollection.h"
#import "SBDGroupChannel.h"
#import "SBDMessageListParams.h"
#import "SBDMessageCollectionDelegate.h"
#import "SBDBaseChannel.h"
#import "SBDMain.h"
#import "SBDTypes.h"

NS_ASSUME_NONNULL_BEGIN

/// An object that accesses the cache for the messages.
/// @since [NEXT_VERSION]
@interface SBDMessageCollection : SBDBaseCollection<SBDChannelDelegate, SBDConnectionDelegate>

/// Message collection delegate.
/// @since [NEXT_VERSION]
@property (weak, nullable) id<SBDMessageCollectionDelegate> delegate;

/// Starting point of the collection.
/// @since [NEXT_VERSION]
@property (atomic, readonly) long long startingPoint;

@property (atomic, readonly) BOOL hasNext;
@property (atomic, readonly) BOOL hasPrevious;

- (instancetype)initWithChannel:(nonnull SBDGroupChannel *)channel
                  startingPoint:(long long)startingPoint
                         params:(nonnull SBDMessageListParams *)params;

- (void)startCollectionWithInitPolicy:(SBDInitPolicy)initPolicy
                   cacheResultHandler:(nullable void (^)(NSArray<SBDBaseMessage *> * _Nullable messages, SBDError * _Nullable error))cacheResultHandler
                     apiResultHandler:(nullable void (^)(NSArray<SBDBaseMessage *> * _Nullable messages, SBDError * _Nullable error))apiResultHandler;

/// Invalidates the object.
/// @since [NEXT_VERSION]
- (void)invalidate;

- (void)loadNextWithCompletionHandler:(nullable void (^)(NSArray<SBDBaseMessage *> * _Nullable messages, SBDError * _Nullable error))completionHandler;

- (void)loadPreviousWithCompletionHandler:(nullable void (^)(NSArray<SBDBaseMessage *> * _Nullable messages, SBDError * _Nullable error))completionHandler;

@end

NS_ASSUME_NONNULL_END
