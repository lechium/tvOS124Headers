/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAPhoneCallSearchResult.h>

@class NSString, NSNumber;

@interface SAPhoneVoiceMail : SAPhoneCallSearchResult

@property (nonatomic,copy) NSString * filePath; 
@property (nonatomic,copy) NSNumber * length; 
+(id)voiceMail;
+(id)voiceMailWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)length;
-(void)setLength:(NSNumber *)arg1 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
@end

