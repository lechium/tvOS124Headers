/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSData, NSNumber;

@interface SACreateSessionInfoResponse : SABaseClientBoundCommand

@property (nonatomic,copy) NSData * sessionInfo; 
@property (nonatomic,copy) NSNumber * validityDuration; 
+(id)createSessionInfoResponse;
+(id)createSessionInfoResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setValidityDuration:(NSNumber *)arg1 ;
-(NSNumber *)validityDuration;
-(void)setSessionInfo:(NSData *)arg1 ;
-(NSData *)sessionInfo;
@end

