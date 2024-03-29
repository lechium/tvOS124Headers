//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_xpc_object;

@interface NEHelperHotspotConfigurationTask : NSObject
{
    _Bool _joinOnce;	// 8 = 0x8
    NSString *_taskIdentifier;	// 16 = 0x10
    NSObject<OS_xpc_object> *_requestMessage;	// 24 = 0x18
    NSString *_bundleID;	// 32 = 0x20
}

+ (id)copyBundleIDList;	// IMP=0x00000001000020f8
+ (void)removeBundleIDFromPreferences:(id)arg1;	// IMP=0x0000000100001e68
+ (void)addBundleIDToPreferences:(id)arg1;	// IMP=0x0000000100001bb4
+ (id)copyPendingConfigurationTaskWithID:(id)arg1;	// IMP=0x0000000100001b30
+ (void)addPendingConfigurationTaskWithID:(id)arg1 requestMessage:(id)arg2 bundleID:(id)arg3 joinOnce:(_Bool)arg4;	// IMP=0x0000000100001a58
@property(readonly) _Bool joinOnce; // @synthesize joinOnce=_joinOnce;
@property(readonly) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(readonly) NSObject<OS_xpc_object> *requestMessage; // @synthesize requestMessage=_requestMessage;
@property(readonly) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
- (void).cxx_destruct;	// IMP=0x0000000100002288
- (id)initTaskWithID:(id)arg1 requestMessage:(id)arg2 bundleID:(id)arg3 joinOnce:(_Bool)arg4;	// IMP=0x0000000100001960

@end

