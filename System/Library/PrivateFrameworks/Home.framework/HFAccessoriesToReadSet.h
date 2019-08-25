/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSNumber;

@interface HFAccessoriesToReadSet : NSObject {

	NSMutableDictionary* _accessories;
	NSNumber* _transportKey;

}

@property (nonatomic,retain) NSMutableDictionary * accessories;              //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,retain) NSNumber * transportKey;                        //@synthesize transportKey=_transportKey - In the implementation block
-(id)initWithTransportType:(id)arg1 ;
-(void)markCharacteristicAsRead:(id)arg1 withLogger:(id)arg2 ;
-(NSNumber *)transportKey;
-(void)addCharacteristic:(id)arg1 ;
-(void)setTransportKey:(NSNumber *)arg1 ;
-(NSMutableDictionary *)accessories;
-(void)setAccessories:(NSMutableDictionary *)arg1 ;
-(long long)count;
@end
