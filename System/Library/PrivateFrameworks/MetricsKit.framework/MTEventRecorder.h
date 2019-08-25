/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetricsKit/MTObject.h>

@protocol MTEventRecorderDelegate;
@interface MTEventRecorder : MTObject {

	id<MTEventRecorderDelegate> _delegate;

}

@property (assign,nonatomic) BOOL monitorsLifecycleEvents; 
@property (assign,nonatomic,__weak) id<MTEventRecorderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)recordEvent:(id)arg1 ;
-(BOOL)monitorsLifecycleEvents;
-(void)setMonitorsLifecycleEvents:(BOOL)arg1 ;
-(id)recordEvent:(id)arg1 shouldSkipValidation:(BOOL)arg2 ;
-(id)sendMethod;
-(id)_amsDelegate;
-(id)recordEvent:(id)arg1 toTopic:(id)arg2 ;
-(void)setDelegate:(id<MTEventRecorderDelegate>)arg1 ;
-(id<MTEventRecorderDelegate>)delegate;
-(id)flushUnreportedEvents;
@end

