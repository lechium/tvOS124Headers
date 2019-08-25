/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleServiceToolkit/ASTMaterializedConnection.h>
#import <libobjc.A.dylib/ASTDownloadConnection.h>

@class NSFileHandle, NSString, NSMutableURLRequest;

@interface ASTConnectionAsset : ASTMaterializedConnection <ASTDownloadConnection> {

	/*^block*/id _didDownloadFile;
	NSFileHandle* _destinationFileHandle;
	NSString* _assetName;

}

@property (nonatomic,retain) NSString * assetName;                                         //@synthesize assetName=_assetName - In the implementation block
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
@property (nonatomic,copy) id didDownloadFile;                                             //@synthesize didDownloadFile=_didDownloadFile - In the implementation block
@property (nonatomic,readonly) NSFileHandle * destinationFileHandle;                       //@synthesize destinationFileHandle=_destinationFileHandle - In the implementation block
-(id)didDownloadFile;
-(void)setDidDownloadFile:(id)arg1 ;
-(NSFileHandle *)destinationFileHandle;
-(id)initWithAssetName:(id)arg1 destinationFileHandle:(id)arg2 ;
-(id)accept;
-(id)method;
-(NSString *)assetName;
-(void)setAssetName:(NSString *)arg1 ;
-(id)endpoint;
@end

