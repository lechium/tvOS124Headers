/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, PLLoadRequestKey;

@interface PLImageCacheList : NSObject {

	NSObject*<OS_dispatch_queue> _isolation;
	unsigned _length;
	unsigned _lastFailLocation;
	id* _keys;
	unsigned long long* _keyHashes;
	id* _images;
	PLLoadRequestKey* _dummy[1];

}
+(id)newImageCacheList;
-(id)imageForKey:(id)arg1 ;
-(void)removeImageForKey:(id)arg1 ;
-(void)setImage:(id)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)_init;
@end

