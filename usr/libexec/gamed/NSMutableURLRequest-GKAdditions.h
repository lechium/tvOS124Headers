//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableURLRequest.h>

@interface NSMutableURLRequest (GKAdditions)
+ (int)hashForPlayerID:(id)arg1;	// IMP=0x000000010007f414
+ (id)_gkHTTPRequestWithURL:(id)arg1 method:(id)arg2 postData:(id)arg3;	// IMP=0x000000010007f1c8
- (void)setSAPversion:(id)arg1;	// IMP=0x000000010007fe84
- (void)setSAPSignature:(id)arg1;	// IMP=0x000000010007fe10
- (void)setLocale:(id)arg1;	// IMP=0x000000010007fcf0
- (void)setInternal:(_Bool)arg1;	// IMP=0x000000010007fc64
- (void)setPushToken:(id)arg1;	// IMP=0x000000010007fb34
- (void)setBuildVersion:(id)arg1;	// IMP=0x000000010007faa8
- (void)setProtocolVersion:(id)arg1;	// IMP=0x000000010007fa1c
- (void)setProcessName:(id)arg1;	// IMP=0x000000010007f990
- (void)setDeviceUniqueID:(id)arg1;	// IMP=0x000000010007f904
- (void)setRestrictions:(id)arg1;	// IMP=0x000000010007f83c
- (void)setStoreMode:(id)arg1;	// IMP=0x000000010007f7a8
- (void)setGameDescriptor:(id)arg1;	// IMP=0x000000010007f560
- (void)setPlayerID:(id)arg1 hash:(int)arg2 authToken:(id)arg3;	// IMP=0x000000010007f464
@end

