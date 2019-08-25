/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSURLSessionDownloadTask;

@interface _TVURLSessionDownloadTaskWrapper : NSObject {

	NSURL* _url;
	NSURLSessionDownloadTask* _downloadTask;
	long long _downloadTaskID;
	long long _state;

}

@property (nonatomic,readonly) long long state; 
-(void)resumeWithCompletionHandler:(/*^block*/id)arg1 ;
-(long long)state;
-(void)cancel;
-(id)initWithURL:(id)arg1 ;
@end

