/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VTEventMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSString;

@interface VTPolicy : NSObject <VTEventMonitorDelegate> {

	NSMutableArray* _monitors;
	NSMutableArray* _conditions;
	/*^block*/id _callback;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultVoiceTriggerEnablePolicy;
-(void)setCallback:(/*^block*/id)arg1 ;
-(void)VTEventMonitorDidReceiveEvent:(id)arg1 ;
-(void)subscribeEventMonitor:(id)arg1 ;
-(void)addConditions:(/*^block*/id)arg1 ;
-(BOOL)_checkAllConditionsEnabled;
-(void)notifyCallback:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEnabled;
@end
