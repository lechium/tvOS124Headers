/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WatchListKit/WatchListKit-Structs.h>
@class NSString, NSDictionary, NSNumber;

@interface WLKURLRequestProperties : NSObject {

	NSString* _endpoint;
	NSString* _httpMethod;
	NSDictionary* _queryParameters;
	NSDictionary* _headers;
	NSString* _caller;
	NSNumber* _timeout;
	long long _options;

}

@property (nonatomic,copy) NSString * endpoint;                         //@synthesize endpoint=_endpoint - In the implementation block
@property (nonatomic,copy) NSString * httpMethod;                       //@synthesize httpMethod=_httpMethod - In the implementation block
@property (nonatomic,copy) NSDictionary * queryParameters;              //@synthesize queryParameters=_queryParameters - In the implementation block
@property (nonatomic,copy) NSDictionary * headers;                      //@synthesize headers=_headers - In the implementation block
@property (nonatomic,copy) NSString * caller;                           //@synthesize caller=_caller - In the implementation block
@property (nonatomic,copy) NSNumber * timeout;                          //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) long long options;                         //@synthesize options=_options - In the implementation block
+(id)requestPropertiesWithEndpoint:(id)arg1 ;
+(id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 caller:(id)arg4 ;
+(id)requestPropertiesWithEndpoint:(id)arg1 queryParameters:(id)arg2 httpMethod:(id)arg3 headers:(id)arg4 caller:(id)arg5 timeout:(id)arg6 options:(long long)arg7 ;
-(void)setTimeout:(NSNumber *)arg1 ;
-(NSNumber *)timeout;
-(NSDictionary *)queryParameters;
-(NSString *)caller;
-(void)setHttpMethod:(NSString *)arg1 ;
-(void)setQueryParameters:(NSDictionary *)arg1 ;
-(void)setCaller:(NSString *)arg1 ;
-(NSString *)httpMethod;
-(id)URLRequestWithConfiguration:(id)arg1 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(void)setEndpoint:(NSString *)arg1 ;
-(NSDictionary *)headers;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)options;
-(void)setOptions:(long long)arg1 ;
-(id)shortDescription;
-(NSString *)endpoint;
@end

