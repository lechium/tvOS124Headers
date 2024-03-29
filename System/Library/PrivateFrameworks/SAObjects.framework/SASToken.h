/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASToken : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL addSpaceAfter; 
@property (nonatomic,copy) NSNumber * confidenceScore; 
@property (nonatomic,copy) NSNumber * endTime; 
@property (nonatomic,copy) NSString * ipaPhoneSequence; 
@property (nonatomic,copy) NSString * originalText; 
@property (nonatomic,copy) NSString * phoneSequence; 
@property (nonatomic,copy) NSString * recognitionStability; 
@property (assign,nonatomic) BOOL removeSpaceAfter; 
@property (assign,nonatomic) BOOL removeSpaceBefore; 
@property (nonatomic,copy) NSNumber * silenceStartTime; 
@property (nonatomic,copy) NSNumber * startTime; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tokenWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)token;
-(id)af_speechToken;
-(NSNumber *)endTime;
-(void)setEndTime:(NSNumber *)arg1 ;
-(void)setConfidenceScore:(NSNumber *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)addSpaceAfter;
-(void)setAddSpaceAfter:(BOOL)arg1 ;
-(NSString *)ipaPhoneSequence;
-(void)setIpaPhoneSequence:(NSString *)arg1 ;
-(NSString *)phoneSequence;
-(void)setPhoneSequence:(NSString *)arg1 ;
-(NSString *)recognitionStability;
-(void)setRecognitionStability:(NSString *)arg1 ;
-(void)setRemoveSpaceAfter:(BOOL)arg1 ;
-(NSNumber *)silenceStartTime;
-(void)setSilenceStartTime:(NSNumber *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(NSNumber *)startTime;
-(void)setStartTime:(NSNumber *)arg1 ;
-(NSNumber *)confidenceScore;
-(void)setRemoveSpaceBefore:(BOOL)arg1 ;
-(BOOL)removeSpaceBefore;
-(BOOL)removeSpaceAfter;
-(NSString *)originalText;
-(void)setOriginalText:(NSString *)arg1 ;
@end

