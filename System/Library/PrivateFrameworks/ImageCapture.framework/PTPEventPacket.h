/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PTPEventPacket : NSObject {

	int _numParameters;
	unsigned short _eventCode;
	unsigned _transactionID;
	unsigned _parameters[3];

}
-(unsigned short)eventCode;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(id)contentForTCP;
-(id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned)arg2 ;
-(id)initWithUSBBuffer:(void*)arg1 ;
-(id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned)arg2 ;
-(id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 ;
-(id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 parameter2:(unsigned)arg4 ;
-(id)initWithEventCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 parameter2:(unsigned)arg4 parameter3:(unsigned)arg5 ;
-(id)contentForUSB;
-(void)setEventCode:(unsigned short)arg1 ;
-(unsigned)parameter1;
-(void)setParameter1:(unsigned)arg1 ;
-(unsigned)parameter2;
-(void)setParameter2:(unsigned)arg1 ;
-(unsigned)parameter3;
-(void)setParameter3:(unsigned)arg1 ;
-(void)setTransactionID:(unsigned)arg1 ;
-(unsigned)transactionID;
-(id)description;
@end

