/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSMutableSet, NSDictionary, NSArray;

@interface IMFileTransferCenter : NSObject {

	NSMutableDictionary* _guidToTransferMap;
	NSMutableDictionary* _guidToRemovedTransferMap;
	NSMutableDictionary* _accountIDToTransferGUIDsMap;
	NSMutableArray* _preauthorizedInfos;
	NSMutableArray* _preauthorizedGUIDs;
	NSMutableSet* _activeTransfers;
	NSMutableSet* _pendingTransfers;
	BOOL _disconnectionListenerSetUp;
	NSMutableDictionary* _fetchHighQualityVariantCompletionHandlers;

}

@property (nonatomic,readonly) NSDictionary * transfers; 
@property (nonatomic,readonly) NSArray * activeTransferGUIDs; 
@property (nonatomic,readonly) NSArray * orderedTransfersGUIDs; 
@property (nonatomic,readonly) BOOL hasActiveFileTransfers; 
@property (nonatomic,readonly) BOOL hasPendingFileTransfers; 
@property (nonatomic,__weak,readonly) NSArray * activeTransfers; 
@property (nonatomic,__weak,readonly) NSArray * orderedTransfers; 
+(Class)transferCenterClass;
+(Class)fileTransferClass;
+(void)setTransferCenterClass:(Class)arg1 ;
+(id)sharedInstance;
-(id)transferForGUID:(id)arg1 ;
-(id)transfersForAccount:(id)arg1 ;
-(void)stopTransfer:(id)arg1 ;
-(void)_handleStandaloneFileTransferRegistered:(id)arg1 ;
-(void)_handleFileTransfer:(id)arg1 createdWithProperties:(id)arg2 ;
-(void)_handleFileTransfers:(id)arg1 createdWithLocalPaths:(id)arg2 ;
-(void)_handleFileTransfer:(id)arg1 updatedWithProperties:(id)arg2 ;
-(void)_handleFileTransfer:(id)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4 ;
-(void)_handleFileTransfer:(id)arg1 highQualityDownloadSucceededWithPath:(id)arg2 ;
-(void)_handleFileTransferHighQualityDownloadFailed:(id)arg1 ;
-(void)_handleAllFileTransfers:(id)arg1 ;
-(void)_removePendingTransfer:(id)arg1 ;
-(void)_removeActiveTransfer:(id)arg1 ;
-(void)_removeAllActiveTransfers;
-(void)acknowledgeAllPendingTransfers;
-(void)_addTransfer:(id)arg1 toAccount:(id)arg2 ;
-(void)_addPendingTransfer:(id)arg1 ;
-(void)_addTransfer:(id)arg1 ;
-(id)chatForTransfer:(id)arg1 ;
-(void)_addSpotlightProperties:(id)arg1 sender:(id)arg2 recipients:(id)arg3 incoming:(BOOL)arg4 ;
-(BOOL)doesLocalURLRequireArchiving:(id)arg1 toHandle:(id)arg2 ;
-(id)transferForGUID:(id)arg1 includeRemoved:(BOOL)arg2 ;
-(void)_addActiveTransfer:(id)arg1 ;
-(void)acceptTransfer:(id)arg1 withPath:(id)arg2 autoRename:(BOOL)arg3 overwrite:(BOOL)arg4 ;
-(BOOL)isFileTransfer:(id)arg1 preauthorizedWithDictionary:(id)arg2 ;
-(void)_clearTransfers;
-(void)acceptFileTransferIfPreauthorzed:(id)arg1 ;
-(BOOL)registerGUID:(id)arg1 forNewOutgoingTransferWithLocalURL:(id)arg2 ;
-(id)guidForNewOutgoingTransferWithLocalURL:(id)arg1 ;
-(void)_fetchHighQualityVariantForTransferGUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_daemonRestarted:(id)arg1 ;
-(void)_initiateHighQualityVariantDownloadWithDaemonForGUID:(id)arg1 ;
-(BOOL)hasPendingFileTransfers;
-(void)acknowledgePendingTransfer:(id)arg1 ;
-(BOOL)hasActiveFileTransfers;
-(void)assignTransfer:(id)arg1 toMessage:(id)arg2 account:(id)arg3 ;
-(void)assignTransfer:(id)arg1 toHandle:(id)arg2 ;
-(void)registerTransferWithDaemon:(id)arg1 ;
-(void)sendTransfer:(id)arg1 ;
-(void)acceptTransfer:(id)arg1 ;
-(void)removeTransfer:(id)arg1 ;
-(void)deleteTransfer:(id)arg1 ;
-(void)retargetTransfer:(id)arg1 toPath:(id)arg2 ;
-(NSDictionary *)transfers;
-(NSArray *)activeTransfers;
-(NSArray *)activeTransferGUIDs;
-(NSArray *)orderedTransfers;
-(NSArray *)orderedTransfersGUIDs;
-(void)clearFinishedTransfers;
-(void)preauthorizeFileTransferFromOtherPerson:(id)arg1 account:(id)arg2 filename:(id)arg3 saveToPath:(id)arg4 ;
-(BOOL)wasFileTransferPreauthorized:(id)arg1 ;
-(void)setAuxImageForTransfer:(id)arg1 value:(BOOL)arg2 ;
-(void)setAuxVideoForTransfer:(id)arg1 value:(BOOL)arg2 ;
-(id)guidsForStoredAttachmentPayloadData:(id)arg1 messageGUID:(id)arg2 ;
-(void)fetchHighQualityVariantForTransfer:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)preWarmConnection;
-(void)dealloc;
@end

