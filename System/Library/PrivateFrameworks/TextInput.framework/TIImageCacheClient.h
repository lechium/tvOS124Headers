/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <TextInput/TextInput-Structs.h>
@class NSString, NSCache, NSObject, NSXPCConnection;

@interface TIImageCacheClient : NSObject {

	NSString* _path;
	NSString* _imagePath;
	BOOL _hasLocalAccess;
	int _remoteQueryCount;
	BOOL _shouldIdleWhenDone;
	NSCache* _cache;
	NSString* _versionPath;
	NSObject*<OS_dispatch_queue> _serialQueueRemoveImagesBackground;
	NSObject*<OS_dispatch_queue> _serialQueueRemoveImagesDefault;
	NSObject*<OS_dispatch_queue> _storeImageQueue;
	NSObject*<OS_dispatch_queue> _requestQueue;
	NSXPCConnection* _connection;
	BOOL _lockOnRead;

}

@property (nonatomic,readonly) int cacheVersion; 
@property (assign,nonatomic) BOOL lockOnRead;                                //@synthesize lockOnRead=_lockOnRead - In the implementation block
@property (assign,nonatomic) unsigned long long cacheItemLimit; 
-(id)_versionPath;
-(int)cacheVersion;
-(unsigned long long)cacheItemLimit;
-(id)cacheNumberForKey:(id)arg1 ;
-(void*)openAndMmap:(id)arg1 withInfo:(img*)arg2 ;
-(BOOL)imageExistsForKey:(id)arg1 inGroup:(id)arg2 ;
-(void)_createStorageQueueIfNecessary;
-(void)_localStoreImageForKey:(id)arg1 inGroup:(id)arg2 withItem:(id)arg3 ;
-(void)_remoteStoreImageForKey:(id)arg1 inGroup:(id)arg2 withItem:(id)arg3 ;
-(img)_imgForItem:(id)arg1 ;
-(void)_createConnectionIfNecessary;
-(void)_idleIfNecessary:(BOOL)arg1 ;
-(int)_cacheVersion;
-(void)_setCacheVersion:(int)arg1 ;
-(BOOL)lockOnRead;
-(id)imagePath;
-(void)dealloc;
-(id)initWithLocalAccess:(BOOL)arg1 ;
-(void)setLockOnRead:(BOOL)arg1 ;
-(void)setCacheItemLimit:(unsigned long long)arg1 ;
-(void)idleAfter:(double)arg1 ;
-(void)purge;
-(CGImageRef)copyImageForKey:(id)arg1 inGroup:(id)arg2 ;
-(void)storeImageDataForKey:(id)arg1 inGroup:(id)arg2 item:(id)arg3 ;
-(void)setIdleWhenDone;
-(void)removeImagesInGroups:(id)arg1 completion:(/*^block*/id)arg2 ;
-(unsigned long long)imageCount;
@end

