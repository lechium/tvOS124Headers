/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, SAIntentGroupProtobufMessage;

@interface SAIntentGroupResolveAppForIntent : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * appsList; 
@property (nonatomic,retain) SAIntentGroupProtobufMessage * intent; 
+(id)resolveAppForIntent;
+(id)resolveAppForIntentWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setIntent:(SAIntentGroupProtobufMessage *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)appsList;
-(void)setAppsList:(NSArray *)arg1 ;
-(SAIntentGroupProtobufMessage *)intent;
@end
