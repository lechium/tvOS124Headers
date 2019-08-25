/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface OKProducerPresetsManager : NSObject {

	NSMutableDictionary* _presetsByFamily;

}
+(id)defaultManager;
-(id)presetForUniqueIdentifier:(id)arg1 ;
-(id)_presetsByNameForFamily:(id)arg1 ;
-(id)presetsForFamily:(id)arg1 ;
-(id)_defaultPresetsByName;
-(id)defaultPresetsForFamily:(id)arg1 ;
-(id)presetWithUniqueIdentifier:(id)arg1 ;
-(id)defaultPresets;
-(id)init;
-(void)dealloc;
@end

