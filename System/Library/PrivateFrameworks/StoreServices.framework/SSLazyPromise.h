/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSPromise.h>

@class NSLock;

@interface SSLazyPromise : SSPromise {

	BOOL _executedBlock;
	/*^block*/id _block;
	NSLock* _executeBlockLock;

}

@property (nonatomic,copy) id block;                                 //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) NSLock * executeBlockLock;              //@synthesize executeBlockLock=_executeBlockLock - In the implementation block
@property (assign,nonatomic) BOOL executedBlock;                     //@synthesize executedBlock=_executedBlock - In the implementation block
-(void)addErrorBlock:(/*^block*/id)arg1 ;
-(id)resultWithTimeout:(double)arg1 error:(id*)arg2 ;
-(void)addSuccessBlock:(/*^block*/id)arg1 ;
-(BOOL)_runBlock;
-(id)resultBeforeDate:(id)arg1 error:(id*)arg2 ;
-(NSLock *)executeBlockLock;
-(BOOL)executedBlock;
-(void)setExecutedBlock:(BOOL)arg1 ;
-(void)setExecuteBlockLock:(NSLock *)arg1 ;
-(id)resultWithError:(id*)arg1 ;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
@end

