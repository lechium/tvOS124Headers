//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"
#import "TVCacheDeletePurging-Protocol.h"

@class NSString, NSURL;

@interface TVFilePurgeTask : NSObject <TVCacheDeletePurging, NSSecureCoding>
{
    NSURL *_cacheURL;	// 8 = 0x8
    long long _urgency;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100006720
@property(readonly, nonatomic) long long urgency; // @synthesize urgency=_urgency;
@property(readonly, nonatomic) NSURL *cacheURL; // @synthesize cacheURL=_cacheURL;
- (void).cxx_destruct;	// IMP=0x0000000100006cdc
@property(readonly, copy) NSString *description;
- (long long)purgeAmount:(long long)arg1 withUrgency:(long long)arg2;	// IMP=0x000000010000698c
- (long long)purgeableAmountWithUrgency:(long long)arg1;	// IMP=0x00000001000068a4
- (id)initWithCoder:(id)arg1;	// IMP=0x00000001000067d0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100006728
- (id)initWithURL:(id)arg1 urgency:(long long)arg2;	// IMP=0x0000000100006690
- (id)init;	// IMP=0x000000010000667c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
