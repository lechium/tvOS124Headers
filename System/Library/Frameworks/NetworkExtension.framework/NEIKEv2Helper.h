/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NEIKEv2Helper : NSObject
+(BOOL)getDPDAttributesForMode:(long long)arg1 isWakeUp:(BOOL)arg2 isNAT:(BOOL)arg3 retry:(unsigned*)arg4 timeout:(unsigned long long*)arg5 frequency:(unsigned*)arg6 ;
+(id)getIdentifierType:(id)arg1 ;
+(id)createIKEConfigFromProtocol:(id)arg1 ifIndex:(unsigned)arg2 options:(id)arg3 serverAddress:(id)arg4 enableBlackHoleDetection:(BOOL)arg5 ;
+(id)createChildConfigFromProtocol:(id)arg1 ;
+(id)createDNSSettingsFromTunnelConfig:(id)arg1 ;
+(id)createIPv4SettingsFromTunnelConfig:(id)arg1 childConfig:(id)arg2 ;
+(id)createIPv6SettingsFromTunnelConfig:(id)arg1 childConfig:(id)arg2 ;
+(BOOL)getStatusFromNotification:(unsigned)arg1 status:(int*)arg2 isConfig:(BOOL*)arg3 isRedirected:(BOOL*)arg4 isSocketError:(BOOL*)arg5 isAdditionalServerAddresses:(BOOL*)arg6 ;
+(BOOL)getBoolFromTunnelConfig:(id)arg1 key:(id)arg2 ;
+(id)getAddressFromTunnelConfig:(id)arg1 key:(id)arg2 valueType:(id)arg3 outputArray:(id)arg4 ;
+(id)getDNSDomainsFromTunnelConfig:(id)arg1 ;
+(id)createRouteArrayFromTunnelConfig:(id)arg1 childConfig:(id)arg2 gatewayAddress:(id)arg3 isIPv4:(BOOL)arg4 ;
@end

