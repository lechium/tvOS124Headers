/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSDictionary;

@interface IMSPIAttachment : NSObject {

	NSString* _guid;
	NSURL* _fileUrl;
	long long _fileTransferState;
	NSString* _uti;
	BOOL _isSticker;
	BOOL _isOutgoing;
	NSDictionary* _attributionInfo;

}

@property (retain) NSString * guid;                             //@synthesize guid=_guid - In the implementation block
@property (retain) NSURL * fileUrl;                             //@synthesize fileUrl=_fileUrl - In the implementation block
@property (assign) long long fileTransferState;                 //@synthesize fileTransferState=_fileTransferState - In the implementation block
@property (retain) NSString * uti;                              //@synthesize uti=_uti - In the implementation block
@property (assign) BOOL isSticker;                              //@synthesize isSticker=_isSticker - In the implementation block
@property (assign) BOOL isOutgoing;                             //@synthesize isOutgoing=_isOutgoing - In the implementation block
@property (retain) NSDictionary * attributionInfo;              //@synthesize attributionInfo=_attributionInfo - In the implementation block
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(NSString *)uti;
-(void)setUti:(NSString *)arg1 ;
-(BOOL)isSticker;
-(NSDictionary *)attributionInfo;
-(void)setAttributionInfo:(NSDictionary *)arg1 ;
-(id)initWithGuid:(id)arg1 fileUrl:(id)arg2 transferState:(long long)arg3 uti:(id)arg4 isSticker:(BOOL)arg5 isOutgoing:(BOOL)arg6 attributionInfo:(id)arg7 ;
-(NSURL *)fileUrl;
-(void)setFileUrl:(NSURL *)arg1 ;
-(long long)fileTransferState;
-(void)setFileTransferState:(long long)arg1 ;
-(void)setIsSticker:(BOOL)arg1 ;
-(BOOL)isOutgoing;
-(void)setIsOutgoing:(BOOL)arg1 ;
-(id)description;
-(id)bundleID;
@end

