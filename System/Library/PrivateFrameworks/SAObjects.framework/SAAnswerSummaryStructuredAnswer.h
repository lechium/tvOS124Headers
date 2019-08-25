/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAnswerStructuredAnswer.h>

@class NSArray, NSString, NSURL;

@interface SAAnswerSummaryStructuredAnswer : AceObject <SAAnswerStructuredAnswer>

@property (nonatomic,copy) NSArray * answerPropertyGroups; 
@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSURL * image; 
@property (nonatomic,copy) NSString * imageCaption; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * titleAnnotation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)summaryStructuredAnswer;
+(id)summaryStructuredAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)answerPropertyGroups;
-(void)setAnswerPropertyGroups:(NSArray *)arg1 ;
-(NSString *)imageCaption;
-(void)setImageCaption:(NSString *)arg1 ;
-(NSString *)titleAnnotation;
-(void)setTitleAnnotation:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setImage:(NSURL *)arg1 ;
-(NSURL *)image;
-(NSString *)title;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
@end

