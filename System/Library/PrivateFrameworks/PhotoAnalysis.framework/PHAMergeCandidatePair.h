/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PHAMergeCandidatePair : NSObject {

	unsigned long long _hash;
	NSString* _person1LocalIdentifier;
	NSString* _person2LocalIdentifier;
	NSString* _reason;

}

@property (readonly) NSString * person1LocalIdentifier;              //@synthesize person1LocalIdentifier=_person1LocalIdentifier - In the implementation block
@property (readonly) NSString * person2LocalIdentifier;              //@synthesize person2LocalIdentifier=_person2LocalIdentifier - In the implementation block
@property (readonly) NSString * reason;                              //@synthesize reason=_reason - In the implementation block
+(id)mergeCandidatePairWithPerson:(id)arg1 andPerson:(id)arg2 reason:(id)arg3 ;
-(NSString *)person1LocalIdentifier;
-(NSString *)person2LocalIdentifier;
-(id)initWithPerson:(id)arg1 andPerson:(id)arg2 reason:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)reason;
@end

