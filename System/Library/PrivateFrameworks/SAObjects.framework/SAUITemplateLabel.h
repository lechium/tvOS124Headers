/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSDictionary, SAUITemplateAttributedString;

@interface SAUITemplateLabel : SAUITemplateBaseItem

@property (nonatomic,copy) NSDictionary * attributedTexts; 
@property (nonatomic,retain) SAUITemplateAttributedString * text; 
+(id)labelWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)label;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSDictionary *)attributedTexts;
-(void)setAttributedTexts:(NSDictionary *)arg1 ;
-(void)setText:(SAUITemplateAttributedString *)arg1 ;
-(SAUITemplateAttributedString *)text;
@end

