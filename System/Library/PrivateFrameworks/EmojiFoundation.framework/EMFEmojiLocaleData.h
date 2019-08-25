/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/EmojiFoundation.framework/EmojiFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EmojiFoundation/EmojiFoundation-Structs.h>
@class NSString, NSArray;

@interface EMFEmojiLocaleData : NSObject {

	NSString* _localeIdentifier;
	EmojiLocaleDataWrapperRef _localeDataRef;

}

@property (nonatomic,copy,readonly) NSString * localeIdentifier;                                //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,readonly) const EmojiLocaleDataWrapperRef emojiLocaleDataRef;              //@synthesize localeDataRef=_localeDataRef - In the implementation block
@property (nonatomic,copy,readonly) NSArray * emojiTokens; 
+(id)emojiLocaleDataWithCEMEmojiLocaleData:(EmojiLocaleDataWrapperRef)arg1 ;
+(id)emojiLocaleDataWithLocaleIdentifier:(id)arg1 ;
-(unsigned long long)cfCompareFlagsFromNSOptions:(unsigned long long)arg1 ;
-(const EmojiLocaleDataWrapperRef)emojiLocaleDataRef;
-(id)initWithCEMEmojiLocaleData:(EmojiLocaleDataWrapperRef)arg1 ;
-(NSArray *)emojiTokens;
-(void)enumerateSearchResultsInText:(id)arg1 range:(NSRange)arg2 options:(unsigned long long)arg3 searchType:(int)arg4 usingBlock:(/*^block*/id)arg5 ;
-(id)emojiTokensForText:(id)arg1 phoneticReading:(id)arg2 options:(unsigned long long)arg3 searchType:(int)arg4 includePrefixMatches:(BOOL)arg5 ;
-(id)emojiTokensForOptions:(unsigned long long)arg1 presentationStyle:(int)arg2 ;
-(void)dealloc;
-(id)initWithLocaleIdentifier:(id)arg1 ;
-(NSString *)localeIdentifier;
@end

