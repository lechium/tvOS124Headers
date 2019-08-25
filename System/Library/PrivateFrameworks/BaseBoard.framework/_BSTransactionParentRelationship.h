/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:50 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSTransaction;

@interface _BSTransactionParentRelationship : NSObject {

	BSTransaction* _parentTransaction;
	unsigned long long _schedulingPolicy;

}

@property (nonatomic,readonly) BSTransaction * parentTransaction;                //@synthesize parentTransaction=_parentTransaction - In the implementation block
@property (nonatomic,readonly) unsigned long long schedulingPolicy;              //@synthesize schedulingPolicy=_schedulingPolicy - In the implementation block
-(id)initWithParentTransaction:(id)arg1 schedulingPolicy:(unsigned long long)arg2 ;
-(BSTransaction *)parentTransaction;
-(unsigned long long)schedulingPolicy;
@end

