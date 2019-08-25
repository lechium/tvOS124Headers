/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface VSScriptSecurityOrigin : NSObject {

	NSString* _scheme;
	NSString* _host;
	long long _port;

}

@property (nonatomic,copy) NSString * scheme;              //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,copy) NSString * host;                //@synthesize host=_host - In the implementation block
@property (assign,nonatomic) long long port;               //@synthesize port=_port - In the implementation block
-(void)setHost:(NSString *)arg1 ;
-(void)setScheme:(NSString *)arg1 ;
-(void)setPort:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)host;
-(NSString *)scheme;
-(long long)port;
@end

