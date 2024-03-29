/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:52 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UIKBTextEditingTraits : NSObject {

	BOOL _canToggleBoldface;
	BOOL _canToggleItalics;
	BOOL _canToggleUnderline;
	BOOL _supportStyling;
	BOOL _canCut;
	BOOL _canCopy;
	BOOL _canPaste;
	BOOL _canMoveCursorLeft;
	BOOL _canMoveCursorRight;
	BOOL _isBold;
	BOOL _isItalicized;
	BOOL _isUnderlined;

}

@property (nonatomic,readonly) BOOL isBold;                          //@synthesize isBold=_isBold - In the implementation block
@property (nonatomic,readonly) BOOL isItalicized;                    //@synthesize isItalicized=_isItalicized - In the implementation block
@property (nonatomic,readonly) BOOL isUnderlined;                    //@synthesize isUnderlined=_isUnderlined - In the implementation block
@property (nonatomic,readonly) BOOL canToggleBoldface;               //@synthesize canToggleBoldface=_canToggleBoldface - In the implementation block
@property (nonatomic,readonly) BOOL canToggleItalics;                //@synthesize canToggleItalics=_canToggleItalics - In the implementation block
@property (nonatomic,readonly) BOOL canToggleUnderline;              //@synthesize canToggleUnderline=_canToggleUnderline - In the implementation block
@property (nonatomic,readonly) BOOL supportStyling;                  //@synthesize supportStyling=_supportStyling - In the implementation block
@property (assign,nonatomic) BOOL canCut;                            //@synthesize canCut=_canCut - In the implementation block
@property (nonatomic,readonly) BOOL canCopy;                         //@synthesize canCopy=_canCopy - In the implementation block
@property (nonatomic,readonly) BOOL canPaste;                        //@synthesize canPaste=_canPaste - In the implementation block
@property (nonatomic,readonly) BOOL canMoveCursorLeft;               //@synthesize canMoveCursorLeft=_canMoveCursorLeft - In the implementation block
@property (nonatomic,readonly) BOOL canMoveCursorRight;              //@synthesize canMoveCursorRight=_canMoveCursorRight - In the implementation block
+(id)traitsWithResponder:(id)arg1 keyMaskFlags:(unsigned long long)arg2 ;
-(BOOL)supportStyling;
-(BOOL)canToggleBoldface;
-(BOOL)canToggleItalics;
-(BOOL)canToggleUnderline;
-(BOOL)isBold;
-(BOOL)isItalicized;
-(BOOL)isUnderlined;
-(BOOL)canCut;
-(BOOL)canCopy;
-(BOOL)canPaste;
-(BOOL)canMoveCursorLeft;
-(BOOL)canMoveCursorRight;
-(id)initWithResponder:(id)arg1 keyMaskFlags:(unsigned long long)arg2 ;
-(void)setCanCut:(BOOL)arg1 ;
@end

