/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface AVKeyValueObservationController : NSObject {

	NSObject*<OS_dispatch_queue> _controllerIvarAccessQueue;
	NSMutableDictionary* _proxyObserversByTokens;
	id _owner;

}
-(void)stopObserving:(id)arg1 ;
-(id)initWithOwner:(id)arg1 ;
-(id)startObserving:(id)arg1 keyPaths:(id)arg2 includeInitialValue:(BOOL)arg3 observationHandler:(/*^block*/id)arg4 ;
-(id)startObserving:(id)arg1 keyPath:(id)arg2 includeInitialValue:(BOOL)arg3 observationHandler:(/*^block*/id)arg4 ;
-(void)stopAllObservation;
-(void)_stopAllObservation;
-(void)dealloc;
@end

