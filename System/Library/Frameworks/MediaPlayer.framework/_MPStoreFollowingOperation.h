/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAsyncOperation.h>

@class MPStoreFollowingRequest;

@interface _MPStoreFollowingOperation : MPAsyncOperation {

	MPStoreFollowingRequest* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,retain) MPStoreFollowingRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                               //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)setRequest:(MPStoreFollowingRequest *)arg1 ;
-(void)execute;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(MPStoreFollowingRequest *)request;
@end

