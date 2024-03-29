/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OSAnalytics/OSASubmitter.h>

@protocol OS_dispatch_semaphore;
@class NSURL, NSURLConnection, NSHTTPURLResponse, NSMutableData, NSObject;

@interface OSAHttpSubmitter : OSASubmitter {

	NSURL* _submissionURL;
	NSURLConnection* _connection;
	NSHTTPURLResponse* _response;
	NSMutableData* _payload;
	NSObject*<OS_dispatch_semaphore> _submissionSem;
	BOOL _submitOkFlag;
	unsigned _thoughput_warnings;
	double _last_thoughput_check;

}
-(id)initWithEndpoint:(int)arg1 ;
-(void)abort;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(void)startConnection:(id)arg1 ;
-(void)postContent:(id)arg1 withHeaders:(id)arg2 ;
-(void)cleanupConnectionAndDisable:(id)arg1 ;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
@end

