/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface _RESectionDescriptor : NSObject {

	BOOL _invertRanking;
	BOOL _allowsSubsections;
	NSString* _name;
	long long _maxElementCount;
	NSArray* _rules;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL invertRanking;                   //@synthesize invertRanking=_invertRanking - In the implementation block
@property (assign,nonatomic) long long maxElementCount;              //@synthesize maxElementCount=_maxElementCount - In the implementation block
@property (nonatomic,copy) NSArray * rules;                          //@synthesize rules=_rules - In the implementation block
@property (nonatomic,readonly) BOOL allowsSubsections;               //@synthesize allowsSubsections=_allowsSubsections - In the implementation block
-(NSArray *)rules;
-(void)setRules:(NSArray *)arg1 ;
-(BOOL)allowsSubsections;
-(BOOL)invertRanking;
-(long long)maxElementCount;
-(void)setMaxElementCount:(long long)arg1 ;
-(id)initWithSectionDescriptor:(id)arg1 ;
-(id)initWithHistoricSectionDescriptor:(id)arg1 ;
-(NSString *)name;
@end

