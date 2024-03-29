/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CKRecordID, NSString, NSData;

@interface CKDWrappingContext : NSObject {

	CKRecordID* _recordID;
	NSString* _fieldName;
	NSData* _fileSignature;
	NSData* _referenceSignature;

}

@property (nonatomic,retain) CKRecordID * recordID;                    //@synthesize recordID=_recordID - In the implementation block
@property (nonatomic,retain) NSString * fieldName;                     //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,retain) NSData * fileSignature;                   //@synthesize fileSignature=_fileSignature - In the implementation block
@property (nonatomic,retain) NSData * referenceSignature;              //@synthesize referenceSignature=_referenceSignature - In the implementation block
-(void)setFieldName:(NSString *)arg1 ;
-(NSString *)fieldName;
-(id)initWithRecordID:(id)arg1 fieldName:(id)arg2 fileSignature:(id)arg3 referenceSignature:(id)arg4 ;
-(NSData *)fileSignature;
-(NSData *)referenceSignature;
-(id)assetContextString;
-(id)encryptedDataContextString;
-(void)setFileSignature:(NSData *)arg1 ;
-(void)setReferenceSignature:(NSData *)arg1 ;
-(CKRecordID *)recordID;
-(void)setRecordID:(CKRecordID *)arg1 ;
@end

