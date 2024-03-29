/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:34 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData;

@interface CKCompleteParticipantVettingOperationInfo : CKOperationInfo <NSSecureCoding> {

	NSString* _vettingToken;
	NSString* _vettingEmail;
	NSString* _vettingPhone;
	NSString* _routingKey;
	NSData* _encryptedKey;
	NSString* _baseToken;
	NSString* _displayedHostname;

}

@property (nonatomic,copy) NSString * vettingToken;                     //@synthesize vettingToken=_vettingToken - In the implementation block
@property (nonatomic,retain) NSString * vettingEmail;                   //@synthesize vettingEmail=_vettingEmail - In the implementation block
@property (nonatomic,retain) NSString * vettingPhone;                   //@synthesize vettingPhone=_vettingPhone - In the implementation block
@property (nonatomic,retain) NSString * routingKey;                     //@synthesize routingKey=_routingKey - In the implementation block
@property (nonatomic,retain) NSData * encryptedKey;                     //@synthesize encryptedKey=_encryptedKey - In the implementation block
@property (nonatomic,retain) NSString * baseToken;                      //@synthesize baseToken=_baseToken - In the implementation block
@property (nonatomic,retain) NSString * displayedHostname;              //@synthesize displayedHostname=_displayedHostname - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setVettingToken:(NSString *)arg1 ;
-(void)setVettingEmail:(NSString *)arg1 ;
-(void)setVettingPhone:(NSString *)arg1 ;
-(NSString *)routingKey;
-(void)setRoutingKey:(NSString *)arg1 ;
-(void)setDisplayedHostname:(NSString *)arg1 ;
-(void)setBaseToken:(NSString *)arg1 ;
-(NSString *)vettingToken;
-(NSString *)vettingEmail;
-(NSString *)vettingPhone;
-(NSData *)encryptedKey;
-(NSString *)baseToken;
-(NSString *)displayedHostname;
-(void)setEncryptedKey:(NSData *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

