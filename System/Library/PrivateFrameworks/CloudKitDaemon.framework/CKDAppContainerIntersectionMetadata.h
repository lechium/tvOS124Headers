/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CKDAppContainerIntersectionMetadata : NSObject {

	long long _tokenRegistered;
	long long _usesAPSPublicToken;
	long long _darkWakeEnabled;

}

@property (assign,nonatomic) long long tokenRegistered;                 //@synthesize tokenRegistered=_tokenRegistered - In the implementation block
@property (assign,nonatomic) long long usesAPSPublicToken;              //@synthesize usesAPSPublicToken=_usesAPSPublicToken - In the implementation block
@property (assign,nonatomic) long long darkWakeEnabled;                 //@synthesize darkWakeEnabled=_darkWakeEnabled - In the implementation block
-(void)setUsesAPSPublicToken:(long long)arg1 ;
-(void)setDarkWakeEnabled:(long long)arg1 ;
-(long long)darkWakeEnabled;
-(long long)tokenRegistered;
-(long long)usesAPSPublicToken;
-(void)setTokenRegistered:(long long)arg1 ;
-(id)init;
@end

