/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSArray;

@interface RTLearnedLocationStoreRemoveStats : NSObject {

	unsigned long long _type;
	NSNumber* _ageOfOldestRecordInDays;
	NSArray* _agesInDays;

}

@property (readonly) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (readonly) NSNumber * ageOfOldestRecordInDays;              //@synthesize ageOfOldestRecordInDays=_ageOfOldestRecordInDays - In the implementation block
@property (readonly) NSArray * agesInDays;                            //@synthesize agesInDays=_agesInDays - In the implementation block
+(unsigned long long)typeFromEntityName:(id)arg1 ;
-(NSNumber *)ageOfOldestRecordInDays;
-(NSArray *)agesInDays;
-(id)initWithType:(unsigned long long)arg1 ageOfOldestRecord:(id)arg2 ages:(id)arg3 ;
-(unsigned long long)type;
@end

