/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol WFCredentialsProviderContext <WFProviderContext>
@property (getter=isPasswordSharingSupported,nonatomic,readonly) BOOL passwordSharingSupported; 
@property (nonatomic,readonly) NSString * username; 
@property (nonatomic,readonly) NSArray * availableTLSIdentities; 
@required
-(BOOL)validateCredentials;
-(BOOL)validatePassword;
-(void)gatherCredentials:(/*^block*/id)arg1;
-(BOOL)isPasswordSharingSupported;
-(NSArray *)availableTLSIdentities;
-(NSString *)username;

@end

