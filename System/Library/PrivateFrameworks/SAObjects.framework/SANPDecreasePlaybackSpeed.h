/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSArray;

@interface SANPDecreasePlaybackSpeed : SADomainCommand

@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
+(id)decreasePlaybackSpeed;
+(id)decreasePlaybackSpeedWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
@end

