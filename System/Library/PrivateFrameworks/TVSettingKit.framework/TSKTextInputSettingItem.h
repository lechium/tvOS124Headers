/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSettingKit/TSKSettingItem.h>

@class NSString;

@interface TSKTextInputSettingItem : TSKSettingItem {

	BOOL _secure;
	BOOL _useFormatterError;
	long long _keyboardType;
	long long _autocapitalizationType;
	long long _autocorrectionType;
	NSString* _localizedTextEntryInstructions;
	NSString* _recentsCategory;

}

@property (assign,getter=isSecure,nonatomic) BOOL secure;                          //@synthesize secure=_secure - In the implementation block
@property (assign,nonatomic) long long keyboardType;                               //@synthesize keyboardType=_keyboardType - In the implementation block
@property (assign,nonatomic) long long autocapitalizationType;                     //@synthesize autocapitalizationType=_autocapitalizationType - In the implementation block
@property (assign,nonatomic) long long autocorrectionType;                         //@synthesize autocorrectionType=_autocorrectionType - In the implementation block
@property (nonatomic,copy) NSString * localizedTextEntryInstructions;              //@synthesize localizedTextEntryInstructions=_localizedTextEntryInstructions - In the implementation block
@property (nonatomic,copy) NSString * recentsCategory;                             //@synthesize recentsCategory=_recentsCategory - In the implementation block
@property (assign,nonatomic) BOOL useFormatterError;                               //@synthesize useFormatterError=_useFormatterError - In the implementation block
+(id)textInputItemWithTitle:(id)arg1 description:(id)arg2 representedObject:(id)arg3 keyPath:(id)arg4 ;
-(id)localizedValue;
-(id)initWithTitle:(id)arg1 description:(id)arg2 representedObject:(id)arg3 keyPath:(id)arg4 readOnly:(BOOL)arg5 accessoryTypes:(unsigned long long)arg6 childControllerClass:(Class)arg7 ;
-(NSString *)localizedTextEntryInstructions;
-(void)setLocalizedTextEntryInstructions:(NSString *)arg1 ;
-(NSString *)recentsCategory;
-(void)setRecentsCategory:(NSString *)arg1 ;
-(BOOL)useFormatterError;
-(void)setUseFormatterError:(BOOL)arg1 ;
-(void)setAutocorrectionType:(long long)arg1 ;
-(void)setAutocapitalizationType:(long long)arg1 ;
-(void)setKeyboardType:(long long)arg1 ;
-(long long)keyboardType;
-(long long)autocorrectionType;
-(long long)autocapitalizationType;
-(BOOL)isSecure;
-(void)setSecure:(BOOL)arg1 ;
@end

