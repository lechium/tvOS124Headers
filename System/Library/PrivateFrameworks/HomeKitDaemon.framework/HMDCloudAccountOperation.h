/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class NSUUID, NSObject;

@interface HMDCloudAccountOperation : NSOperation {

	NSUUID* _identifier;
	NSObject*<OS_dispatch_queue> _clientQueue;
	/*^block*/id _operationBlock;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,copy) id operationBlock;                                         //@synthesize operationBlock=_operationBlock - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                                   //@synthesize identifier=_identifier - In the implementation block
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(id)operationBlock;
-(void)setOperationBlock:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 clientQueue:(id)arg2 ;
-(NSUUID *)identifier;
-(id)description;
-(void)main;
@end

