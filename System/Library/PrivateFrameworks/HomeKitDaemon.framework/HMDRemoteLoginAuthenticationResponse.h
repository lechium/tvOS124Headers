/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:55 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMRemoteLoginMessage.h>
#import <libobjc.A.dylib/HMRemoteLoginMessageProtocol.h>

@class ACAccount, NSString, NSDictionary;

@interface HMDRemoteLoginAuthenticationResponse : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol> {

	ACAccount* _loggedInAccount;

}

@property (nonatomic,retain) ACAccount * loggedInAccount;                  //@synthesize loggedInAccount=_loggedInAccount - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDictionary * messagePayload; 
+(id)messageName;
+(id)objWithDict:(id)arg1 ;
+(id)objWithMessage:(id)arg1 ;
+(id)xpcMessageName;
+(BOOL)supportsSecureCoding;
-(id)messageName;
-(NSDictionary *)messagePayload;
-(id)xpcMessageName;
-(ACAccount *)loggedInAccount;
-(void)setLoggedInAccount:(ACAccount *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
@end

