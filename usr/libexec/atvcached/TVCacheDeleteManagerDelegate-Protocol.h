//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, TVCacheDeleteManager;

@protocol TVCacheDeleteManagerDelegate <NSObject>

@optional
- (NSArray *)manager:(TVCacheDeleteManager *)arg1 purgeTasksForUrgency:(long long)arg2;
@end
