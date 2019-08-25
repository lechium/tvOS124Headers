/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SACFMParseMessageForEmojiResponse : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * parseChunks; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)parseMessageForEmojiResponse;
+(id)parseMessageForEmojiResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)parseChunks;
-(void)setParseChunks:(NSArray *)arg1 ;
@end

