/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CommonUtilities/CommonUtilities-Structs.h>
@interface CUTReachability : NSObject {

	BOOL localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;

}
+(id)reachabilityForInternetConnection;
+(id)reachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)reachabilityWithHostName:(id)arg1 ;
+(id)reachabilityForLocalWiFi;
-(long long)currentReachabilityStatus;
-(long long)localWiFiStatusForFlags:(unsigned)arg1 ;
-(long long)networkStatusForFlags:(unsigned)arg1 ;
-(BOOL)connectionRequired;
-(void)dealloc;
@end

