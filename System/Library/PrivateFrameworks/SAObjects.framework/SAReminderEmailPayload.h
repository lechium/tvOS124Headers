/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAReminderPayload.h>

@class NSArray, NSString;

@interface SAReminderEmailPayload : AceObject <SAReminderPayload>

@property (nonatomic,copy) NSArray * recipientsTo; 
@property (nonatomic,copy) NSString * subject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)emailPayload;
+(id)emailPayloadWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)recipientsTo;
-(void)setRecipientsTo:(NSArray *)arg1 ;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)subject;
@end

