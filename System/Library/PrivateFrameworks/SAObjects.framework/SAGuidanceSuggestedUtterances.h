/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray;

@interface SAGuidanceSuggestedUtterances : SADomainObject

@property (nonatomic,copy) NSArray * utterances; 
+(id)suggestedUtterances;
+(id)suggestedUtterancesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)utterances;
-(void)setUtterances:(NSArray *)arg1 ;
@end

