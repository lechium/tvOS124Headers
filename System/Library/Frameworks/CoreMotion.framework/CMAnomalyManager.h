/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:28 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source, CMAnomalyDelegate;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject, CMAnomalyEvent;

@interface CMAnomalyManager : NSObject {

	NSObject*<OS_dispatch_queue> fPrivateQueue;
	NSObject*<OS_dispatch_queue> fAppQueue;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	CLConnectionClient* fLocationdConnection;
	CMAnomalyEvent* fLastReceivedEvent;
	CMAnomalyEvent* fLastDispatchedEvent;
	BOOL fRegisteredForNotification;
	id<CMAnomalyDelegate> _delegate;

}

@property (assign,nonatomic) id<CMAnomalyDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(BOOL)isAnomalyDetectionAvailable;
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(void)_registerForAnomalyDetection:(BOOL)arg1 ;
-(void)_sendRegistrationForAnomalyEvent:(id)arg1 ;
-(void)startAnomalyDetection;
-(void)stopAnomalyDetection;
-(void)ackAnomalyEvent:(id)arg1 withResolution:(long long)arg2 ;
-(void)respondToAnomalyEvent:(id)arg1 withResponse:(long long)arg2 ;
-(void)resolveAnomalyEvent:(id)arg1 withResolution:(long long)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<CMAnomalyDelegate>)arg1 ;
-(id<CMAnomalyDelegate>)delegate;
@end

