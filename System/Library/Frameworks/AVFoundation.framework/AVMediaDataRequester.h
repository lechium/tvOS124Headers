/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVMediaDataRequesterConsumer, OS_dispatch_queue;
@class NSObject;

@interface AVMediaDataRequester : NSObject {

	id<AVMediaDataRequesterConsumer> _mediaDataConsumer;
	NSObject*<OS_dispatch_queue> _requestQueue;
	/*^block*/id _requestBlock;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> requestQueue;              //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,readonly) id requestBlock;                                        //@synthesize requestBlock=_requestBlock - In the implementation block
-(void)finalize;
-(void)startRequestingMediaData;
-(id)initWithMediaDataConsumer:(id)arg1 requestQueue:(id)arg2 requestBlock:(/*^block*/id)arg3 ;
-(void)_requestMediaDataIfReady;
-(id)requestBlock;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(id)init;
-(void)dealloc;
-(void)invalidate;
@end

