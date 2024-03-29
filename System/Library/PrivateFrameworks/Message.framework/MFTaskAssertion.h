/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class BKSProcessAssertion, NSObject;

@interface MFTaskAssertion : NSObject {

	BKSProcessAssertion* _assertion;
	NSObject*<OS_dispatch_source> _timer;

}
-(id)initWithName:(id)arg1 expiration:(double)arg2 preventIdleSleep:(BOOL)arg3 ;
-(void)cancelTimer;
-(id)initWithName:(id)arg1 preventIdleSleep:(BOOL)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(id)initWithName:(id)arg1 ;
-(BOOL)isValid;
@end

