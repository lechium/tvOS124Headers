/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MFAttachmentDataProviderProtocol.h>

@class NSData, MFMimePart, MFMailMessage, NSString;

@interface MFRFC822AttachmentDataProvider : NSObject <MFAttachmentDataProviderProtocol> {

	NSData* _messageData;
	MFMimePart* _parentPart;
	MFMailMessage* _message;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)fetchLocalDataForAttachment:(id)arg1 ;
-(void)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)messageForAttachment:(id)arg1 ;
-(id)storageLocationForAttachment:(id)arg1 withMessage:(id)arg2 ;
-(id)initWithMessageData:(id)arg1 parentPart:(id)arg2 ;
-(void)dealloc;
@end

