/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSThread.h>

@class NSTimer, NSDate;

@interface _CPPowerAssertionThread : NSThread {

	NSTimer* _timer;
	NSDate* _earliest;

}
-(void)didTimeOut:(id)arg1 ;
-(void)addAssertion:(id)arg1 ;
-(void)main;
@end

