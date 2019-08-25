/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PTPInitCommandACKPacket : NSObject {

	unsigned _connectionNumber;
	unsigned char _responderGUID[16];
	NSString* _responderFriendlyName;

}
-(id)initWithTCPBuffer:(void*)arg1 ;
-(id)contentForTCP;
-(id)initWithConnectionNumber:(unsigned)arg1 responderGUID:(char*)arg2 responderFriendlyName:(id)arg3 ;
-(unsigned)connectionNumber;
-(id)responderGUIDString;
-(void)setConnectionNumber:(unsigned)arg1 ;
-(const char*)responderGUID;
-(void)setResponderGUID:(char*)arg1 ;
-(id)responderFriendlyName;
-(void)setResponderFriendlyName:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end
