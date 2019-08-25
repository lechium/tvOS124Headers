/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface SFSessionRequestInfo : NSObject {

	NSString* _requestID;
	NSDictionary* _options;
	NSDictionary* _request;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NSString * requestID;                //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSDictionary * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id responseHandler;                  //@synthesize responseHandler=_responseHandler - In the implementation block
-(void)setRequest:(NSDictionary *)arg1 ;
-(NSString *)requestID;
-(void)setRequestID:(NSString *)arg1 ;
-(id)responseHandler;
-(void)setResponseHandler:(id)arg1 ;
-(NSDictionary *)options;
-(NSDictionary *)request;
-(void)setOptions:(NSDictionary *)arg1 ;
@end

