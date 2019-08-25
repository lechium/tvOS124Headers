/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:51:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSURLRequest, NSData, NSURLResponse, NSError, NSURLSession, NSURLSessionDataTask;

@interface VUIURLRequestOperation : VUIAsynchronousOperation {

	NSURLRequest* _request;
	NSData* _data;
	NSURLResponse* _response;
	NSError* _error;
	NSURLSession* _session;
	NSURLSessionDataTask* _task;
	unsigned long long _taskStartTime;

}

@property (nonatomic,retain) NSURLRequest * request;                                      //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) NSData * data;                                                 //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) NSURLResponse * response;                                      //@synthesize response=_response - In the implementation block
@property (nonatomic,copy) NSURLSession * session;                                        //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSURLSessionDataTask * task;                                   //@synthesize task=_task - In the implementation block
@property (assign,nonatomic) unsigned long long taskStartTime;                            //@synthesize taskStartTime=_taskStartTime - In the implementation block
@property (nonatomic,copy) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) unsigned long long elapsedTimeInMilliseconds; 
-(void)setSession:(NSURLSession *)arg1 ;
-(NSURLSession *)session;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(void)setResponse:(NSURLResponse *)arg1 ;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(id)initWithRequest:(id)arg1 session:(id)arg2 ;
-(unsigned long long)taskStartTime;
-(void)_handleResponse:(id)arg1 responseData:(id)arg2 error:(id)arg3 ;
-(void)setTaskStartTime:(unsigned long long)arg1 ;
-(unsigned long long)elapsedTimeInMilliseconds;
-(id)init;
-(void)cancel;
-(NSURLRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(NSURLResponse *)response;
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSURLSessionDataTask *)task;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)executionDidBegin;
@end

