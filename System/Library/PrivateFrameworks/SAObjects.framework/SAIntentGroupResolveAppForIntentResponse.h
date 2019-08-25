/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSNumber, NSString;

@interface SAIntentGroupResolveAppForIntentResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * appsList; 
@property (nonatomic,copy) NSNumber * needsConfirmation; 
@property (nonatomic,copy) NSString * resolutionType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)resolveAppForIntentResponse;
+(id)resolveAppForIntentResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)appsList;
-(void)setAppsList:(NSArray *)arg1 ;
-(NSNumber *)needsConfirmation;
-(void)setNeedsConfirmation:(NSNumber *)arg1 ;
-(void)setResolutionType:(NSString *)arg1 ;
-(NSString *)resolutionType;
@end
