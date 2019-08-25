/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBSOrientationObserverClientDelegate.h>

@protocol OS_dispatch_queue;
@class FBSOrientationObserverClient, NSObject, NSString;

@interface FBSOrientationObserver : NSObject <FBSOrientationObserverClientDelegate> {

	FBSOrientationObserverClient* _client;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _callback_queue;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)activeInterfaceOrientationWithCompletion:(/*^block*/id)arg1 ;
-(void)client:(id)arg1 handleOrientationUpdate:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)invalidate;
-(long long)activeInterfaceOrientation;
@end

