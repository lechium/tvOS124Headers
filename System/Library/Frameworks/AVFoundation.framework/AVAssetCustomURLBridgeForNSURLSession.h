/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSURLSession, NSObject, NSString;

@interface AVAssetCustomURLBridgeForNSURLSession : NSObject <NSURLSessionDataDelegate> {

	NSMutableDictionary* _taskToRequest;
	NSURLSession* _session;
	OpaqueFigCustomURLHandlerRef _handler;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (nonatomic,retain) NSURLSession * session;                //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFigAsset:(OpaqueFigAssetRef)arg1 ;
-(void)_registerRequest:(CFDictionaryRef)arg1 id:(unsigned long long)arg2 forDataTask:(id)arg3 ;
-(void)_unregisterRequestForDataTask:(id)arg1 ;
-(id)_lookupRequestForDataTask:(id)arg1 ;
-(int)_handleRequest:(CFDictionaryRef)arg1 requestID:(unsigned long long)arg2 canHandleRequestOut:(BOOL*)arg3 ;
-(int)_cancelRequestID:(unsigned long long)arg1 ;
-(void)setSession:(NSURLSession *)arg1 ;
-(NSURLSession *)session;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)init;
-(void)dealloc;
@end

