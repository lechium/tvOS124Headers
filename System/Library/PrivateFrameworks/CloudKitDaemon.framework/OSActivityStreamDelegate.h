/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OSActivityStreamDelegate <NSObject>
@optional
-(void)streamDidFail:(id)arg1 error:(id)arg2;
-(void)streamDidStart:(id)arg1;
-(BOOL)activityStream:(id)arg1 results:(id)arg2 error:(id)arg3;
-(void)streamDidStop:(id)arg1;

@required
-(BOOL)activityStream:(id)arg1 results:(id)arg2;

@end

