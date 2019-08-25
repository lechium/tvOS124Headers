/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSDate, NSString;

@interface SAMLAuthNStatement : SAMLBaseElement

@property (nonatomic,readonly) NSDate * authnInstant; 
@property (nonatomic,readonly) NSString * sessionIndex; 
@property (nonatomic,readonly) NSDate * sessionNotOnOrAfter; 
@property (nonatomic,readonly) NSString * authnContextClassRef; 
@property (nonatomic,readonly) NSString * authnContextDecl; 
@property (nonatomic,readonly) NSString * authnContextDeclRef; 
@property (nonatomic,readonly) NSString * authenticatingAuthority; 
@property (nonatomic,readonly) NSString * subjectAddress; 
@property (nonatomic,readonly) NSString * subjectDNSName; 
+(id)createElement:(id*)arg1 ;
-(NSDate *)sessionNotOnOrAfter;
-(NSString *)sessionIndex;
-(NSDate *)authnInstant;
-(NSString *)subjectAddress;
-(NSString *)subjectDNSName;
-(NSString *)authnContextDecl;
-(NSString *)authnContextDeclRef;
-(NSString *)authnContextClassRef;
-(NSString *)authenticatingAuthority;
-(BOOL)isValid;
@end
