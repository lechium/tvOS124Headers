/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:54 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class AAGrandSlamSigner, NSString;

@interface AATrustedDeviceListRequest : AARequest {

	AAGrandSlamSigner* _grandSlamSigner;
	NSString* _heartbeatToken;

}

@property (nonatomic,copy) NSString * heartbeatToken;              //@synthesize heartbeatToken=_heartbeatToken - In the implementation block
+(Class)responseClass;
-(NSString *)heartbeatToken;
-(void)setHeartbeatToken:(NSString *)arg1 ;
-(id)initWithURLString:(id)arg1 accountStore:(id)arg2 grandSlamAccount:(id)arg3 ;
-(id)urlRequest;
-(id)urlString;
@end

