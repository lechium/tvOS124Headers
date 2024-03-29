/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>

@class NSURLSessionDownloadTask, NSURLSession, NSDate, NSString;

@interface TVSWiFiThroughputMeasurementTask : NSObject <NSURLSessionDownloadDelegate> {

	/*^block*/id _completion;
	NSURLSessionDownloadTask* _task;
	NSURLSession* _session;
	NSDate* _startTime;

}

@property (nonatomic,copy) id completion;                                  //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSURLSessionDownloadTask * task;              //@synthesize task=_task - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                       //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSDate * startTime;                           //@synthesize startTime=_startTime - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSession:(NSURLSession *)arg1 ;
-(NSURLSession *)session;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)setTask:(NSURLSessionDownloadTask *)arg1 ;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(id)testDownloadURL;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(NSDate *)startTime;
-(void)setStartTime:(NSDate *)arg1 ;
-(void)cancel;
-(NSURLSessionDownloadTask *)task;
@end

