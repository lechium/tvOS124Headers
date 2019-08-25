/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASStartSpeech.h>

@class NSData, NSString, NSArray;

@interface SASStartSpeechDictation : SASStartSpeech

@property (nonatomic,copy) NSData * activationToken; 
@property (nonatomic,copy) NSString * applicationName; 
@property (nonatomic,copy) NSString * applicationVersion; 
@property (assign,nonatomic) BOOL censorSpeech; 
@property (nonatomic,copy) NSString * fieldId; 
@property (nonatomic,copy) NSString * fieldLabel; 
@property (nonatomic,copy) NSArray * inlineItemList; 
@property (nonatomic,copy) NSString * interactionId; 
@property (nonatomic,copy) NSString * keyboardIdentifier; 
@property (nonatomic,copy) NSString * keyboardReturnKey; 
@property (nonatomic,copy) NSString * keyboardType; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * postfixText; 
@property (nonatomic,copy) NSString * prefixText; 
@property (nonatomic,copy) NSString * region; 
@property (assign,nonatomic) BOOL saveRequestAudio; 
@property (nonatomic,copy) NSString * selectedText; 
@property (assign,nonatomic) BOOL speakerIndependentRecognition; 
+(id)startSpeechDictation;
+(id)startSpeechDictationWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)applicationVersion;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSData *)activationToken;
-(void)setActivationToken:(NSData *)arg1 ;
-(NSString *)applicationName;
-(BOOL)censorSpeech;
-(void)setCensorSpeech:(BOOL)arg1 ;
-(NSString *)fieldId;
-(void)setFieldId:(NSString *)arg1 ;
-(NSArray *)inlineItemList;
-(void)setInlineItemList:(NSArray *)arg1 ;
-(NSString *)interactionId;
-(void)setInteractionId:(NSString *)arg1 ;
-(NSString *)keyboardIdentifier;
-(NSString *)keyboardReturnKey;
-(void)setKeyboardReturnKey:(NSString *)arg1 ;
-(BOOL)saveRequestAudio;
-(void)setSaveRequestAudio:(BOOL)arg1 ;
-(BOOL)speakerIndependentRecognition;
-(void)setSpeakerIndependentRecognition:(BOOL)arg1 ;
-(NSString *)fieldLabel;
-(void)setKeyboardType:(NSString *)arg1 ;
-(NSString *)keyboardType;
-(void)setRegion:(NSString *)arg1 ;
-(NSString *)region;
-(NSString *)selectedText;
-(void)setApplicationName:(NSString *)arg1 ;
-(void)setApplicationVersion:(NSString *)arg1 ;
-(void)setFieldLabel:(NSString *)arg1 ;
-(void)setKeyboardIdentifier:(NSString *)arg1 ;
-(NSString *)prefixText;
-(void)setPrefixText:(NSString *)arg1 ;
-(NSString *)postfixText;
-(void)setPostfixText:(NSString *)arg1 ;
-(void)setSelectedText:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
@end

