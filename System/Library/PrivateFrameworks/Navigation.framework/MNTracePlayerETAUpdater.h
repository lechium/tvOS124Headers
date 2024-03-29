/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOETAUpdater.h>

@class NSTimer;

@interface MNTracePlayerETAUpdater : GEOETAUpdater {

	NSTimer* _delayTimer;

}
-(void)requestUpdate;
-(void)startUpdateRequests;
-(void)_timerFiredWithResponse:(id)arg1 currentStep:(id)arg2 percentOfStepRemaining:(double)arg3 error:(id)arg4 ;
-(void)playETAUpdate:(id)arg1 ;
-(void)dealloc;
-(void)reset;
@end

