/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HMFUnfairLock, _HMCameraSource;

@interface HMCameraSource : NSObject {

	HMFUnfairLock* _lock;
	_HMCameraSource* _source;

}

@property (nonatomic,retain) _HMCameraSource * source;              //@synthesize source=_source - In the implementation block
-(id)aspectRatio;
-(id)initWithSource:(id)arg1 ;
-(void)setSource:(_HMCameraSource *)arg1 ;
-(_HMCameraSource *)source;
@end

