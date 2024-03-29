/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber;

@interface SANPGetNowPlayingQueueDetails : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * hashedRouteUIDs; 
@property (assign,nonatomic) long long nextItemCount; 
@property (nonatomic,copy) NSNumber * preemptiveNowPlayingQueueDetailsTimeOut; 
@property (assign,nonatomic) long long previousItemCount; 
+(id)getNowPlayingQueueDetails;
+(id)getNowPlayingQueueDetailsWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(NSArray *)hashedRouteUIDs;
-(void)setHashedRouteUIDs:(NSArray *)arg1 ;
-(long long)nextItemCount;
-(void)setNextItemCount:(long long)arg1 ;
-(NSNumber *)preemptiveNowPlayingQueueDetailsTimeOut;
-(void)setPreemptiveNowPlayingQueueDetailsTimeOut:(NSNumber *)arg1 ;
-(long long)previousItemCount;
-(void)setPreviousItemCount:(long long)arg1 ;
@end

