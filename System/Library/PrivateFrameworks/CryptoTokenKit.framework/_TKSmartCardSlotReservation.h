/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CryptoTokenKit.framework/CryptoTokenKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber;

@interface _TKSmartCardSlotReservation : NSObject {

	BOOL _exclusive;
	NSNumber* _protocols;

}

@property (retain) NSNumber * protocols;              //@synthesize protocols=_protocols - In the implementation block
@property (assign) BOOL exclusive;                    //@synthesize exclusive=_exclusive - In the implementation block
-(void)setExclusive:(BOOL)arg1 ;
-(BOOL)exclusive;
-(NSNumber *)protocols;
-(void)setProtocols:(NSNumber *)arg1 ;
@end
