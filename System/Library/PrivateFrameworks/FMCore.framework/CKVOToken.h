/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:38 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FMCore.framework/FMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface CKVOToken : NSObject {

	NSString* _keypath;
	long long _index;
	/*^block*/id _block;

}

@property (nonatomic,copy,readonly) NSString * keypath;              //@synthesize keypath=_keypath - In the implementation block
@property (nonatomic,readonly) long long index;                      //@synthesize index=_index - In the implementation block
@property (nonatomic,copy,readonly) id block;                        //@synthesize block=_block - In the implementation block
@property (nonatomic,readonly) void* context; 
-(NSString *)keypath;
-(id)initWithKeyPath:(id)arg1 index:(long long)arg2 block:(/*^block*/id)arg3 ;
-(id)description;
-(void*)context;
-(long long)index;
-(id)block;
@end

