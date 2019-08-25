/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVURLAsset.h>
#import <AVFoundation/AVFragmentMinding.h>

@class AVFragmentedAssetInternal, NSArray;

@interface AVFragmentedAsset : AVURLAsset <AVFragmentMinding> {

	AVFragmentedAssetInternal* _fragmentedAsset;

}

@property (nonatomic,readonly) NSArray * tracks; 
@property (getter=isAssociatedWithFragmentMinder,nonatomic,readonly) BOOL associatedWithFragmentMinder; 
+(id)fragmentedAssetWithURL:(id)arg1 options:(id)arg2 ;
-(BOOL)_mindsFragments;
-(void)_setIsAssociatedWithFragmentMinder:(BOOL)arg1 ;
-(Class)_classForAssetTracks;
-(BOOL)isAssociatedWithFragmentMinder;
-(id)trackWithTrackID:(int)arg1 ;
-(NSArray *)tracks;
-(id)initWithURL:(id)arg1 options:(id)arg2 ;
-(id)tracksWithMediaType:(id)arg1 ;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
@end

