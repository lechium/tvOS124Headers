/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:18 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFHTTPRequest.h>

@class NSData, NSDictionary;

@interface HMFMutableHTTPRequest : HMFHTTPRequest

@property (assign,nonatomic) double timeoutInterval; 
@property (nonatomic,copy) NSData * body; 
@property (nonatomic,retain) NSDictionary * headerFields; 
-(id)initWithInternalRequest:(id)arg1 ;
-(id)responseWithStatusCode:(long long)arg1 ;
-(void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2 ;
-(id)initWithURL:(id)arg1 method:(id)arg2 body:(id)arg3 timeoutInterval:(double)arg4 ;
-(void)setBody:(NSData *)arg1 ;
@end
