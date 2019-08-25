/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:29 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURLRequest, NSURLSessionDataTask, NSMutableData, NSError;

@interface AKURLDataTask : NSObject {

	BOOL _canceledOrCompleted;
	NSURLRequest* _request;
	unsigned long long _retryCount;
	NSURLSessionDataTask* _underlyingTask;
	/*^block*/id _completionHandler;
	NSMutableData* _receivedData;
	NSError* _lastRetryError;

}

@property (nonatomic,retain) NSURLRequest * request;                             //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) unsigned long long retryCount;                      //@synthesize retryCount=_retryCount - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * underlyingTask;              //@synthesize underlyingTask=_underlyingTask - In the implementation block
@property (nonatomic,copy) id completionHandler;                                 //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSMutableData * receivedData;                       //@synthesize receivedData=_receivedData - In the implementation block
@property (nonatomic,retain) NSError * lastRetryError;                           //@synthesize lastRetryError=_lastRetryError - In the implementation block
@property (assign,nonatomic) BOOL canceledOrCompleted;                           //@synthesize canceledOrCompleted=_canceledOrCompleted - In the implementation block
-(void)setRetryCount:(unsigned long long)arg1 ;
-(unsigned long long)retryCount;
-(NSMutableData *)receivedData;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)_completeWithError:(id)arg1 ;
-(void)setCanceledOrCompleted:(BOOL)arg1 ;
-(NSURLSessionDataTask *)underlyingTask;
-(void)setUnderlyingTask:(NSURLSessionDataTask *)arg1 ;
-(NSError *)lastRetryError;
-(void)setLastRetryError:(NSError *)arg1 ;
-(BOOL)canceledOrCompleted;
-(void)setReceivedData:(NSMutableData *)arg1 ;
-(id)description;
-(id)completionHandler;
-(NSURLRequest *)request;
-(void)setCompletionHandler:(id)arg1 ;
@end

