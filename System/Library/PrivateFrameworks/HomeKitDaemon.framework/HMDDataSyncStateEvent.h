/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:57 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@interface HMDDataSyncStateEvent : HMDLogEvent {

	unsigned long long _dataSyncState;

}

@property (assign,nonatomic) unsigned long long dataSyncState;              //@synthesize dataSyncState=_dataSyncState - In the implementation block
+(id)dataSyncStateEstablished:(unsigned long long)arg1 ;
+(id)uuid;
-(unsigned long long)dataSyncState;
-(void)setDataSyncState:(unsigned long long)arg1 ;
-(id)initWithDataSyncState:(unsigned long long)arg1 ;
@end

