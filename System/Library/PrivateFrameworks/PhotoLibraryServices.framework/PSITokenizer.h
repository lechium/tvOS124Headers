/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PSITokenizer : NSObject {

	void* _tagger;
	CFStringTokenizerRef _nameTokenizer;
	CFLocaleRef _locale;
	BOOL _localeIsGerman;

}
-(id)normalizeString:(id)arg1 matchType:(unsigned long long)arg2 insertDoubleQuotes:(BOOL)arg3 ;
-(void)tokenizeString:(id)arg1 withOptions:(long long)arg2 tokenOutput:(tokenOutput_t*)arg3 ;
-(id)initWithLocale:(id)arg1 ;
-(void)tokenizePersonName:(id)arg1 tokenOutput:(tokenOutput_t*)arg2 ;
-(id)newTokensFromString:(id)arg1 withOptions:(long long)arg2 outCopyRanges:(id*)arg3 ;
-(void)dealloc;
@end

