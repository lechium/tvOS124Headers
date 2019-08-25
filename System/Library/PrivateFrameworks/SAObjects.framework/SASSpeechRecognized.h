/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:08 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, SASRecognition, SAUIGetResponseAlternatives, NSString;

@interface SASSpeechRecognized : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL eager; 
@property (nonatomic,copy) NSNumber * processedAudioDuration; 
@property (nonatomic,retain) SASRecognition * recognition; 
@property (nonatomic,retain) SAUIGetResponseAlternatives * responseAlternatives; 
@property (nonatomic,copy) NSString * resultId; 
@property (nonatomic,copy) NSString * sessionId; 
@property (nonatomic,copy) NSString * title; 
+(id)speechRecognized;
+(id)speechRecognizedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_correctionContext;
-(BOOL)af_isUtterance;
-(BOOL)af_isUserUtterance;
-(BOOL)af_waitsForConfirmation;
-(id)af_userUtteranceValue;
-(id)af_bestTextInterpretation;
-(void)setSessionId:(NSString *)arg1 ;
-(NSString *)sessionId;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)eager;
-(void)setEager:(BOOL)arg1 ;
-(NSNumber *)processedAudioDuration;
-(void)setProcessedAudioDuration:(NSNumber *)arg1 ;
-(SASRecognition *)recognition;
-(void)setRecognition:(SASRecognition *)arg1 ;
-(SAUIGetResponseAlternatives *)responseAlternatives;
-(void)setResponseAlternatives:(SAUIGetResponseAlternatives *)arg1 ;
-(NSString *)resultId;
-(void)setResultId:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
@end
