/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SACFAbstractClientCommandCompleted.h>

@class NSString, SACFProvideContext;

@interface SACFFlowCompleted : SACFAbstractClientCommandCompleted

@property (nonatomic,copy) NSString * domain; 
@property (nonatomic,retain) SACFProvideContext * updateContext; 
+(id)flowCompleted;
+(id)flowCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SACFProvideContext *)updateContext;
-(void)setUpdateContext:(SACFProvideContext *)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
-(NSString *)domain;
@end
