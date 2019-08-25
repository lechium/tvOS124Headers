/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:47 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class ICUserIdentityProperties, ACAccount, ACAccountStore, ICUserIdentityStore;

@interface ICUserVerificationContext : NSObject <NSCopying> {

	long long _interactionLevel;
	ICUserIdentityProperties* _identityProperties;
	ACAccount* _ACAccount;
	ACAccountStore* _ACAccountStore;
	ICUserIdentityStore* _identityStore;
	long long _verificationStyle;

}

@property (nonatomic,retain) ACAccount * ACAccount;                                    //@synthesize ACAccount=_ACAccount - In the implementation block
@property (nonatomic,retain) ACAccountStore * ACAccountStore;                          //@synthesize ACAccountStore=_ACAccountStore - In the implementation block
@property (nonatomic,copy) ICUserIdentityProperties * identityProperties;              //@synthesize identityProperties=_identityProperties - In the implementation block
@property (nonatomic,retain) ICUserIdentityStore * identityStore;                      //@synthesize identityStore=_identityStore - In the implementation block
@property (assign,nonatomic) long long verificationStyle;                              //@synthesize verificationStyle=_verificationStyle - In the implementation block
@property (assign,nonatomic) long long interactionLevel;                               //@synthesize interactionLevel=_interactionLevel - In the implementation block
+(id)contextWithACAccount:(id)arg1 accountStore:(id)arg2 ;
-(void)setIdentityProperties:(ICUserIdentityProperties *)arg1 ;
-(void)setACAccount:(ACAccount *)arg1 ;
-(void)setACAccountStore:(ACAccountStore *)arg1 ;
-(void)setVerificationStyle:(long long)arg1 ;
-(long long)interactionLevel;
-(ACAccount *)ACAccount;
-(ACAccountStore *)ACAccountStore;
-(long long)verificationStyle;
-(void)setIdentityStore:(ICUserIdentityStore *)arg1 ;
-(ICUserIdentityStore *)identityStore;
-(ICUserIdentityProperties *)identityProperties;
-(void)setInteractionLevel:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

