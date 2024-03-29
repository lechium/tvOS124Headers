/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:43 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray, NSMutableDictionary;

@interface CKDModifyShareTokenURLRequest : CKDURLRequest {

	/*^block*/id _shareTokenModifiedBlock;
	NSArray* _shareTokenInfos;
	NSMutableDictionary* _shareTokenInfosByRequestID;

}

@property (nonatomic,retain) NSArray * shareTokenInfos;                                     //@synthesize shareTokenInfos=_shareTokenInfos - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * shareTokenInfosByRequestID;              //@synthesize shareTokenInfosByRequestID=_shareTokenInfosByRequestID - In the implementation block
@property (nonatomic,copy) id shareTokenModifiedBlock;                                      //@synthesize shareTokenModifiedBlock=_shareTokenModifiedBlock - In the implementation block
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(NSArray *)shareTokenInfos;
-(NSMutableDictionary *)shareTokenInfosByRequestID;
-(id)shareTokenModifiedBlock;
-(id)initWithShareTokenInfos:(id)arg1 ;
-(void)setShareTokenModifiedBlock:(id)arg1 ;
-(void)setShareTokenInfos:(NSArray *)arg1 ;
-(void)setShareTokenInfosByRequestID:(NSMutableDictionary *)arg1 ;
-(int)operationType;
@end

