/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/TestProbe.h>
#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSURLSession, NSURLSessionDataTask, NSURL, NSString;

@interface TestHTTPProbe : TestProbe <NSURLSessionDelegate> {

	NSURLSession* _urlSession;
	NSURLSessionDataTask* _urlSessionTask;
	NSURL* _urlToTest;

}

@property (nonatomic,retain) NSURL * urlToTest;                     //@synthesize urlToTest=_urlToTest - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(NSURL *)urlToTest;
-(void)testURL:(id)arg1 timeout:(double)arg2 interfaceName:(id)arg3 userAgent:(id)arg4 reply:(/*^block*/id)arg5 ;
-(void)stopTest;
-(void)setUrlToTest:(NSURL *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
@end

