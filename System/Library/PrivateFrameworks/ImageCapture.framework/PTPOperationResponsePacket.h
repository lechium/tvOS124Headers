/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ImageCapture/ImageCapture-Structs.h>
@interface PTPOperationResponsePacket : NSObject {

	int _numParameters;
	unsigned short _responseCode;
	unsigned _transactionID;
	unsigned _parameters[5];

}
-(void)setResponseCode:(unsigned short)arg1 ;
-(unsigned short)responseCode;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(id)contentForTCP;
-(id)contentForUSBUsingBuffer:(void*)arg1 capacity:(unsigned)arg2 ;
-(id)initWithUSBBuffer:(void*)arg1 ;
-(id)contentForUSB;
-(unsigned)parameter1;
-(void)setParameter1:(unsigned)arg1 ;
-(unsigned)parameter2;
-(void)setParameter2:(unsigned)arg1 ;
-(unsigned)parameter3;
-(void)setParameter3:(unsigned)arg1 ;
-(unsigned)parameter4;
-(unsigned)parameter5;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 parameter2:(unsigned)arg4 parameter3:(unsigned)arg5 parameter4:(unsigned)arg6 parameter5:(unsigned)arg7 ;
-(int)numParameters;
-(void)setNumParameters:(unsigned)arg1 ;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 numParameters:(unsigned)arg3 parameters:(unsigned*)arg4 ;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 ;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 ;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 parameter2:(unsigned)arg4 ;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 parameter2:(unsigned)arg4 parameter3:(unsigned)arg5 ;
-(id)initWithResponseCode:(unsigned short)arg1 transactionID:(unsigned)arg2 parameter1:(unsigned)arg3 parameter2:(unsigned)arg4 parameter3:(unsigned)arg5 parameter4:(unsigned)arg6 ;
-(void)setPparameter:(unsigned)arg1 atIndex:(unsigned)arg2 ;
-(void)setParameter4:(unsigned)arg1 ;
-(void)setParameter5:(unsigned)arg1 ;
-(unsigned)parameterAtIndex:(unsigned)arg1 ;
-(void)setTransactionID:(unsigned)arg1 ;
-(unsigned)transactionID;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
