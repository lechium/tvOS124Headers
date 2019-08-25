/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SASVoiceIdentificationSignal : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL recordUserAudio; 
@property (nonatomic,copy) NSString * resultCandidateId; 
+(id)voiceIdentificationSignal;
+(id)voiceIdentificationSignalWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)recordUserAudio;
-(void)setRecordUserAudio:(BOOL)arg1 ;
-(NSString *)resultCandidateId;
-(void)setResultCandidateId:(NSString *)arg1 ;
@end
