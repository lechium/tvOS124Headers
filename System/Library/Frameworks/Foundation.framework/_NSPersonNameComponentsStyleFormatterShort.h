/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:45 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/_NSPersonNameComponentsStyleFormatter.h>

@class _NSPersonNameComponentsStyleFormatterShortVariantGeneral, _NSPersonNameComponentsStyleFormatter;

@interface _NSPersonNameComponentsStyleFormatterShort : _NSPersonNameComponentsStyleFormatter {

	long long _shortNameFormat;
	_NSPersonNameComponentsStyleFormatterShortVariantGeneral* _variantFormatter;
	_NSPersonNameComponentsStyleFormatter* _subFormatter;
	BOOL _forceShortNameEnabled;

}

@property (assign) long long shortNameFormat; 
@property (readonly) _NSPersonNameComponentsStyleFormatterShortVariantGeneral * variantFormatter; 
@property (retain) _NSPersonNameComponentsStyleFormatter * subFormatter; 
@property (assign) BOOL forceShortNameEnabled; 
-(id)keysOfInterest;
-(long long)shortNameFormat;
-(id)_formattedStringFromOrderedKeys:(id)arg1 components:(id)arg2 attributesByRange:(id)arg3 ;
-(id)fallbackStyleFormatter;
-(id)orderedKeysOfInterest;
-(id)abbreviatedKeys;
-(id)initWithMasterFormatter:(id)arg1 ;
-(_NSPersonNameComponentsStyleFormatterShortVariantGeneral *)variantFormatter;
-(_NSPersonNameComponentsStyleFormatter *)subFormatter;
-(void)setSubFormatter:(_NSPersonNameComponentsStyleFormatter *)arg1 ;
-(BOOL)forceShortNameEnabled;
-(void)setForceShortNameEnabled:(BOOL)arg1 ;
-(void)setShortNameFormat:(long long)arg1 ;
-(void)dealloc;
-(BOOL)isEnabled;
@end

