/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSURL;

@interface SAAnswerLinkedAnswer : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSURL * image; 
@property (nonatomic,copy) NSURL * link; 
@property (nonatomic,copy) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)linkedAnswer;
+(id)linkedAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(id)encodedClassName;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setImage:(NSURL *)arg1 ;
-(NSURL *)image;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
@end

