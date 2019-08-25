/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleServiceToolkit/ASTMaterializedConnection.h>
#import <libobjc.A.dylib/ASTUploadConnection.h>
#import <libobjc.A.dylib/ASTTestResultHandling.h>

@class NSURL, NSNumber, ASTSealableFile, NSString, NSMutableURLRequest;

@interface ASTConnectionTestResultBinary : ASTMaterializedConnection <ASTUploadConnection, ASTTestResultHandling> {

	NSNumber* _testId;
	NSURL* _fileSteamLocationURL;
	ASTSealableFile* _sealableFile;
	NSString* _dataId;

}

@property (nonatomic,retain) ASTSealableFile * sealableFile;                               //@synthesize sealableFile=_sealableFile - In the implementation block
@property (nonatomic,retain) NSString * dataId;                                            //@synthesize dataId=_dataId - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id didReceiveResponse; 
@property (nonatomic,readonly) NSMutableURLRequest * request; 
@property (assign,nonatomic,__weak) id<ASTConnectionStatusDelegate> delegate; 
@property (assign,nonatomic) long long state; 
@property (assign,nonatomic) long long networkDisconnectedRetryCount; 
@property (assign,nonatomic) BOOL retryOnNetworkDisconnected; 
@property (nonatomic,readonly) unsigned long long rootOfTrust; 
@property (nonatomic,readonly) NSURL * fileSteamLocationURL;                               //@synthesize fileSteamLocationURL=_fileSteamLocationURL - In the implementation block
@property (nonatomic,readonly) NSNumber * testId;                                          //@synthesize testId=_testId - In the implementation block
-(id)contentType;
-(NSURL *)fileSteamLocationURL;
-(NSNumber *)testId;
-(id)initWithSealableFile:(id)arg1 fileSequence:(id)arg2 totalFiles:(id)arg3 testId:(id)arg4 dataId:(id)arg5 ;
-(ASTSealableFile *)sealableFile;
-(NSString *)dataId;
-(void)setSealableFile:(ASTSealableFile *)arg1 ;
-(void)setDataId:(NSString *)arg1 ;
-(id)endpoint;
@end

