/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:43:32 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface CKOperationFlowControlManager : NSObject {

	NSMutableDictionary* _flowControlledOperationKeys;

}

@property (readonly) NSMutableDictionary * flowControlledOperationKeys;              //@synthesize flowControlledOperationKeys=_flowControlledOperationKeys - In the implementation block
-(void)unlimitAllOperations;
-(NSMutableDictionary *)flowControlledOperationKeys;
-(BOOL)isOperationLimited:(id)arg1 outLimitError:(id*)arg2 ;
-(double)secondsUntilUnlimited:(id)arg1 ;
-(void)limitOperation:(id)arg1 retryAfter:(id)arg2 error:(id)arg3 ;
-(id)CKStatusReportArray;
-(id)init;
@end

