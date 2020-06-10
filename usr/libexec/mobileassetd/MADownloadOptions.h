//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MADownloadOptions : NSObject <NSSecureCoding>
{
    _Bool _allowsCellularAccess;	// 8 = 0x8
    _Bool _canUseLocalCacheServer;	// 9 = 0x9
    _Bool _discretionary;	// 10 = 0xa
    long long _timeoutIntervalForResource;	// 16 = 0x10
    NSMutableDictionary *_additionalServerParams;	// 24 = 0x18
    NSString *_sessionId;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000010000ef1c
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) _Bool discretionary; // @synthesize discretionary=_discretionary;
@property(retain, nonatomic) NSMutableDictionary *additionalServerParams; // @synthesize additionalServerParams=_additionalServerParams;
@property(nonatomic) _Bool canUseLocalCacheServer; // @synthesize canUseLocalCacheServer=_canUseLocalCacheServer;
@property(nonatomic) long long timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
- (void)logOptions;	// IMP=0x000000010000f4d0
- (id)description;	// IMP=0x000000010000f3f8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000010000f26c
- (void)dealloc;	// IMP=0x000000010000f1fc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010000efac
- (id)init;	// IMP=0x000000010000ef24

@end

