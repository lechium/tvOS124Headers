/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AXDeviceMonitorDelegate;
#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSRunLoop;

@interface AXDeviceMonitor : NSObject {

	NSRunLoop* _targetRunLoop;
	IOHIDManagerRef _hidManager;
	unsigned long long _state;
	id<AXDeviceMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AXDeviceMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithMatchingDictionary:(id)arg1 callbackRunLoop:(id)arg2 ;
-(id)copyDevices;
-(void)informDelegate;
-(void)dealloc;
-(void)setDelegate:(id<AXDeviceMonitorDelegate>)arg1 ;
-(id<AXDeviceMonitorDelegate>)delegate;
-(void)invalidate;
-(void)begin;
@end

