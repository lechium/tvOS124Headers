/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DNDSPairedDeviceStateMonitorDelegate;
@interface DNDSPairedDeviceStateMonitor : NSObject {

	id<DNDSPairedDeviceStateMonitorDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<DNDSPairedDeviceStateMonitorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)pairedDeviceWithError:(id*)arg1 ;
-(void)setDelegate:(id<DNDSPairedDeviceStateMonitorDelegate>)arg1 ;
-(id<DNDSPairedDeviceStateMonitorDelegate>)delegate;
@end

