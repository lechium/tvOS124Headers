/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AVCNetworkAddress : NSObject {

	NSString* ip;
	NSString* interfaceName;
	unsigned short port;
	BOOL isIPv6;

}

@property (nonatomic,copy) NSString * ip; 
@property (assign,nonatomic) unsigned short port; 
@property (assign,nonatomic) BOOL isIPv6; 
@property (nonatomic,copy) NSString * interfaceName; 
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(NSString *)ip;
-(BOOL)isIPv6;
-(void)setIp:(NSString *)arg1 ;
-(void)setIsIPv6:(BOOL)arg1 ;
-(void)setPort:(unsigned short)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned short)port;
@end
