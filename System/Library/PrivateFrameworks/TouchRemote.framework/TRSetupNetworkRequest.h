/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRRequestMessage.h>

@class NSString;

@interface TRSetupNetworkRequest : TRRequestMessage {

	NSString* _networkSSID;
	NSString* _networkPassword;

}

@property (nonatomic,copy) NSString * networkSSID;                  //@synthesize networkSSID=_networkSSID - In the implementation block
@property (nonatomic,copy) NSString * networkPassword;              //@synthesize networkPassword=_networkPassword - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setNetworkSSID:(NSString *)arg1 ;
-(void)setNetworkPassword:(NSString *)arg1 ;
-(NSString *)networkSSID;
-(NSString *)networkPassword;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
@end
