/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSOperationQueue, NSObject;

@interface PHAssetResourceManager : NSObject {

	NSMutableDictionary* _requestsById;
	NSOperationQueue* _resourceRequestQueue;
	NSObject*<OS_dispatch_queue> _serialQueue;
	int _currentRequestID;

}
+(id)defaultManager;
-(void)_synchronized:(/*^block*/id)arg1 ;
-(void)_streamWriteDataForAssetResource:(id)arg1 toFile:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)requestFileURLForAssetResource:(id)arg1 options:(id)arg2 urlReceivedHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)assetUUIDsWithNonLocalResourcesForAssetUUIDs:(id)arg1 cplResourceTypes:(id)arg2 ;
-(id)photoLibrary;
-(void)writeDataForAssetResource:(id)arg1 toFile:(id)arg2 options:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(int)requestDataForAssetResource:(id)arg1 options:(id)arg2 dataReceivedHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)cancelDataRequest:(int)arg1 ;
-(id)init;
-(void)dealloc;
@end

