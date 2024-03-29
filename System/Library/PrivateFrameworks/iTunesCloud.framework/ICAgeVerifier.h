/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface ICAgeVerifier : NSObject <NSCopying> {

	long long _status;
	NSDate* _verificationExpirationDate;

}

@property (nonatomic,copy) NSDate * verificationExpirationDate;                                          //@synthesize verificationExpirationDate=_verificationExpirationDate - In the implementation block
@property (assign,nonatomic) long long status;                                                           //@synthesize status=_status - In the implementation block
@property (getter=isExplicitContentAllowed,nonatomic,readonly) BOOL explicitContentAllowed; 
-(id)initWithUserProperties:(id)arg1 ;
-(NSDate *)verificationExpirationDate;
-(void)runAgeVerification;
-(void)setVerificationExpirationDate:(NSDate *)arg1 ;
-(BOOL)isExplicitContentAllowed;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
@end

