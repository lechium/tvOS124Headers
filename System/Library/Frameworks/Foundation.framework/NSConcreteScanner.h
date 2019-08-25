/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSScanner.h>

@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner {

	NSString* scanString;
	NSCharacterSet* skipSet;
	NSCharacterSet* invertedSkipSet;
	id locale;
	unsigned long long scanLocation;
	struct {
		unsigned caseSensitive : 1;
		unsigned  : 31;
	}  flags;

}
-(id)charactersToBeSkipped;
-(BOOL)caseSensitive;
-(void)setCaseSensitive:(BOOL)arg1 ;
-(id)_invertedSkipSet;
-(void)setCharactersToBeSkipped:(id)arg1 ;
-(BOOL)scanInt:(int*)arg1 ;
-(BOOL)scanLongLong:(long long*)arg1 ;
-(void)setScanLocation:(unsigned long long)arg1 ;
-(unsigned long long)scanLocation;
-(void)dealloc;
-(id)string;
-(id)initWithString:(id)arg1 ;
-(void)setLocale:(id)arg1 ;
-(id)locale;
@end

