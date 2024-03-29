//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSDate;

@interface PBCableSignalInfo : NSObject <NSSecureCoding, NSCopying>
{
    int _linkQuality;	// 8 = 0x8
    NSDate *_date;	// 16 = 0x10
    double _cableCheckTime;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000100082814
+ (id)currentInfoWithLastCableCheckTime:(double)arg1;	// IMP=0x000000010008262c
+ (int)_linkQuality;	// IMP=0x0000000100082488
@property(nonatomic) int linkQuality; // @synthesize linkQuality=_linkQuality;
@property(readonly, nonatomic) double cableCheckTime; // @synthesize cableCheckTime=_cableCheckTime;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;	// IMP=0x0000000100082eb4
- (id)description;	// IMP=0x0000000100082d00
- (unsigned long long)hash;	// IMP=0x0000000100082c3c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000100082ae8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000100082a38
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000100082964
- (id)initWithCoder:(id)arg1;	// IMP=0x000000010008281c
@property(readonly, nonatomic) long long cableStatus;
- (id)initWithDate:(id)arg1 cableCheckTime:(double)arg2 linkQuality:(int)arg3;	// IMP=0x00000001000826d0

@end

