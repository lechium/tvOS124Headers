/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSProgress, NSOperationQueue, NSObject, MPCModelStorePlaybackItemsRequest;

@interface MPCModelStorePlaybackItemsRequestOperation : MPAsyncOperation {

	NSProgress* _activeProgress;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _activeProgressQueue;
	MPCModelStorePlaybackItemsRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy,readonly) MPCModelStorePlaybackItemsRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) id responseHandler;                                       //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)execute;
-(id)initWithRequest:(id)arg1 responseHandler:(/*^block*/id)arg2 ;
-(void)_getShouldLibraryPersonalizeRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)responseHandler;
-(void)cancel;
-(MPCModelStorePlaybackItemsRequest *)request;
@end
