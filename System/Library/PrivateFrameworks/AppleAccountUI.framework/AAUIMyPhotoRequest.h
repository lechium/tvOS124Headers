/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccount/AARequest.h>

@class ACAccount, NSString, SSAccount;

@interface AAUIMyPhotoRequest : AARequest {

	ACAccount* _account;
	NSString* _serverCacheTag;
	SSAccount* _iTunesAccount;

}

@property (nonatomic,copy) NSString * serverCacheTag;                                         //@synthesize serverCacheTag=_serverCacheTag - In the implementation block
@property (setter=setiTunesAccount:,nonatomic,retain) SSAccount * iTunesAccount;              //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
+(Class)responseClass;
-(id)urlRequest;
-(id)initWithAccount:(id)arg1 ;
-(id)urlString;
-(NSString *)serverCacheTag;
-(void)setServerCacheTag:(NSString *)arg1 ;
-(void)setiTunesAccount:(id)arg1 ;
-(SSAccount *)iTunesAccount;
@end

