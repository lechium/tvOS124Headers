/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDate;


@protocol _DKHistoricalMonitor <_DKMonitor>
@property (nonatomic,copy) id historicalHandler; 
@property (nonatomic,copy) id shutdownHandler; 
@property (nonatomic,readonly) NSDate * lastUpdate; 
@required
-(id)historicalHandler;
-(void)setHistoricalHandler:(/*^block*/id)arg1;
-(id)shutdownHandler;
-(void)setShutdownHandler:(/*^block*/id)arg1;
-(void)update;
-(NSDate *)lastUpdate;

@end

