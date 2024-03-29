/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFStartSearchFeedback.h>

@class NSString, NSDictionary;

@interface SFStartNetworkSearchFeedback : SFStartSearchFeedback {

	NSString* _url;
	NSDictionary* _headers;
	unsigned long long _endpoint;

}

@property (nonatomic,copy) NSString * url;                             //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSDictionary * headers;                     //@synthesize headers=_headers - In the implementation block
@property (assign,nonatomic) unsigned long long endpoint;              //@synthesize endpoint=_endpoint - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 ;
-(id)initWithInput:(id)arg1 url:(id)arg2 headers:(id)arg3 triggerEvent:(unsigned long long)arg4 endpoint:(unsigned long long)arg5 queryId:(unsigned long long)arg6 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(void)setEndpoint:(unsigned long long)arg1 ;
-(NSDictionary *)headers;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)url;
-(void)setUrl:(NSString *)arg1 ;
-(unsigned long long)endpoint;
@end

