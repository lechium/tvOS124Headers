/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:20 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SignpostSupport/SignpostAnimationSubInterval.h>

@class NSString;

@interface SignpostAnimationTransactionLifetime : SignpostAnimationSubInterval {

	unsigned _transactionSeed;
	unsigned _swapId;
	int _pid;
	NSString* _processName;
	NSString* _executablePath;

}

@property (nonatomic,readonly) unsigned transactionSeed;               //@synthesize transactionSeed=_transactionSeed - In the implementation block
@property (nonatomic,readonly) unsigned swapId;                        //@synthesize swapId=_swapId - In the implementation block
@property (nonatomic,readonly) int pid;                                //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSString * processName;                 //@synthesize processName=_processName - In the implementation block
@property (nonatomic,readonly) NSString * executablePath;              //@synthesize executablePath=_executablePath - In the implementation block
-(id)initWithTransactionSeedInterval:(id)arg1 ;
-(unsigned)transactionSeed;
-(unsigned)swapId;
-(int)pid;
-(NSString *)executablePath;
-(NSString *)processName;
@end

