/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:37 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/SocksHandshake.h>

@class NSMutableSet, NSMutableString;

@interface SocksHandshakev5 : SocksHandshake {

	BOOL _done;
	unsigned long long _state;
	int _numberOfAuthVersionSupported;
	NSMutableSet* _authMethods;
	unsigned char _addressType;
	int _destinationLen;
	NSMutableString* _domainName;
	unsigned char ipaddr[16];
	int _portLen;
	unsigned short _destPort;
	int _usernameLen;
	NSMutableString* _username;
	int _passwordLen;
	NSMutableString* _password;

}
-(BOOL)parse:(const char*)arg1 len:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(id)finish:(int)arg1 ;
@end

