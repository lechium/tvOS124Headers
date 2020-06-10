//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Jun 10 2020 10:03:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, _CDContextualPredicate;

@interface CLDuetMonitorRegistrationId : NSObject <NSCopying>
{
    long long _event;	// 8 = 0x8
    _CDContextualPredicate *_predicate;	// 16 = 0x10
    NSString *_duetIdentifier;	// 24 = 0x18
}

+ (id)withEvent:(long long)arg1 andPredicate:(id)arg2;	// IMP=0x00000001004083e0
@property(retain, nonatomic) NSString *duetIdentifier; // @synthesize duetIdentifier=_duetIdentifier;
@property(retain, nonatomic) _CDContextualPredicate *predicate; // @synthesize predicate=_predicate;
@property(nonatomic) long long event; // @synthesize event=_event;
- (void)dealloc;	// IMP=0x00000001004084c8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100408330
- (unsigned long long)hash;	// IMP=0x00000001004082b4
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001004081dc

@end
