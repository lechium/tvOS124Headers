/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AVCallbackCancellation;
@class NSObject, AVKVODispatcher, AVWeakReference, NSString, AVTwoPartKeyPath;

@interface AVKeyPathDependency : NSObject {

	NSObject*<OS_dispatch_queue> _subObjectRegistrationQueue;
	AVKVODispatcher* _KVODispatcher;
	AVWeakReference* _weakReferenceToObject;
	NSString* _dependentKey;
	AVTwoPartKeyPath* _dependencyKeyPath;
	id<AVCallbackCancellation> _leafPropertyChangeNotifier;

}
+(void)initialize;
-(void)finalize;
-(void)initializationIsCompleteForObject:(id)arg1 ;
-(id)initWithObject:(id)arg1 thatHasPropertyWithKey:(id)arg2 whoseValueDependsOnValueAtKeyPath:(id)arg3 ;
-(void)_reactToTopLevelPropertyChange:(id)arg1 ;
-(void)_startObservingSecondLevelPropertyOnNewCurrentValueForTopLevelDependencyProperty:(id)arg1 ;
-(void)_reactToSecondLevelPropertyChange:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end
