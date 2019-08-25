/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:42 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, CKRecordID, NSString, NSData;

@interface CKDAcceptShareMetadata : NSObject {

	BOOL _acceptedInProcess;
	NSURL* _shareURL;
	CKRecordID* _shareRecordID;
	NSString* _etag;
	NSData* _publicPCSData;
	NSString* _publicPCSEtag;
	NSData* _publicKey;
	unsigned long long _publicKeyVersion;
	NSData* _oonProtectionInfo;
	NSString* _oonParticipantID;

}

@property (nonatomic,retain) NSURL * shareURL;                                 //@synthesize shareURL=_shareURL - In the implementation block
@property (nonatomic,retain) CKRecordID * shareRecordID;                       //@synthesize shareRecordID=_shareRecordID - In the implementation block
@property (nonatomic,retain) NSString * etag;                                  //@synthesize etag=_etag - In the implementation block
@property (nonatomic,retain) NSData * publicPCSData;                           //@synthesize publicPCSData=_publicPCSData - In the implementation block
@property (nonatomic,retain) NSString * publicPCSEtag;                         //@synthesize publicPCSEtag=_publicPCSEtag - In the implementation block
@property (nonatomic,retain) NSData * publicKey;                               //@synthesize publicKey=_publicKey - In the implementation block
@property (assign,nonatomic) unsigned long long publicKeyVersion;              //@synthesize publicKeyVersion=_publicKeyVersion - In the implementation block
@property (nonatomic,retain) NSData * oonProtectionInfo;                       //@synthesize oonProtectionInfo=_oonProtectionInfo - In the implementation block
@property (nonatomic,retain) NSString * oonParticipantID;                      //@synthesize oonParticipantID=_oonParticipantID - In the implementation block
@property (assign,nonatomic) BOOL acceptedInProcess;                           //@synthesize acceptedInProcess=_acceptedInProcess - In the implementation block
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(NSURL *)shareURL;
-(void)setShareURL:(NSURL *)arg1 ;
-(BOOL)acceptedInProcess;
-(void)setAcceptedInProcess:(BOOL)arg1 ;
-(NSData *)publicPCSData;
-(void)setPublicPCSData:(NSData *)arg1 ;
-(void)setPublicPCSEtag:(NSString *)arg1 ;
-(CKRecordID *)shareRecordID;
-(void)setShareRecordID:(CKRecordID *)arg1 ;
-(unsigned long long)publicKeyVersion;
-(void)setPublicKeyVersion:(unsigned long long)arg1 ;
-(NSString *)publicPCSEtag;
-(NSData *)oonProtectionInfo;
-(NSString *)oonParticipantID;
-(void)setOonProtectionInfo:(NSData *)arg1 ;
-(void)setOonParticipantID:(NSString *)arg1 ;
-(NSData *)publicKey;
-(void)setPublicKey:(NSData *)arg1 ;
@end

