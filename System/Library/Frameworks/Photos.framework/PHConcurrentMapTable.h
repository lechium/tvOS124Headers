/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable;

@interface PHConcurrentMapTable : NSObject {

	NSObject*<OS_dispatch_queue> _isolationQueue;
	NSMapTable* _protectedTable;

}
+(id)mapTable;
-(BOOL)tryRemoveObjectForKey:(id)arg1 ;
-(void)lockedEnumerateKeysAndObjectsUsingBlock:(/*^block*/id)arg1 ;
-(void)_dispatchIsolatedRead:(/*^block*/id)arg1 ;
-(void)_dispatchIsolatedWriteAsync:(/*^block*/id)arg1 ;
-(void)_dispatchIsolatedWriteSync:(/*^block*/id)arg1 ;
-(id)init;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(void)removeAllObjects;
-(void)removeObjectForKey:(id)arg1 ;
-(id)allKeys;
@end

