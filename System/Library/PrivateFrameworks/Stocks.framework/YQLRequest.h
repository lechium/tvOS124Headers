/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@class NSURLSession, NSURLSessionTask, NSURLRequest, NSMutableData, NSString;

@interface YQLRequest : NSObject <NSURLSessionDataDelegate> {

	NSURLSession* _defaultSession;
	NSURLSessionTask* _dataTask;
	NSURLRequest* _request;
	NSMutableData* _rawData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldGenerateOfflineData;
+(void)appendDebugString:(id)arg1 ;
+(void)saveDebugString;
+(void)setShouldGenerateOfflineData:(BOOL)arg1 ;
-(void)parseData:(id)arg1 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)failWithError:(id)arg1 ;
-(id)_yahooDoppelganger_taskForRequest:(id)arg1 delegate:(id)arg2 ;
-(id)taskForRequest:(id)arg1 delegate:(id)arg2 ;
-(void)cancelAndInvalidate;
-(id)YQLLanguageCode;
-(id)YQLCountryCode;
-(void)failToParseWithData:(id)arg1 ;
-(void)didParseData;
-(id)aggregateDictionaryDomain;
-(void)failToParseWithDataSeriesDictionary:(id)arg1 ;
-(void)_createDefaultSession;
-(void)_loadDefaultSessionIfNeeded;
-(id)init;
-(void)dealloc;
-(void)cancel;
-(void)loadRequest:(id)arg1 ;
-(BOOL)isLoading;
@end

