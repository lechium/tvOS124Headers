/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:13 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class SAUIButton, SAUIAssistantUtteranceView;

@interface SAUIDialogPunchout : SAAceView

@property (nonatomic,retain) SAUIButton * buttonView; 
@property (nonatomic,retain) SAUIAssistantUtteranceView * utteranceView; 
+(id)dialogPunchout;
+(id)dialogPunchoutWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(id)_af_dialogIdentifier;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SAUIAssistantUtteranceView *)utteranceView;
-(void)setUtteranceView:(SAUIAssistantUtteranceView *)arg1 ;
-(void)setButtonView:(SAUIButton *)arg1 ;
-(SAUIButton *)buttonView;
@end

