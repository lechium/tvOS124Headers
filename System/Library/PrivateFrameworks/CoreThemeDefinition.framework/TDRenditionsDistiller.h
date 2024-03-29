/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:49 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class CoreThemeDocument, NSMutableArray, NSConditionLock, NSObject, TDLogger;

@interface TDRenditionsDistiller : NSObject {

	CoreThemeDocument* document;
	NSMutableArray* renditionInQueue;
	NSMutableArray* psiDataInfoOutQueue;
	NSConditionLock* inQueueLock;
	NSConditionLock* outQueueLock;
	BOOL shouldCompressCSIDataFlag;
	BOOL noMoreCSIDataInfo;
	BOOL noMoreRenditions;
	NSObject*<OS_dispatch_group> _group;
	TDLogger* _logger;

}

@property (retain) TDLogger * logger;              //@synthesize logger=_logger - In the implementation block
-(id)initWithDocument:(id)arg1 shouldCompressCSIDataFlag:(BOOL)arg2 ;
-(void)detachDistillationThread;
-(void)enqueueAbortFlag;
-(void)enqueueRenditionSpec:(id)arg1 ;
-(void)enqueueLastRenditionFlag;
-(id)nextCSIDataInfoFromQueue;
-(void)_distill:(id)arg1 ;
-(void)_enqueueOnQueue:(id)arg1 withQueueLock:(id)arg2 object:(id)arg3 ;
-(void)_enqueueOnOutQueueTheObject:(id)arg1 ;
-(id)_nextObjectFromInQueue;
-(void)_enqueueDistillingAbortedInfo;
-(void)_enqueueCSIDataInfo:(id)arg1 ;
-(void)_enqueueLastCSIDataInfoFlag;
-(void)_enqueueOnInQueueTheObject:(id)arg1 ;
-(void)waitUntilFinished;
-(TDLogger *)logger;
-(void)setLogger:(TDLogger *)arg1 ;
-(void)dealloc;
@end

