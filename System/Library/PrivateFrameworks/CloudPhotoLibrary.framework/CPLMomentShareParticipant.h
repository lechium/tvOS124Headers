/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSPersonNameComponents;

@interface CPLMomentShareParticipant : NSObject <NSSecureCoding, NSCopying> {

	BOOL _hasiCloudAccount;
	BOOL _isCurrentUser;
	short _type;
	short _status;
	NSString* _email;
	NSString* _phoneNumber;
	NSString* _userIdentifier;
	NSPersonNameComponents* _nameComponents;

}

@property (nonatomic,copy) NSString * email;                                     //@synthesize email=_email - In the implementation block
@property (nonatomic,copy) NSString * phoneNumber;                               //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (nonatomic,copy) NSString * userIdentifier;                            //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,copy) NSPersonNameComponents * nameComponents;              //@synthesize nameComponents=_nameComponents - In the implementation block
@property (assign,nonatomic) BOOL hasiCloudAccount;                              //@synthesize hasiCloudAccount=_hasiCloudAccount - In the implementation block
@property (assign,nonatomic) BOOL isCurrentUser;                                 //@synthesize isCurrentUser=_isCurrentUser - In the implementation block
@property (assign,nonatomic) short type;                                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) short status;                                       //@synthesize status=_status - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)phoneNumber;
-(BOOL)hasiCloudAccount;
-(NSString *)email;
-(NSString *)userIdentifier;
-(void)setUserIdentifier:(NSString *)arg1 ;
-(BOOL)isCurrentUser;
-(void)setEmail:(NSString *)arg1 ;
-(NSPersonNameComponents *)nameComponents;
-(void)setNameComponents:(NSPersonNameComponents *)arg1 ;
-(void)setIsCurrentUser:(BOOL)arg1 ;
-(void)setHasiCloudAccount:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(short)type;
-(void)setType:(short)arg1 ;
-(short)status;
-(void)setStatus:(short)arg1 ;
@end

