/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWStatisticsSource.h>

@interface NWStatisticsUDPSource : NWStatisticsSource {

	nstat_udp_descriptor _descriptor;

}
-(id)initWithManager:(id)arg1 local:(const sockaddr*)arg2 remote:(const sockaddr*)arg3 ;
-(int)handleDescriptor:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)_currentSnapshot;
-(id)description;
@end

