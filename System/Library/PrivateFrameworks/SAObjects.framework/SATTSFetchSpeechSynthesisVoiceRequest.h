/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, SATTSSpeechSynthesisVoice, NSString;

@interface SATTSFetchSpeechSynthesisVoiceRequest : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * clientVoiceKeyList; 
@property (nonatomic,retain) SATTSSpeechSynthesisVoice * filteredVoiceKey; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)fetchSpeechSynthesisVoiceRequest;
+(id)fetchSpeechSynthesisVoiceRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)gender;
-(void)setGender:(NSString *)arg1 ;
-(NSArray *)clientVoiceKeyList;
-(void)setClientVoiceKeyList:(NSArray *)arg1 ;
-(SATTSSpeechSynthesisVoice *)filteredVoiceKey;
-(void)setFilteredVoiceKey:(SATTSSpeechSynthesisVoice *)arg1 ;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
@end

