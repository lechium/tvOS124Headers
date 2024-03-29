/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FTCServiceMonitor, NSMutableSet;

@interface FTCServiceContainer : NSObject {

	FTCServiceMonitor* _monitor;
	NSMutableSet* _listeners;

}

@property (nonatomic,retain) FTCServiceMonitor * monitor;                    //@synthesize monitor=_monitor - In the implementation block
@property (nonatomic,retain,readonly) NSMutableSet * listeners;              //@synthesize listeners=_listeners - In the implementation block
-(FTCServiceMonitor *)monitor;
-(BOOL)hasListenerID:(id)arg1 ;
-(BOOL)addListenerID:(id)arg1 ;
-(BOOL)removeListenerID:(id)arg1 ;
-(id)initWithServiceType:(long long)arg1 ;
-(void)setMonitor:(FTCServiceMonitor *)arg1 ;
-(NSMutableSet *)listeners;
-(void)dealloc;
@end

