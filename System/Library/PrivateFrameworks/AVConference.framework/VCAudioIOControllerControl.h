/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCAudioIOControllerControl <NSObject>
@optional
-(void)refreshInputMetering;
-(void)refreshOutputMetering;

@required
-(void)stopClient:(id)arg1;
-(void)startClient:(id)arg1;
-(void)updateClient:(id)arg1;

@end
