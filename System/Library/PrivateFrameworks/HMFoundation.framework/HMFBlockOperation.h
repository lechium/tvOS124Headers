/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:19 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFOperation.h>

@class NSArray;

@interface HMFBlockOperation : HMFOperation {

	NSArray* _executionBlocks;

}

@property (copy,readonly) NSArray * executionBlocks;              //@synthesize executionBlocks=_executionBlocks - In the implementation block
+(id)blockOperationWithBlock:(/*^block*/id)arg1 ;
-(NSArray *)executionBlocks;
-(id)initWithTimeout:(double)arg1 ;
-(void)addExecutionBlock:(/*^block*/id)arg1 ;
-(void)main;
@end
