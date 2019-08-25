/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUICore/VUIAsynchronousOperation.h>

@protocol OS_dispatch_source;
@class NSObject, NSDate;

@interface VUIDelayOperation : VUIAsynchronousOperation {

	NSObject*<OS_dispatch_source> _timerSource;
	BOOL _shouldIgnoreTolerance;
	double _delay;
	double _tolerance;
	NSDate* _fireDate;

}

@property (nonatomic,readonly) double delay;                          //@synthesize delay=_delay - In the implementation block
@property (nonatomic,readonly) double tolerance;                      //@synthesize tolerance=_tolerance - In the implementation block
@property (nonatomic,copy,readonly) NSDate * fireDate;                //@synthesize fireDate=_fireDate - In the implementation block
@property (assign,nonatomic) BOOL shouldIgnoreTolerance;              //@synthesize shouldIgnoreTolerance=_shouldIgnoreTolerance - In the implementation block
+(id)delayOperationWithFireDate:(id)arg1 ;
+(id)delayOperationWithDelay:(double)arg1 ;
-(void)_cancelTimer;
-(id)initWithFireDate:(id)arg1 tolerance:(double)arg2 ;
-(void)setShouldIgnoreTolerance:(BOOL)arg1 ;
-(BOOL)shouldIgnoreTolerance;
-(id)initWithDelay:(double)arg1 tolerance:(double)arg2 ;
-(id)init;
-(void)dealloc;
-(double)delay;
-(void)cancel;
-(NSDate *)fireDate;
-(double)tolerance;
-(void)executionDidBegin;
@end
