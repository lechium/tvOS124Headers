/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:26 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface PKAppleAccountInformation : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isSandboxAccount;
	NSString* _aidaAlternateDSID;
	NSString* _aidaToken;
	NSString* _aaAlternateDSID;
	NSString* _appleID;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _primaryEmailAddress;

}

@property (nonatomic,copy) NSString * aidaAlternateDSID;                //@synthesize aidaAlternateDSID=_aidaAlternateDSID - In the implementation block
@property (nonatomic,copy) NSString * aidaToken;                        //@synthesize aidaToken=_aidaToken - In the implementation block
@property (nonatomic,copy) NSString * aaAlternateDSID;                  //@synthesize aaAlternateDSID=_aaAlternateDSID - In the implementation block
@property (nonatomic,copy) NSString * appleID;                          //@synthesize appleID=_appleID - In the implementation block
@property (assign,nonatomic) BOOL isSandboxAccount;                     //@synthesize isSandboxAccount=_isSandboxAccount - In the implementation block
@property (nonatomic,copy) NSString * firstName;                        //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;                         //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * primaryEmailAddress;              //@synthesize primaryEmailAddress=_primaryEmailAddress - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setFirstName:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(id)authorizationHeader;
-(BOOL)aidaAccountAvailable;
-(id)primaryAppleAccountHash;
-(NSString *)aidaAlternateDSID;
-(void)setAidaAlternateDSID:(NSString *)arg1 ;
-(NSString *)aidaToken;
-(void)setAidaToken:(NSString *)arg1 ;
-(NSString *)aaAlternateDSID;
-(void)setAaAlternateDSID:(NSString *)arg1 ;
-(NSString *)appleID;
-(void)setAppleID:(NSString *)arg1 ;
-(BOOL)isSandboxAccount;
-(void)setIsSandboxAccount:(BOOL)arg1 ;
-(NSString *)primaryEmailAddress;
-(void)setPrimaryEmailAddress:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)lastName;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

