/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <FMCore/FMCore-Structs.h>
@interface FMReachability : NSObject {

	BOOL localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;

}
+(id)reachabilityForInternetConnection;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityForLocalWiFi;
-(unsigned long long)currentReachabilityStatus;
-(void)stopNotifier;
-(unsigned long long)localWiFiStatusForFlags:(unsigned)arg1 ;
-(unsigned long long)networkStatusForFlags:(unsigned)arg1 ;
-(BOOL)startNotifier;
-(BOOL)connectionRequired;
-(void)dealloc;
@end

