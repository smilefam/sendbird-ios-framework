//
//  SBDMessageCollectionDelegate.h
//  SendBirdSDK
//
//  Created by Jed Gyeong on 5/24/21.
//  Copyright © 2021 SENDBIRD.COM. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SBDMessageCollection.h"
#import "SBDMessageContext.h"
#import "SBDGroupChannel.h"

@class SBDMessageCollection;
@class SBDMessageContext;
@class SBDGroupChannel;

NS_ASSUME_NONNULL_BEGIN

@protocol SBDMessageCollectionDelegate <NSObject>

@optional

- (void)messageCollection:(nonnull SBDMessageCollection *)collection
                  context:(nonnull SBDMessageContext *)context
                  channel:(nonnull SBDGroupChannel *)channel
            addedMessages:(nonnull NSArray<SBDBaseMessage *> *)messages;

- (void)messageCollection:(nonnull SBDMessageCollection *)collection
                  context:(nonnull SBDMessageContext *)context
                  channel:(nonnull SBDGroupChannel *)channel
          updatedMessages:(nonnull NSArray<SBDBaseMessage *> *)messages;

- (void)messageCollection:(nonnull SBDMessageCollection *)collection
                  context:(nonnull SBDMessageContext *)context
                  channel:(nonnull SBDGroupChannel *)channel
          deletedMessages:(nonnull NSArray<SBDBaseMessage *> *)messages;

- (void)messageCollection:(nonnull SBDMessageCollection *)collection
                  context:(nonnull SBDMessageContext *)context
           changedChannel:(nonnull SBDGroupChannel *)channel;

- (void)messageCollection:(nonnull SBDMessageCollection *)collection
                  context:(nonnull SBDMessageContext *)context
           deletedChannel:(nonnull NSString *)channelUrl;

- (void)didDetectHugeGapInMessageCollection:(nonnull SBDMessageCollection *)collection;


@end

NS_ASSUME_NONNULL_END
