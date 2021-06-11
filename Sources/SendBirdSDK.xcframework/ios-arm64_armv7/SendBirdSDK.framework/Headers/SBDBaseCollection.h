//
//  SBDBaseCollection.h
//  SendBirdSDK
//
//  Created by Jed Gyeong on 4/22/21.
//  Copyright © 2021 SENDBIRD.COM. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SBDMain.h"

NS_ASSUME_NONNULL_BEGIN

/// Represents the collection.
@interface SBDBaseCollection : NSObject

- (void)resumeEvent;
- (void)pauseEvent;
- (void)destoryEvent;

@end

NS_ASSUME_NONNULL_END
