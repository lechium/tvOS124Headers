/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CSIndexExtensionDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, _MDIndexExtensionLoader, NSDictionary, NSCondition, NSString;

@interface _MDIndexExtensionManager : NSObject <CSIndexExtensionDelegate> {

	NSObject*<OS_dispatch_queue> _notifyQueue;
	_MDIndexExtensionLoader* _extensionLoader;
	NSDictionary* _indexExtensionsByBundleID;
	NSDictionary* _fileProviderBundleMap;
	NSObject*<OS_dispatch_queue> _queue;
	NSCondition* _extensionsCondition;
	NSObject*<OS_dispatch_queue> _extensionManagerQueue;
	long long _loaderCallbackCount;

}

@property (nonatomic,retain) _MDIndexExtensionLoader * extensionLoader;                       //@synthesize extensionLoader=_extensionLoader - In the implementation block
@property (nonatomic,retain) NSDictionary * indexExtensionsByBundleID;                        //@synthesize indexExtensionsByBundleID=_indexExtensionsByBundleID - In the implementation block
@property (nonatomic,retain) NSDictionary * fileProviderBundleMap;                            //@synthesize fileProviderBundleMap=_fileProviderBundleMap - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSCondition * extensionsCondition;                               //@synthesize extensionsCondition=_extensionsCondition - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> extensionManagerQueue;              //@synthesize extensionManagerQueue=_extensionManagerQueue - In the implementation block
@property (assign,nonatomic) long long loaderCallbackCount;                                   //@synthesize loaderCallbackCount=_loaderCallbackCount - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> notifyQueue;                        //@synthesize notifyQueue=_notifyQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setMemoryPressureStatus:(unsigned long long)arg1 ;
+(id)sharedManager;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)findExtensionsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_notifyForLoadedExtensions;
-(void)_waitForLoadLocked;
-(NSDictionary *)indexExtensionsByBundleID;
-(id)allExtensionsWithBlock:(/*^block*/id)arg1 ;
-(void)_willRunJobWithBundleID:(id)arg1 ;
-(void)_performJob:(id)arg1 extensions:(id)arg2 count:(unsigned long long)arg3 throttle:(id)arg4 perExtensionCompletionHandler:(/*^block*/id)arg5 ;
-(void)_didRetryJobWithBundleID:(id)arg1 ;
-(id)anyExtensionWithBlock:(/*^block*/id)arg1 ;
-(void)_performJob:(id)arg1 extensions:(id)arg2 perExtensionCompletionHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)indexRequestsPerformJob:(id)arg1 forBundle:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)indexRequestsPerformJob:(id)arg1 perExtensionCompletionHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)indexRequestsPerformJob:(id)arg1 extensions:(id)arg2 perExtensionCompletionHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)indexRequestsPerformDataJob:(id)arg1 forBundle:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(NSDictionary *)fileProviderBundleMap;
-(NSObject*<OS_dispatch_queue>)notifyQueue;
-(void)setNotifyQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(_MDIndexExtensionLoader *)extensionLoader;
-(void)setExtensionLoader:(_MDIndexExtensionLoader *)arg1 ;
-(void)setIndexExtensionsByBundleID:(NSDictionary *)arg1 ;
-(void)setFileProviderBundleMap:(NSDictionary *)arg1 ;
-(NSCondition *)extensionsCondition;
-(void)setExtensionsCondition:(NSCondition *)arg1 ;
-(NSObject*<OS_dispatch_queue>)extensionManagerQueue;
-(void)setExtensionManagerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(long long)loaderCallbackCount;
-(void)setLoaderCallbackCount:(long long)arg1 ;
-(void)loadExtensions;
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)extensions;
@end

