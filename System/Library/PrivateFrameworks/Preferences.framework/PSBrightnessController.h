/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:00 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PSBrightnessController : NSObject {

	/*^block*/id _isTracking;
	/*^block*/id _brightnessChangedExternally;

}

@property (nonatomic,copy) id isTracking;                               //@synthesize isTracking=_isTracking - In the implementation block
@property (nonatomic,copy) id brightnessChangedExternally;              //@synthesize brightnessChangedExternally=_brightnessChangedExternally - In the implementation block
+(id)sharedController;
-(void)setIsTracking:(id)arg1 ;
-(id)brightnessChangedExternally;
-(void)setBrightnessChangedExternally:(id)arg1 ;
-(id)isTracking;
@end

