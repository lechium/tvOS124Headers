/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:23 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NLP.framework/NLP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NLSearchParserManager : NSObject {

	void* _parser;

}
+(id)defaultManager;
+(id)availableLanguages;
-(void)enumerateAttributedParsesForQuery:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)enumerateSearchSuggestions:(id)arg1 options:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)enumerateDateRangeAttributedParseForOptions:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)initWithLocale:(id)arg1 context:(id)arg2 options:(id)arg3 ;
-(id)tokenizeAndEnumerateAttributedParsesForQuery:(id)arg1 options:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
@end

