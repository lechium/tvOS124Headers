/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSDateInterval, NSUUID, NSString, _DKEventStream, NSArray, NSDictionary;

@interface _DKHistogram : NSObject <NSSecureCoding> {

	NSMutableDictionary* _histogram;
	unsigned long long _countOverAllValues;
	NSDateInterval* _interval;
	NSUUID* _identifier;
	NSString* _customIdentifier;
	_DKEventStream* _stream;
	NSArray* _deviceIdentifiers;

}

@property (nonatomic,retain) NSUUID * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * customIdentifier;                        //@synthesize customIdentifier=_customIdentifier - In the implementation block
@property (nonatomic,retain) NSDateInterval * interval;                          //@synthesize interval=_interval - In the implementation block
@property (nonatomic,retain) NSDictionary * histogram;                           //@synthesize histogram=_histogram - In the implementation block
@property (assign,nonatomic) unsigned long long countOverAllValues;              //@synthesize countOverAllValues=_countOverAllValues - In the implementation block
@property (nonatomic,retain) _DKEventStream * stream;                            //@synthesize stream=_stream - In the implementation block
@property (nonatomic,retain) NSArray * deviceIdentifiers;                        //@synthesize deviceIdentifiers=_deviceIdentifiers - In the implementation block
+(id)entityName;
+(BOOL)supportsSecureCoding;
-(void)setCustomIdentifier:(NSString *)arg1 ;
-(NSString *)customIdentifier;
-(NSArray *)deviceIdentifiers;
-(void)_addPropertiesFrom:(id)arg1 ;
-(unsigned long long)countForValue:(id)arg1 ;
-(unsigned long long)countOverAllValues;
-(id)initWithHistogram:(id)arg1 ;
-(void)setDeviceIdentifiers:(NSArray *)arg1 ;
-(double)relativeFrequencyForValue:(id)arg1 ;
-(id)countDictionary;
-(void)subtractValue:(id)arg1 ;
-(void)addHistogram:(id)arg1 ;
-(void)addHistogram:(id)arg1 decayingExistingCounts:(double)arg2 ;
-(void)subtractHistogram:(id)arg1 ;
-(void)setCountOverAllValues:(unsigned long long)arg1 ;
-(id)initWithManagedObject:(id)arg1 ;
-(id)insertInManagedObjectContext:(id)arg1 ;
-(void)setStream:(_DKEventStream *)arg1 ;
-(id)initWithValues:(id)arg1 ;
-(_DKEventStream *)stream;
-(void)setHistogram:(NSDictionary *)arg1 ;
-(NSDictionary *)histogram;
-(id)init;
-(NSUUID *)identifier;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)setIdentifier:(NSUUID *)arg1 ;
-(void)addValue:(id)arg1 ;
-(void)setInterval:(NSDateInterval *)arg1 ;
-(NSDateInterval *)interval;
@end

