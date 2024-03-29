/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:44:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData, NSUUID;

@interface WPDataTransfer : NSObject {

	BOOL _receivedFirstPacket;
	unsigned short _currentDataSize;
	NSMutableData* _currentReceivedData;
	NSUUID* _peerUUID;

}

@property (nonatomic,retain) NSMutableData * currentReceivedData;              //@synthesize currentReceivedData=_currentReceivedData - In the implementation block
@property (assign,nonatomic) unsigned short currentDataSize;                   //@synthesize currentDataSize=_currentDataSize - In the implementation block
@property (assign,nonatomic) BOOL receivedFirstPacket;                         //@synthesize receivedFirstPacket=_receivedFirstPacket - In the implementation block
@property (nonatomic,retain) NSUUID * peerUUID;                                //@synthesize peerUUID=_peerUUID - In the implementation block
-(void)setCurrentReceivedData:(NSMutableData *)arg1 ;
-(void)setReceivedFirstPacket:(BOOL)arg1 ;
-(BOOL)receivedFirstPacket;
-(void)setCurrentDataSize:(unsigned short)arg1 ;
-(unsigned short)currentDataSize;
-(NSUUID *)peerUUID;
-(NSMutableData *)currentReceivedData;
-(id)initDataTransferForPeer:(id)arg1 ;
-(void)resetTransfer;
-(BOOL)addNewData:(id)arg1 ;
-(void)setPeerUUID:(NSUUID *)arg1 ;
@end

