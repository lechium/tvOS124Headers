/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDefaultObserver.h>

@protocol OS_dispatch_queue;
@class BSAbstractDefaultDomain, NSObject, NSArray, NSString;

@interface _BSDefaultObserver : NSObject <BSDefaultObserver> {

	BSAbstractDefaultDomain* _defaults;
	NSObject*<OS_dispatch_queue> _queue;
	NSArray* _defaultsToObserve;
	/*^block*/id _fireBlock;
	BOOL _invalidated;
	AI _debounceCounter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAbstractDefaultDomain:(id)arg1 defaultsToObserve:(id)arg2 onQueue:(id)arg3 withBlock:(/*^block*/id)arg4 ;
-(void)dealloc;
-(void)invalidate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
@end

