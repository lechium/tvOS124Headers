/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIDeviceMediaLibrary.h>

@protocol OS_dispatch_queue;
@class VUIPlistMediaDatabase, NSObject, NSOperationQueue;

@interface VUIPlistMediaLibrary : VUIDeviceMediaLibrary {

	VUIPlistMediaDatabase* _database;
	NSObject*<OS_dispatch_queue> _serialProcessingDispatchQueue;
	NSOperationQueue* _serialOperationQueue;

}

@property (nonatomic,retain) VUIPlistMediaDatabase * database;                                        //@synthesize database=_database - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialProcessingDispatchQueue;              //@synthesize serialProcessingDispatchQueue=_serialProcessingDispatchQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * serialOperationQueue;                                 //@synthesize serialOperationQueue=_serialOperationQueue - In the implementation block
-(NSOperationQueue *)serialOperationQueue;
-(VUIPlistMediaDatabase *)database;
-(void)setDatabase:(VUIPlistMediaDatabase *)arg1 ;
-(void)dealloc;
-(id)title;
-(id)enqueueFetchRequests:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)serialProcessingDispatchQueue;
-(id)initWithURL:(id)arg1 manager:(id)arg2 ;
-(void)setSerialProcessingDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)_imageLoadParamsForImageLoaderObject:(id)arg1 ;
-(id)_imageLoadOperationWithParams:(id)arg1 scaleToSize:(CGSize)arg2 cropToFit:(BOOL)arg3 ;
-(id)_imageLoaderIdentifier;
-(id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2 manager:(id)arg3 ;
-(id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)saveMediaEntity:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_enqueueProcessingBlock:(/*^block*/id)arg1 ;
-(void)setSerialOperationQueue:(NSOperationQueue *)arg1 ;
-(void)_handleMediaDatabaseContentsDidChangeNotification:(id)arg1 ;
@end

