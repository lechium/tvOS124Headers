/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CNVCardReadingOptions : NSObject {

	unsigned long long _contactLimit;
	NSArray* _propertiesToFetch;
	unsigned long long _maximumValueLength;

}

@property (assign,nonatomic) unsigned long long contactLimit;                    //@synthesize contactLimit=_contactLimit - In the implementation block
@property (nonatomic,copy) NSArray * propertiesToFetch;                          //@synthesize propertiesToFetch=_propertiesToFetch - In the implementation block
@property (assign,nonatomic) unsigned long long maximumValueLength;              //@synthesize maximumValueLength=_maximumValueLength - In the implementation block
-(NSArray *)propertiesToFetch;
-(unsigned long long)contactLimit;
-(unsigned long long)maximumValueLength;
-(void)setContactLimit:(unsigned long long)arg1 ;
-(void)setMaximumValueLength:(unsigned long long)arg1 ;
-(void)setPropertiesToFetch:(NSArray *)arg1 ;
-(id)init;
-(id)description;
@end

