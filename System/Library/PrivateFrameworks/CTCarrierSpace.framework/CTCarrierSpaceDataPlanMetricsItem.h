/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CTCarrierSpace.framework/CTCarrierSpace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber;

@interface CTCarrierSpaceDataPlanMetricsItem : NSObject <NSSecureCoding> {

	BOOL _capacityValid;
	NSNumber* _capacityBytes;
	long long _units;
	unsigned long long _capacity;

}

@property (nonatomic,retain) NSNumber * capacityBytes;                 //@synthesize capacityBytes=_capacityBytes - In the implementation block
@property (assign,nonatomic) BOOL capacityValid;                       //@synthesize capacityValid=_capacityValid - In the implementation block
@property (assign,nonatomic) long long units;                          //@synthesize units=_units - In the implementation block
@property (assign,nonatomic) unsigned long long capacity;              //@synthesize capacity=_capacity - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)capacityBytes;
-(BOOL)capacityValid;
-(void)setCapacityBytes:(NSNumber *)arg1 ;
-(void)setCapacityValid:(BOOL)arg1 ;
-(long long)units;
-(void)setUnits:(long long)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)capacity;
-(void)setCapacity:(unsigned long long)arg1 ;
@end

