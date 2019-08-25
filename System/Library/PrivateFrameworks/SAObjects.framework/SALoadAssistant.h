/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSData, NSString;

@interface SALoadAssistant : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSData * activationToken; 
@property (nonatomic,copy) NSString * assistantId; 
@property (nonatomic,copy) NSString * connectionMode; 
@property (nonatomic,copy) NSString * connectionType; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * linkedAssistantId; 
@property (nonatomic,copy) NSData * linkedSessionValidationData; 
@property (nonatomic,copy) NSString * linkedSpeechId; 
@property (nonatomic,copy) NSString * loggableAssistantId; 
@property (nonatomic,copy) NSString * loggableSharedUserId; 
@property (nonatomic,copy) NSData * sessionValidationData; 
@property (nonatomic,copy) NSString * sharedUserId; 
@property (nonatomic,copy) NSString * speechId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)loadAssistant;
+(id)loadAssistantWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)connectionMode;
-(void)setConnectionMode:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)connectionType;
-(void)setConnectionType:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSData *)activationToken;
-(void)setActivationToken:(NSData *)arg1 ;
-(NSString *)assistantId;
-(void)setAssistantId:(NSString *)arg1 ;
-(NSString *)speechId;
-(void)setSpeechId:(NSString *)arg1 ;
-(NSString *)linkedAssistantId;
-(void)setLinkedAssistantId:(NSString *)arg1 ;
-(NSString *)linkedSpeechId;
-(void)setLinkedSpeechId:(NSString *)arg1 ;
-(NSData *)linkedSessionValidationData;
-(void)setLinkedSessionValidationData:(NSData *)arg1 ;
-(NSString *)loggableAssistantId;
-(void)setLoggableAssistantId:(NSString *)arg1 ;
-(NSString *)loggableSharedUserId;
-(void)setLoggableSharedUserId:(NSString *)arg1 ;
-(NSData *)sessionValidationData;
-(void)setSessionValidationData:(NSData *)arg1 ;
-(NSString *)sharedUserId;
-(void)setSharedUserId:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
@end

