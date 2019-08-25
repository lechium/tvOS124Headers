/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:01 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPAsyncOperation.h>

@protocol OS_dispatch_queue;
@class NSObject, MPModelLibrarySearchRequest;

@interface MPModelLibrarySearchRequestOperation : MPAsyncOperation {

	NSObject*<OS_dispatch_queue> _accessSerialQueue;
	shared_ptr<mlcore::LocalizedSearchQuery>* _runningQuery;
	MPModelLibrarySearchRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) MPModelLibrarySearchRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                                 //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)setRequest:(MPModelLibrarySearchRequest *)arg1 ;
-(void)finishWithError:(id)arg1 ;
-(void)execute;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(id)init;
-(void)cancel;
-(MPModelLibrarySearchRequest *)request;
@end
