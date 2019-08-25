/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>

@class NSString;

@interface UnitTestSessionTaskDelegate : NSObject <NSURLSessionTaskDelegate> {

	SmartBlockWithArgs<NSURLSessionTaskMetrics *>* _didFinishCollectingMetricsCompletionBlock;

}

@property (assign,nonatomic) SmartBlockWithArgs<NSURLSessionTaskMetrics *>* didFinishCollectingMetricsCompletionBlock;              //@synthesize didFinishCollectingMetricsCompletionBlock=_didFinishCollectingMetricsCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SmartBlockWithArgs<NSURLSessionTaskMetrics *>*)didFinishCollectingMetricsCompletionBlock;
-(void)setDidFinishCollectingMetricsCompletionBlock:(SmartBlockWithArgs<NSURLSessionTaskMetrics *>*)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3 ;
@end

