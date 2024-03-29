/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class HFMutableAggregatedCharacteristicReadPolicy, NSMutableSet, NSDictionary, NSError, NSMutableDictionary, NAFuture, NSObject, NSMutableArray, HFUpdateLogger;

@interface HFCharacteristicValueTransaction : NSObject {

	BOOL _loggerIsExternal;
	HFMutableAggregatedCharacteristicReadPolicy* _readPolicy;
	NSMutableSet* _characteristicsToRead;
	NSMutableSet* _writeCharacteristicRequests;
	NSMutableSet* _actionSetsToExecute;
	NSDictionary* _actionSetErrorsKeyedByUUID;
	NSError* _overallReadError;
	NSError* _overallWriteError;
	NSMutableDictionary* _readFuturesKeyedByCharacteristicIdentifier;
	NSMutableDictionary* _writeFuturesKeyedByCharacteristicIdentifier;
	NAFuture* _commitFuture;
	NSObject*<OS_dispatch_group> _onFinishGroup;
	NSMutableArray* _clientReasonsStack;
	HFUpdateLogger* _logger;

}

@property (nonatomic,retain) HFMutableAggregatedCharacteristicReadPolicy * readPolicy;                       //@synthesize readPolicy=_readPolicy - In the implementation block
@property (nonatomic,retain) NSMutableSet * characteristicsToRead;                                           //@synthesize characteristicsToRead=_characteristicsToRead - In the implementation block
@property (nonatomic,retain) NSMutableSet * writeCharacteristicRequests;                                     //@synthesize writeCharacteristicRequests=_writeCharacteristicRequests - In the implementation block
@property (nonatomic,retain) NSMutableSet * actionSetsToExecute;                                             //@synthesize actionSetsToExecute=_actionSetsToExecute - In the implementation block
@property (nonatomic,retain) NSDictionary * actionSetErrorsKeyedByUUID;                                      //@synthesize actionSetErrorsKeyedByUUID=_actionSetErrorsKeyedByUUID - In the implementation block
@property (nonatomic,retain) NSError * overallReadError;                                                     //@synthesize overallReadError=_overallReadError - In the implementation block
@property (nonatomic,retain) NSError * overallWriteError;                                                    //@synthesize overallWriteError=_overallWriteError - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * readFuturesKeyedByCharacteristicIdentifier;               //@synthesize readFuturesKeyedByCharacteristicIdentifier=_readFuturesKeyedByCharacteristicIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * writeFuturesKeyedByCharacteristicIdentifier;              //@synthesize writeFuturesKeyedByCharacteristicIdentifier=_writeFuturesKeyedByCharacteristicIdentifier - In the implementation block
@property (nonatomic,retain) NAFuture * commitFuture;                                                        //@synthesize commitFuture=_commitFuture - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> onFinishGroup;                                     //@synthesize onFinishGroup=_onFinishGroup - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientReasonsStack;                                            //@synthesize clientReasonsStack=_clientReasonsStack - In the implementation block
@property (nonatomic,retain) HFUpdateLogger * logger;                                                        //@synthesize logger=_logger - In the implementation block
@property (assign,nonatomic) BOOL loggerIsExternal;                                                          //@synthesize loggerIsExternal=_loggerIsExternal - In the implementation block
-(NSMutableDictionary *)readFuturesKeyedByCharacteristicIdentifier;
-(NSMutableSet *)writeCharacteristicRequests;
-(NSMutableSet *)actionSetsToExecute;
-(NSMutableArray *)clientReasonsStack;
-(void)setLoggerIsExternal:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_group>)onFinishGroup;
-(HFMutableAggregatedCharacteristicReadPolicy *)readPolicy;
-(NAFuture *)commitFuture;
-(NSMutableDictionary *)writeFuturesKeyedByCharacteristicIdentifier;
-(id)executionErrorForActionSet:(id)arg1 ;
-(BOOL)loggerIsExternal;
-(void)setOverallWriteError:(NSError *)arg1 ;
-(void)setWriteCharacteristicRequests:(NSMutableSet *)arg1 ;
-(void)setOverallReadError:(NSError *)arg1 ;
-(void)setCharacteristicsToRead:(NSMutableSet *)arg1 ;
-(void)setActionSetErrorsKeyedByUUID:(NSDictionary *)arg1 ;
-(void)setActionSetsToExecute:(NSMutableSet *)arg1 ;
-(void)setClientReasonsStack:(NSMutableArray *)arg1 ;
-(void)setReadFuturesKeyedByCharacteristicIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setWriteFuturesKeyedByCharacteristicIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setCommitFuture:(NAFuture *)arg1 ;
-(void)setOnFinishGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setReadPolicy:(HFMutableAggregatedCharacteristicReadPolicy *)arg1 ;
-(NSDictionary *)actionSetErrorsKeyedByUUID;
-(NSError *)overallReadError;
-(NSError *)overallWriteError;
-(NSMutableSet *)characteristicsToRead;
-(HFUpdateLogger *)logger;
-(void)setLogger:(HFUpdateLogger *)arg1 ;
-(id)init;
@end

