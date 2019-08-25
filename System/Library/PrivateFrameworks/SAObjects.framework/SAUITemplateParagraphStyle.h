/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SAUITemplateParagraphStyle : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * alignment; 
@property (nonatomic,copy) NSNumber * firstLineHeadIndent; 
@property (nonatomic,copy) NSNumber * getParagraphSpacingBefore; 
@property (nonatomic,copy) NSNumber * headIndent; 
@property (nonatomic,copy) NSNumber * lineHeightMultiple; 
@property (nonatomic,copy) NSNumber * lineSpacing; 
@property (nonatomic,copy) NSNumber * maximumLineHeight; 
@property (nonatomic,copy) NSNumber * minimumLineHeight; 
@property (nonatomic,copy) NSNumber * paragraphSpacing; 
@property (nonatomic,copy) NSNumber * tailIndent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)paragraphStyleWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)paragraphStyle;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)getParagraphSpacingBefore;
-(void)setGetParagraphSpacingBefore:(NSNumber *)arg1 ;
-(NSNumber *)headIndent;
-(NSNumber *)lineHeightMultiple;
-(void)setLineHeightMultiple:(NSNumber *)arg1 ;
-(NSNumber *)paragraphSpacing;
-(NSNumber *)tailIndent;
-(void)setTailIndent:(NSNumber *)arg1 ;
-(void)setParagraphSpacing:(NSNumber *)arg1 ;
-(void)setHeadIndent:(NSNumber *)arg1 ;
-(NSString *)alignment;
-(void)setAlignment:(NSString *)arg1 ;
-(NSNumber *)lineSpacing;
-(void)setLineSpacing:(NSNumber *)arg1 ;
-(void)setMinimumLineHeight:(NSNumber *)arg1 ;
-(void)setMaximumLineHeight:(NSNumber *)arg1 ;
-(NSNumber *)firstLineHeadIndent;
-(void)setFirstLineHeadIndent:(NSNumber *)arg1 ;
-(NSNumber *)minimumLineHeight;
-(NSNumber *)maximumLineHeight;
@end

