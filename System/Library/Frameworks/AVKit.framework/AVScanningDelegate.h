/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVScanningDelegate <NSObject>
@optional
-(long long)playerViewController:(id)arg1 scanFromElapsedTime:(SCD_Struct_AV1)arg2 rate:(double)arg3 imageBlock:(/*^block*/id)arg4;
-(void)stopScanningPlayerViewController:(id)arg1;
-(BOOL)playerViewController:(id)arg1 shouldHandleScanningForPlayerItem:(id)arg2;

@end

