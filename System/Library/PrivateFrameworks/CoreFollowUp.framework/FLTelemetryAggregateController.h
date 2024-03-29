/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreFollowUp.framework/CoreFollowUp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FLTelemetryController.h>

@class NSString;

@interface FLTelemetryAggregateController : NSObject <FLTelemetryController>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)captureItemRemoval:(id)arg1 ;
-(void)captureItemAddition:(id)arg1 ;
-(void)captureCurrentState:(id)arg1 ;
-(void)captureActionForItemIdentifier:(id)arg1 withEvent:(unsigned long long)arg2 source:(unsigned long long)arg3 ;
-(void)captureActionForItem:(id)arg1 withEvent:(unsigned long long)arg2 source:(unsigned long long)arg3 ;
-(void)captureItemView:(id)arg1 ;
-(void)captureGroupAddition:(id)arg1 ;
-(void)captureGroupRemoval:(id)arg1 ;
-(void)captureClientAddition:(id)arg1 ;
-(void)captureClientRemoval:(id)arg1 ;
@end

