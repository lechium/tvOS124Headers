//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SOSAccount;

__attribute__((visibility("hidden")))
@interface CKKeyParameter : NSObject
{
    SOSAccount *account;	// 8 = 0x8
}

@property(retain) SOSAccount *account; // @synthesize account;
- (void).cxx_destruct;	// IMP=0x0000000100095600
- (_Bool)SOSTransportKeyParameterPublishCloudParameters:(id)arg1 data:(struct __CFData *)arg2 err:(struct __CFError **)arg3;	// IMP=0x0000000100095244
- (_Bool)SOSTransportKeyParameterKVSAppendKeyInterests:(id)arg1 ak:(struct __CFArray *)arg2 firstUnLock:(struct __CFArray *)arg3 unlocked:(struct __CFArray *)arg4 err:(struct __CFError **)arg5;	// IMP=0x0000000100095220
- (id)initWithAccount:(id)arg1;	// IMP=0x0000000100095184
- (void)SOSTransportKeyParameterHandleNewAccount:(id)arg1 acct:(id)arg2;	// IMP=0x000000010009517c
- (long long)SOSTransportKeyParameterGetTransportType:(id)arg1 err:(struct __CFError **)arg2;	// IMP=0x0000000100095174
- (id)SOSTransportKeyParameterGetAccount:(id)arg1;	// IMP=0x0000000100095164
- (_Bool)SOSTransportKeyParameterHandleKeyParameterChanges:(id)arg1 data:(struct __CFData *)arg2 err:(struct __CFError *)arg3;	// IMP=0x0000000100094b84

@end

