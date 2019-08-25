/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKDServerConfiguration;

@interface CKDGlobalConfigurationURLRequest : CKDURLRequest {

	CKDServerConfiguration* _configuration;

}

@property (nonatomic,retain) CKDServerConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
-(long long)serverType;
-(id)httpMethod;
-(BOOL)allowsAnonymousAccount;
-(BOOL)requiresSignature;
-(void)requestDidParsePlistObject:(id)arg1 ;
-(long long)partitionType;
-(BOOL)requiresConfiguration;
-(BOOL)requiresDeviceID;
-(BOOL)hasRequestBody;
-(id)additionalHeaderValues;
-(CKDServerConfiguration *)configuration;
-(void)setConfiguration:(CKDServerConfiguration *)arg1 ;
-(id)url;
@end
