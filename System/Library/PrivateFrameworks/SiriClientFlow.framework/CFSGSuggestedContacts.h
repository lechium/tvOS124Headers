/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>
#import <libobjc.A.dylib/SAAceSerializable.h>

@class NSArray, NSString;

@interface CFSGSuggestedContacts : SADomainCommand <SAAceSerializable>

@property (nonatomic,copy) NSArray * suggestContactMatches; 
@property (nonatomic,copy) NSArray * suggestedContactsWithOrigin; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)suggestedContacts;
+(id)suggestedContactsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)suggestContactMatches;
-(void)setSuggestContactMatches:(NSArray *)arg1 ;
-(NSArray *)suggestedContactsWithOrigin;
-(void)setSuggestedContactsWithOrigin:(NSArray *)arg1 ;
@end

