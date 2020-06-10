//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun  9 2020 17:35:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BKSProcessDelegate-Protocol.h"

@class BKSProcess, NSDictionary, NSString;
@protocol BKAlternateSystemAppDelegate, OS_dispatch_queue;

@interface BKAlternateSystemApp : NSObject <BKSProcessDelegate>
{
    NSString *_bundleID;
    id <BKAlternateSystemAppDelegate> _delegate;
    NSDictionary *_options;
    BKSProcess *_process;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)bundleInfoOverrides;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) BKSProcess *process; // @synthesize process=_process;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(nonatomic) __weak id <BKAlternateSystemAppDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (void)process:(id)arg1 didExitWithContext:(id)arg2;
@property(readonly, copy) NSString *description;
- (void)_noteExitedWithContext:(id)arg1;
- (void)_noteLaunchSucceeded;
- (void)_noteLaunchFailed;
- (_Bool)terminate;
- (_Bool)launch;
- (void)dealloc;
- (id)initWithBundleId:(id)arg1 options:(id)arg2 queue:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

