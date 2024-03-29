/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SAPersonAttribute, NSString;

@interface SAPhoneIncomingCallSearchResult : SADomainObject

@property (nonatomic,retain) SAPersonAttribute * caller; 
@property (nonatomic,copy) NSString * incomingCallType; 
+(id)incomingCallSearchResult;
+(id)incomingCallSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAPersonAttribute *)caller;
-(id)encodedClassName;
-(void)setCaller:(SAPersonAttribute *)arg1 ;
-(NSString *)incomingCallType;
-(void)setIncomingCallType:(NSString *)arg1 ;
@end

