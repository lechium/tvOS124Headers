/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSString;

@interface SASEndpointStatus : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) BOOL confirmed; 
@property (nonatomic,copy) NSNumber * endpointConfirmationTimestamp; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)endpointStatus;
+(id)endpointStatusWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)endpointConfirmationTimestamp;
-(void)setEndpointConfirmationTimestamp:(NSNumber *)arg1 ;
-(void)setConfirmed:(BOOL)arg1 ;
-(BOOL)confirmed;
@end

