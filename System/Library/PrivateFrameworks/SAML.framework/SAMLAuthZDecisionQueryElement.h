/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAML/SAMLBaseElement.h>

@class NSString, NSDate, SAMLSignature, SAMLSubject, NSArray, SAMLEvidence;

@interface SAMLAuthZDecisionQueryElement : SAMLBaseElement

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,retain) NSString * destination; 
@property (nonatomic,readonly) NSDate * issueInstant; 
@property (nonatomic,readonly) NSString * consent; 
@property (nonatomic,retain) NSString * resource; 
@property (nonatomic,retain) NSString * channelId; 
@property (nonatomic,readonly) SAMLSignature * signature; 
@property (nonatomic,retain) SAMLSubject * subject; 
@property (nonatomic,readonly) NSArray * actions; 
@property (nonatomic,retain) SAMLEvidence * evidence; 
+(id)createElement:(id*)arg1 ;
-(NSString *)resource;
-(NSString *)channelId;
-(void)setChannelId:(NSString *)arg1 ;
-(void)setResource:(NSString *)arg1 ;
-(SAMLSignature *)signature;
-(NSDate *)issueInstant;
-(NSString *)consent;
-(SAMLEvidence *)evidence;
-(void)setEvidence:(SAMLEvidence *)arg1 ;
-(NSString *)identifier;
-(void)addAction:(id)arg1 ;
-(NSArray *)actions;
-(void)setDestination:(NSString *)arg1 ;
-(NSString *)destination;
-(void)setSubject:(SAMLSubject *)arg1 ;
-(SAMLSubject *)subject;
@end

