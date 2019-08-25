/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:14 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAceView.h>

@class NSString, SAUIAddViews;

@interface SAARAlternativeResultsView : SAAceView

@property (nonatomic,copy) NSString * dialogIdentifier; 
@property (assign,nonatomic) long long rank; 
@property (nonatomic,retain) SAUIAddViews * resultView; 
@property (assign,nonatomic) BOOL suggestedResult; 
@property (nonatomic,copy) NSString * utterance; 
+(id)alternativeResultsView;
+(id)alternativeResultsViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)af_addEntriesToAnalyticsContext:(id)arg1 ;
-(id)af_dialogIdentifiersForAnalyticsContext;
-(id)groupIdentifier;
-(long long)rank;
-(void)setRank:(long long)arg1 ;
-(id)encodedClassName;
-(NSString *)dialogIdentifier;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
-(SAUIAddViews *)resultView;
-(void)setResultView:(SAUIAddViews *)arg1 ;
-(BOOL)suggestedResult;
-(void)setSuggestedResult:(BOOL)arg1 ;
@end

