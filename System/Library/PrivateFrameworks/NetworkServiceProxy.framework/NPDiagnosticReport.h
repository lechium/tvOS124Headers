/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:27 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NPDiagnosticReport : NSObject
+(void)logInternalError:(id)arg1 context:(id)arg2 ;
+(BOOL)logNSPDiagnosticReport:(id)arg1 event:(id)arg2 context:(id)arg3 ;
+(void)logTTFBDelayed:(unsigned long long)arg1 rtt:(unsigned long long)arg2 isFirstTunnel:(BOOL)arg3 interfaceType:(long long)arg4 onRamp:(id)arg5 ;
+(void)logConnectionFailed:(long long)arg1 error:(int)arg2 onRamp:(id)arg3 ;
+(void)logLatencyMapTimeout:(long long)arg1 ;
+(void)logFetchError:(id)arg1 requestType:(int)arg2 ;
@end

