/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:04 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MCBlockOperationContext.h>

@class MCBlockOperation;

@interface _MCBlockOperationContext : NSObject <MCBlockOperationContext> {

	MCBlockOperation* _operation;

}

@property (nonatomic,retain) MCBlockOperation * operation;              //@synthesize operation=_operation - In the implementation block
-(void)endBlockOperation;
-(void)setOperation:(MCBlockOperation *)arg1 ;
-(MCBlockOperation *)operation;
@end

