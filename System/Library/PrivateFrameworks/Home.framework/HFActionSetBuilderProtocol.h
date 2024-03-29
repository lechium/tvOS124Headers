/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol HFActionSetBuilderProtocol <NSObject>
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,readonly) BOOL requiresDeviceUnlock; 
@property (getter=isAffectedByEndEvents,nonatomic,readonly) BOOL affectedByEndEvents; 
@required
-(BOOL)requiresDeviceUnlock;
-(BOOL)isAffectedByEndEvents;
-(void)updateAction:(id)arg1;
-(void)removeAction:(id)arg1;
-(void)addAction:(id)arg1;
-(NSArray *)actions;
-(void)removeAllActions;

@end

