/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:48 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIKBCacheToken.h>

@class NSString;

@interface UIKBCacheToken_Keyplane : UIKBCacheToken {

	CGSize _size;
	SCD_Union_UI62 _style;
	NSString* _geometrySetName;
	NSString* _keySetName;
	NSString* _cachedGestureKeySetName;
	NSString* _annotations;
	NSString* _locale;

}
+(id)tokenForKeyplane:(id)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(void)setSize:(CGSize)arg1 ;
-(SCD_Struct_UI58)styling;
-(void)setStyling:(SCD_Struct_UI58)arg1 ;
-(BOOL)isUsableForCacheToken:(id)arg1 withRenderFlags:(long long)arg2 ;
-(void)annotateWithBool:(BOOL)arg1 ;
-(void)annotateWithInt:(int)arg1 ;
-(id)stringForSplitState:(BOOL)arg1 handBias:(long long)arg2 ;
-(id)_initWithKeyplane:(id)arg1 keylayout:(id)arg2 ;
@end

