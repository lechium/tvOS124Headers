/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:11 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NRRegistryQueryCompletionBlockEntry : NSObject {

	/*^block*/id _block;
	unsigned long long _updateCounter;

}

@property (nonatomic,copy) id block;                                        //@synthesize block=_block - In the implementation block
@property (assign,nonatomic) unsigned long long updateCounter;              //@synthesize updateCounter=_updateCounter - In the implementation block
-(id)initWithUpdateCounter:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(unsigned long long)updateCounter;
-(void)setUpdateCounter:(unsigned long long)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
@end

