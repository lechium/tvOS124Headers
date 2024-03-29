/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SAUITemplateAttributedString : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * attributeRuns; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)attributedStringWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)attributedString;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)attributeRuns;
-(void)setAttributeRuns:(NSArray *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
@end

