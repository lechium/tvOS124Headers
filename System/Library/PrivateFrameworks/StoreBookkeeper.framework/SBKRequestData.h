/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:06 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBKTransaction;

@interface SBKRequestData : NSObject {

	SBKTransaction* _transaction;

}

@property (retain) SBKTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
+(id)propertyListBodyWithTransaction:(id)arg1 ;
-(SBKTransaction *)transaction;
-(void)setTransaction:(SBKTransaction *)arg1 ;
-(id)serializableRequestBodyPropertyList;
-(id)initWithTransaction:(id)arg1 ;
@end
