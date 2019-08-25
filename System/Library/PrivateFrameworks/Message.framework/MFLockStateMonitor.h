/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:15 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MFObserver;
@class NSObject, MFObservable;

@interface MFLockStateMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	int _token;
	MFObservable*<MFObserver> _observable;
	BOOL _isLocked;

}

@property (nonatomic,readonly) MFObservable * lockStateObservable; 
@property (getter=isLocked,readonly) BOOL locked; 
+(id)sharedInstance;
-(void)_receiveLockState:(BOOL)arg1 ;
-(MFObservable *)lockStateObservable;
-(id)init;
-(void)dealloc;
-(BOOL)isLocked;
@end

