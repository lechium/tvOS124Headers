/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:42:17 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NetworkStatistics/NetworkStatistics-Structs.h>
@interface NWSSnapshotSource : NSObject {

	int _sockFd;

}
+(id)routeSnapshotForIPv4Host:(sockaddr_in*)arg1 viaInterfaceIndex:(int)arg2 ;
+(id)routeSnapshotForIPv6Host:(sockaddr_in6*)arg1 viaInterfaceIndex:(int)arg2 ;
-(long long)send:(void*)arg1 length:(unsigned long long)arg2 err:(int*)arg3 ;
-(long long)recv:(void*)arg1 length:(unsigned long long)arg2 err:(int*)arg3 ;
-(id)init;
-(void)dealloc;
@end
