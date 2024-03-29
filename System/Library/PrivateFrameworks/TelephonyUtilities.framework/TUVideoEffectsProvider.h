/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class TUVideoEffect, NSArray;


@protocol TUVideoEffectsProvider <NSObject>
@property (nonatomic,retain) TUVideoEffect * currentVideoEffect; 
@property (nonatomic,readonly) NSArray * availableVideoEffects; 
@required
-(void)setCurrentVideoEffect:(id)arg1;
-(TUVideoEffect *)currentVideoEffect;
-(NSArray *)availableVideoEffects;

@end

