/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AdID.framework/AdID
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSData, NSDictionary, NSError, NSString, NSMutableDictionary;

@interface ADJingleRequest : NSObject {

	NSNumber* _token;
	NSData* _responseBody;
	NSDictionary* _responseHeaders;
	NSError* _error;
	long long _statusCode;
	NSString* _DSID;
	/*^block*/id _completionHandler;
	NSString* _bagKey;
	NSData* _requestBody;
	NSMutableDictionary* _requestHeaders;

}

@property (nonatomic,retain) NSNumber * token;                                  //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) id completionHandler;                                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSString * bagKey;                                 //@synthesize bagKey=_bagKey - In the implementation block
@property (nonatomic,retain) NSData * requestBody;                              //@synthesize requestBody=_requestBody - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestHeaders;              //@synthesize requestHeaders=_requestHeaders - In the implementation block
@property (retain) NSData * responseBody;                                       //@synthesize responseBody=_responseBody - In the implementation block
@property (retain) NSDictionary * responseHeaders;                              //@synthesize responseHeaders=_responseHeaders - In the implementation block
@property (copy) NSError * error;                                               //@synthesize error=_error - In the implementation block
@property (assign) long long statusCode;                                        //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy) NSString * DSID;                                     //@synthesize DSID=_DSID - In the implementation block
+(id)incrementToken;
-(void)setStatusCode:(long long)arg1 ;
-(void)setDSID:(NSString *)arg1 ;
-(void)setResponseBody:(NSData *)arg1 ;
-(NSString *)bagKey;
-(NSString *)DSID;
-(NSData *)requestBody;
-(void)handleJingleResponse;
-(void)sendJingleRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(id)init:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NSDictionary *)responseHeaders;
-(NSMutableDictionary *)requestHeaders;
-(void)setResponseHeaders:(NSDictionary *)arg1 ;
-(void)setRequestHeaders:(NSMutableDictionary *)arg1 ;
-(void)setBagKey:(NSString *)arg1 ;
-(void)setRequestBody:(NSData *)arg1 ;
-(NSData *)responseBody;
-(id)completionHandler;
-(void)send;
-(void)setCompletionHandler:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(long long)statusCode;
-(NSNumber *)token;
-(void)setToken:(NSNumber *)arg1 ;
@end

