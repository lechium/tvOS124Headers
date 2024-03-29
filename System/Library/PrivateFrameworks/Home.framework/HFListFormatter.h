/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/Home-Structs.h>
#import <Foundation/NSFormatter.h>

@class NSLocale;

@interface HFListFormatter : NSFormatter {

	NSLocale* _locale;
	unsigned long long _listStyle;
	UListFormatterRef _formatter;

}

@property (assign,nonatomic) UListFormatterRef formatter;               //@synthesize formatter=_formatter - In the implementation block
@property (assign,nonatomic) unsigned long long listStyle;              //@synthesize listStyle=_listStyle - In the implementation block
@property (nonatomic,copy) NSLocale * locale;                           //@synthesize locale=_locale - In the implementation block
-(UListFormatterRef)formatter;
-(void)setFormatter:(UListFormatterRef)arg1 ;
-(void)setListStyle:(unsigned long long)arg1 ;
-(void)_invaildateFormatter;
-(unsigned long long)listStyle;
-(id)_formatOrListWithElements:(id)arg1 ;
-(id)_formatAndListWithElements:(id)arg1 ;
-(void)dealloc;
-(void)setLocale:(NSLocale *)arg1 ;
-(id)stringForObjectValue:(id)arg1 ;
-(NSLocale *)locale;
@end

