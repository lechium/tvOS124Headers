/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:12 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteTextInput/RemoteTextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TIKeyboardOutput, TIKeyboardIntermediateText, RTIStyledIntermediateText, NSDictionary, NSString, NSMutableDictionary, NSAttributedString;

@interface RTITextOperations : NSObject <NSSecureCoding> {

	TIKeyboardOutput* _keyboardOutput;
	TIKeyboardIntermediateText* _intermediateText;
	RTIStyledIntermediateText* _styledIntermediateText;
	NSDictionary* _attributedPlaceholders;
	NSString* _textToAssert;
	SEL _editingActionSelector;
	NSRange _selectionRangeToAssert;

}

@property (nonatomic,retain) NSDictionary * attributedPlaceholders;                              //@synthesize attributedPlaceholders=_attributedPlaceholders - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * mutableAttributedPlaceholders; 
@property (nonatomic,readonly) TIKeyboardOutput * keyboardOutput;                                //@synthesize keyboardOutput=_keyboardOutput - In the implementation block
@property (nonatomic,retain) TIKeyboardIntermediateText * intermediateText;                      //@synthesize intermediateText=_intermediateText - In the implementation block
@property (nonatomic,retain) RTIStyledIntermediateText * styledIntermediateText;                 //@synthesize styledIntermediateText=_styledIntermediateText - In the implementation block
@property (nonatomic,copy) NSString * textToAssert;                                              //@synthesize textToAssert=_textToAssert - In the implementation block
@property (assign,nonatomic) NSRange selectionRangeToAssert;                                     //@synthesize selectionRangeToAssert=_selectionRangeToAssert - In the implementation block
@property (assign,nonatomic) SEL editingActionSelector;                                          //@synthesize editingActionSelector=_editingActionSelector - In the implementation block
@property (nonatomic,readonly) NSAttributedString * attributedInsertionText; 
+(BOOL)supportsSecureCoding;
-(void)setIntermediateText:(TIKeyboardIntermediateText *)arg1 ;
-(RTIStyledIntermediateText *)styledIntermediateText;
-(void)_createAttributedPlaceholdersIfNecessary;
-(NSMutableDictionary *)mutableAttributedPlaceholders;
-(void)insertText:(id)arg1 replacementRange:(NSRange)arg2 ;
-(void)insertAttributedText:(id)arg1 replacementRange:(NSRange)arg2 ;
-(NSAttributedString *)attributedInsertionText;
-(void)setStyledIntermediateText:(RTIStyledIntermediateText *)arg1 ;
-(NSDictionary *)attributedPlaceholders;
-(void)setAttributedPlaceholders:(NSDictionary *)arg1 ;
-(void)setEditingActionSelector:(SEL)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)insertAttributedText:(id)arg1 ;
-(NSString *)textToAssert;
-(NSRange)selectionRangeToAssert;
-(SEL)editingActionSelector;
-(TIKeyboardOutput *)keyboardOutput;
-(TIKeyboardIntermediateText *)intermediateText;
-(void)setTextToAssert:(NSString *)arg1 ;
-(void)setSelectionRangeToAssert:(NSRange)arg1 ;
@end

