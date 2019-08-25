/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REIndentedDescription.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSOrderedSet, NSString, REHistoricSectionDescriptor, NSArray, NSSet;

@interface RESectionDescriptor : NSObject <REIndentedDescription, NSCopying> {

	NSOrderedSet* _rules;
	NSString* _name;
	REHistoricSectionDescriptor* _historicSectionDescriptor;
	long long _maxElementCount;

}

@property (nonatomic,retain) NSArray * orderedRules; 
@property (nonatomic,copy) NSString * name;                                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) REHistoricSectionDescriptor * historicSectionDescriptor;              //@synthesize historicSectionDescriptor=_historicSectionDescriptor - In the implementation block
@property (assign,nonatomic) long long maxElementCount;                                            //@synthesize maxElementCount=_maxElementCount - In the implementation block
@property (nonatomic,copy) NSSet * rules; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultSectionDescriptorForIdentifier:(id)arg1 ;
-(NSSet *)rules;
-(void)setRules:(NSSet *)arg1 ;
-(id)descriptionWithIndent:(unsigned long long)arg1 ;
-(long long)maxElementCount;
-(void)setMaxElementCount:(long long)arg1 ;
-(REHistoricSectionDescriptor *)historicSectionDescriptor;
-(NSArray *)orderedRules;
-(void)setOrderedRules:(NSArray *)arg1 ;
-(void)setHistoricSectionDescriptor:(REHistoricSectionDescriptor *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

