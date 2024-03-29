/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:51 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface TIAssetsForInputMode : NSObject {

	NSMutableDictionary* _assetsByInputModeLevel;
	NSString* _inputMode;

}

@property (nonatomic,readonly) NSString * inputMode;              //@synthesize inputMode=_inputMode - In the implementation block
-(id)initWithInputMode:(id)arg1 ;
-(id)assetContentItemsMatching:(id)arg1 ;
-(void)addAssetsForInputModeLevel:(id)arg1 ;
-(void)removeAllInputModeLevels;
-(void)dealloc;
-(id)recursiveDescription;
-(NSString *)inputMode;
@end

