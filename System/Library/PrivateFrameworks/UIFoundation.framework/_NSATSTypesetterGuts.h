/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:30 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIFoundation/UIFoundation-Structs.h>
@class NSATSLineFragment, NSATSGlyphStorage;

@interface _NSATSTypesetterGuts : NSObject {

	NSATSLineFragment* _lineFragment;
	NSATSGlyphStorage* _glyphStorage;
	unsigned long long _lastGlyphIndex;
	unsigned long long _lastContainerIndex;
	SCD_Struct_NS2* _typesetterAuxiliary;
	/*function pointer*/void** _lineFragmentRectArgs;
	char* _bidiLevels;
	double _defaultTighteningFactor;
	unsigned long long _lineBreakStrategy;
	BOOL _isBusy;
	struct {
		unsigned _isiChatTypesetter : 1;
		unsigned _resToWillSetLineFragmentRect : 1;
		unsigned _limitsLayoutForSuspiciousContents : 1;
		unsigned _baselineRendering : 1;
		unsigned _forceWordWrapping : 1;
		unsigned _reserved : 27;
	}  _flags;
	SCD_Struct_NS3 _paragraphState;
	CTTypesetterRef _ctTypesetter;

}
-(void)finalize;
-(id)initWithTypesetter:(id)arg1 ;
-(void)dealloc;
@end

