/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SACFMMessageTextParseChunk.h>

@class NSArray;

@interface SACFMEmojiParseChunk : SACFMMessageTextParseChunk

@property (assign,nonatomic) long long emojiCount; 
@property (nonatomic,copy) NSArray * inflectedEmojiList; 
+(id)emojiParseChunk;
+(id)emojiParseChunkWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)emojiCount;
-(void)setEmojiCount:(long long)arg1 ;
-(NSArray *)inflectedEmojiList;
-(void)setInflectedEmojiList:(NSArray *)arg1 ;
@end

