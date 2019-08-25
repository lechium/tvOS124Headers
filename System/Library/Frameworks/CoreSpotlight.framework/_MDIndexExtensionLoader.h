/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface _MDIndexExtensionLoader : NSObject {

	id _matchingContext;
	NSObject*<OS_dispatch_queue> _queue;
	long long _notificationCount;

}

@property (nonatomic,retain) id matchingContext;                              //@synthesize matchingContext=_matchingContext - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) long long notificationCount;                     //@synthesize notificationCount=_notificationCount - In the implementation block
+(id)_matchDictionary;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_filterIndexExtensions:(id)arg1 outFileProviderBundleMap:(id*)arg2 ;
-(void)findExtensionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startLookingForExtensionsWithMatchUpdateHandler:(/*^block*/id)arg1 ;
-(void)stopLookingForExtensions;
-(void)setNotificationCount:(long long)arg1 ;
-(long long)notificationCount;
-(id)matchingContext;
-(void)setMatchingContext:(id)arg1 ;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
@end

