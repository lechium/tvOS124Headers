//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun  9 2020 17:35:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BKSProcess, BKSProcessExitContext;

@protocol BKSProcessDelegate <NSObject>

@optional
- (void)process:(BKSProcess *)arg1 didExitWithContext:(BKSProcessExitContext *)arg2;
- (void)process:(BKSProcess *)arg1 isBeingDebugged:(_Bool)arg2;
- (void)processWillExpire:(BKSProcess *)arg1;
- (void)process:(BKSProcess *)arg1 taskStateDidChange:(long long)arg2;
@end

