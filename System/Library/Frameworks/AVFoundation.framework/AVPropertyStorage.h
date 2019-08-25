/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSArray;

@interface AVPropertyStorage : NSObject {

	NSObject*<OS_dispatch_queue> _storageAccessWorkQueue;
	NSMutableDictionary* _propertyStorage;
	NSArray* _keysRequiringExplicitPerThreadSignal;
	long long _cachePolicy;

}
-(void)finalize;
-(id)initWithCachePolicy:(long long)arg1 keysRequiringExplicitPerThreadSignal:(id)arg2 ;
-(void)willAccessKVOForKey:(id)arg1 ;
-(void)didAccessKVOForKey:(id)arg1 ;
-(void)willAccessKVOForAllKeys;
-(void)didAccessKVOForAllKeys;
-(BOOL)shouldUsePropertyStorageCacheForKey:(id)arg1 ;
-(id)objectForKey:(id)arg1 defaultObjectBlock:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
@end
