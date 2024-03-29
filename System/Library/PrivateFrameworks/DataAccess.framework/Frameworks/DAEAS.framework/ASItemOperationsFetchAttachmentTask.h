/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:22 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>
#import <libobjc.A.dylib/ASFetchAttachmentTaskProtocol.h>

@class NSString, NSFileHandle, NSError;

@interface ASItemOperationsFetchAttachmentTask : ASTask <ASFetchAttachmentTaskProtocol> {

	NSString* _attachmentUUID;
	NSString* _attachmentName;
	NSString* _messageID;
	NSString* _localFileName;
	NSString* _attachmentContentType;
	unsigned long long _localFileLength;
	NSFileHandle* _localFileHandle;
	NSError* _writeAttachmentError;

}

@property (nonatomic,retain) NSString * attachmentUUID;                       //@synthesize attachmentUUID=_attachmentUUID - In the implementation block
@property (nonatomic,retain) NSString * attachmentName;                       //@synthesize attachmentName=_attachmentName - In the implementation block
@property (nonatomic,retain) NSString * messageID;                            //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,retain) NSString * localFileName;                        //@synthesize localFileName=_localFileName - In the implementation block
@property (nonatomic,retain) NSString * attachmentContentType;                //@synthesize attachmentContentType=_attachmentContentType - In the implementation block
@property (assign,nonatomic) unsigned long long localFileLength;              //@synthesize localFileLength=_localFileLength - In the implementation block
@property (nonatomic,retain) NSFileHandle * localFileHandle;                  //@synthesize localFileHandle=_localFileHandle - In the implementation block
@property (nonatomic,retain) NSError * writeAttachmentError;                  //@synthesize writeAttachmentError=_writeAttachmentError - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)messageID;
-(void)finishWithError:(id)arg1 ;
-(void)setMessageID:(NSString *)arg1 ;
-(NSString *)attachmentName;
-(int)commandCode;
-(id)requestBody;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(id)initForMessageServerID:(id)arg1 andAttachmentName:(id)arg2 ;
-(id)initForMessageUUID:(id)arg1 ;
-(NSString *)attachmentUUID;
-(void)setAttachmentUUID:(NSString *)arg1 ;
-(void)setAttachmentName:(NSString *)arg1 ;
-(NSString *)localFileName;
-(void)setLocalFileName:(NSString *)arg1 ;
-(NSString *)attachmentContentType;
-(void)setAttachmentContentType:(NSString *)arg1 ;
-(unsigned long long)localFileLength;
-(void)setLocalFileLength:(unsigned long long)arg1 ;
-(NSFileHandle *)localFileHandle;
-(void)setLocalFileHandle:(NSFileHandle *)arg1 ;
-(BOOL)handleStreamOperation:(int)arg1 forCodePage:(int)arg2 tag:(int)arg3 withParentItem:(id)arg4 withData:(char*)arg5 dataLength:(int)arg6 ;
-(NSError *)writeAttachmentError;
-(void)setWriteAttachmentError:(NSError *)arg1 ;
@end

