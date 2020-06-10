//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class CLLocation, NSUUID;

@interface W5SpeedTestRequest : NSObject <NSCopying>
{
    NSUUID *_uuid;	// 8 = 0x8
    CLLocation *_location;	// 16 = 0x10
    long long _size;	// 24 = 0x18
    long long _direction;	// 32 = 0x20
    CDUnknownBlockType _reply;	// 40 = 0x28
}

@property(copy, nonatomic) CDUnknownBlockType reply; // @synthesize reply=_reply;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) long long size; // @synthesize size=_size;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010000401c
- (unsigned long long)hash;	// IMP=0x0000000100004004
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100003f8c
- (_Bool)isEqualToSpeedTestRequest:(id)arg1;	// IMP=0x0000000100003f48
- (id)description;	// IMP=0x0000000100003e18
- (void)dealloc;	// IMP=0x0000000100003d94

@end

