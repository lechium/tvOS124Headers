//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "BKEventClient.h"

@interface BKProximityDetectionClient : BKEventClient
{
    long long _requestedMode;	// 16 = 0x10
    _Bool _pocketTouchesExpected;	// 24 = 0x18
}

@property(nonatomic) _Bool pocketTouchesExpected; // @synthesize pocketTouchesExpected=_pocketTouchesExpected;
@property long long requestedMode; // @synthesize requestedMode=_requestedMode;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000100023b0c
@property(readonly, nonatomic, getter=isValid) _Bool valid;

@end

