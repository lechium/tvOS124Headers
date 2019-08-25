/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct __CFArray* CFArrayRef;

typedef struct CGImage* CGImageRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct __Mecabra* MecabraRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct {
	String field1;
	String field2;
	String field3;
	String field4;
	String field5;
	unsigned field6;
	float field7;
} SCD_Struct_TI6;

typedef struct CGColor* CGColorRef;

typedef struct __CTFont* CTFontRef;

typedef struct __CFAttributedString* CFAttributedStringRef;

typedef struct CGContext* CGContextRef;

typedef struct USet* USetRef;

typedef const struct _LXLexicon* LXLexiconRef;

typedef struct __CFString* CFStringRef;

typedef struct shared_ptr<KB::LanguageModel> {
	LanguageModel __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<KB::LanguageModel>;

typedef struct TITokenID {
	unsigned lexicon_id;
	unsigned word_id;
} TITokenID;

typedef struct TIRevisionHistoryTokenIterator {
	unsigned long long tokenIndex;
	unsigned long long documentLocation;
} TIRevisionHistoryTokenIterator;

typedef struct __MecabraContext* MecabraContextRef;

typedef struct shared_ptr<KB::TypologyLogger> {
	TypologyLogger __ptr_;
	__shared_weak_count __cntrl_;
} shared_ptr<KB::TypologyLogger>;

typedef struct __EmojiLocaleDataWrapper* EmojiLocaleDataWrapperRef;

typedef struct _compressed_pair<TITokenID *, std::__1::allocator<TITokenID> > {
	TITokenID __value_;
} compressed_pair<TITokenID *, std::__1::allocator<TITokenID> >;

typedef struct vector<TITokenID, std::__1::allocator<TITokenID> > {
	TITokenID __begin_;
	TITokenID __end_;
	compressed_pair<TITokenID *, std::__1::allocator<TITokenID> > __end_cap_;
} vector<TITokenID, std::__1::allocator<TITokenID> >;

typedef struct RefPtr<KB::DictionaryContainer> {
	DictionaryContainer m_ptr;
} RefPtr<KB::DictionaryContainer>;

typedef struct __CFURL* CFURLRef;

typedef struct __SCNetworkReachability* SCNetworkReachabilityRef;

