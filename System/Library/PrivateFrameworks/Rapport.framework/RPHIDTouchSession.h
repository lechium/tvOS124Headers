/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, RPMessageable;
#import <Rapport/Rapport-Structs.h>
@class NSObject, NSNumber;

@interface RPHIDTouchSession : NSObject {

	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSNumber* _touchSessionID;
	unsigned _flags;
	id<RPMessageable> _messenger;
	CGSize _screenSize;

}

@property (assign,nonatomic) unsigned flags;                           //@synthesize flags=_flags - In the implementation block
@property (nonatomic,retain) id<RPMessageable> messenger;              //@synthesize messenger=_messenger - In the implementation block
@property (assign,nonatomic) CGSize screenSize;                        //@synthesize screenSize=_screenSize - In the implementation block
-(unsigned)flags;
-(CGSize)screenSize;
-(void)setFlags:(unsigned)arg1 ;
-(id<RPMessageable>)messenger;
-(void)setMessenger:(id<RPMessageable>)arg1 ;
-(void)sendTouchEvent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_activateWithCompletion:(/*^block*/id)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(void)invalidate;
-(void)_invalidate;
-(void)setScreenSize:(CGSize)arg1 ;
@end

