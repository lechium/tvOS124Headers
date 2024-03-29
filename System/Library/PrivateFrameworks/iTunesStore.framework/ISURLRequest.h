/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLock, SSMutableURLRequestProperties, NSString, NSData, NSInputStream, NSDictionary, NSURL, NSArray;

@interface ISURLRequest : NSObject <NSSecureCoding, NSCopying> {

	NSLock* _lock;
	SSMutableURLRequestProperties* _properties;

}

@property (retain) NSString * appleClientApplication; 
@property (retain) NSData * HTTPBody; 
@property (retain) NSInputStream * HTTPBodyStream; 
@property (retain) NSString * HTTPMethod; 
@property (retain) NSDictionary * queryStringDictionary; 
@property (readonly) NSURL * primaryURL; 
@property (retain) NSArray * URLs; 
@property (assign) long long allowedRetryCount; 
@property (assign) double timeoutInterval; 
@property (assign) unsigned long long cachePolicy; 
@property (retain) NSDictionary * customHeaders; 
@property (assign) long long URLBagType; 
@property (assign) long long expectedContentLength; 
+(BOOL)supportsSecureCoding;
+(id)requestWithURL:(id)arg1 ;
-(unsigned long long)cachePolicy;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(NSString *)HTTPMethod;
-(double)timeoutInterval;
-(NSData *)HTTPBody;
-(void)setHTTPMethod:(NSString *)arg1 ;
-(void)setHTTPBody:(NSData *)arg1 ;
-(long long)expectedContentLength;
-(void)setExpectedContentLength:(long long)arg1 ;
-(id)_initCommon;
-(NSInputStream *)HTTPBodyStream;
-(long long)allowedRetryCount;
-(long long)URLBagType;
-(void)setURLBagType:(long long)arg1 ;
-(NSString *)appleClientApplication;
-(void)setAppleClientApplication:(NSString *)arg1 ;
-(NSDictionary *)customHeaders;
-(NSDictionary *)queryStringDictionary;
-(NSURL *)primaryURL;
-(void)setCustomHeaders:(NSDictionary *)arg1 ;
-(void)setQueryStringDictionary:(NSDictionary *)arg1 ;
-(void)setValue:(id)arg1 forHeaderField:(id)arg2 ;
-(void)setValue:(id)arg1 forQueryStringParameter:(id)arg2 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)setAllowedRetryCount:(long long)arg1 ;
-(id)initWithRequestProperties:(id)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
-(id)requestProperties;
-(void)setHTTPBodyStream:(NSInputStream *)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSArray *)URLs;
-(void)setURLs:(NSArray *)arg1 ;
@end

