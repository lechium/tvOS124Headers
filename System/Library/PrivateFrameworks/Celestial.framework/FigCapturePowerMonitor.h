/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Celestial/Celestial-Structs.h>
@class NSObject;

@interface FigCapturePowerMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _notificationQueue;
	int _registrationToken;
	/*^block*/id _torchHandler;
	OpaqueFigSimpleMutexRef _maxTorchLevelLock;
	float _maxTorchLevel;

}

@property (readonly) float maxTorchLevel; 
+(void)initialize;
-(void)_powerNotification:(unsigned)arg1 ;
-(void)setPowerHandler:(/*^block*/id)arg1 ;
-(float)maxTorchLevel;
-(id)init;
-(void)dealloc;
@end

