/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:53 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/_MPCPlayerItemCommand.h>
#import <libobjc.A.dylib/MPCPlayerPlaybackRateCommand.h>

@class NSArray, NSString;

@interface _MPCPlayerPlaybackRateCommand : _MPCPlayerItemCommand <MPCPlayerPlaybackRateCommand> {

	float _preferredPlaybackRate;
	NSArray* _supportedPlaybackRates;

}

@property (nonatomic,copy) NSArray * supportedPlaybackRates;              //@synthesize supportedPlaybackRates=_supportedPlaybackRates - In the implementation block
@property (assign,nonatomic) float preferredPlaybackRate;                 //@synthesize preferredPlaybackRate=_preferredPlaybackRate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPreferredPlaybackRate:(float)arg1 ;
-(id)setPlaybackRate:(float)arg1 ;
-(float)preferredPlaybackRate;
-(void)setSupportedPlaybackRates:(NSArray *)arg1 ;
-(NSArray *)supportedPlaybackRates;
@end

