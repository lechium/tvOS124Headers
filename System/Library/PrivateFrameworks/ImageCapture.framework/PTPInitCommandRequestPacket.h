/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PTPInitCommandRequestPacket : NSObject {

	unsigned char _initiatorGUID[16];
	NSString* _initiatorFriendlyName;

}
-(id)initWithInitiatorGUID:(char*)arg1 initiatorFriendlyName:(id)arg2 ;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(id)contentForTCP;
-(const char*)initiatorGUID;
-(void)setInitiatorGUID:(char*)arg1 ;
-(id)initiatorFriendlyName;
-(void)setInitiatorFriendlyName:(id)arg1 ;
-(void)dealloc;
-(id)description;
@end

