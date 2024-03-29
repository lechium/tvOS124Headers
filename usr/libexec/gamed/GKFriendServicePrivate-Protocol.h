//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GKFriendService-Protocol.h"

@class GKConcernInternal, GKPlayerInternal, NSArray;

@protocol GKFriendServicePrivate <GKFriendService>
- (oneway void)requestGKPlayerIDforiCloudIDs:(NSArray *)arg1 handler:(void (^)(NSString *, NSError *))arg2;
- (oneway void)reportConcern:(GKConcernInternal *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getConcernsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (oneway void)removeAllFriendsWithHandler:(void (^)(_Bool))arg1;
- (oneway void)removeFriendWithPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSError *))arg2;
- (oneway void)getCommonFriendsForPlayer:(GKPlayerInternal *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
@end

