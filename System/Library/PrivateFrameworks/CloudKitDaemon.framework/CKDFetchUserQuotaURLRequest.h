/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@interface CKDFetchUserQuotaURLRequest : CKDURLRequest {

	/*^block*/id _quotaFetchedBlock;

}

@property (nonatomic,copy) id quotaFetchedBlock;              //@synthesize quotaFetchedBlock=_quotaFetchedBlock - In the implementation block
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(void)setQuotaFetchedBlock:(id)arg1 ;
-(id)quotaFetchedBlock;
-(int)operationType;
@end

