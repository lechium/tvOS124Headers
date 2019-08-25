/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:59 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class CKShare;

@interface BRShareSaveOperation : BROperation {

	CKShare* _share;
	/*^block*/id _shareSaveCompletionBlock;

}

@property (nonatomic,retain) CKShare * share;              //@synthesize share=_share - In the implementation block
@property (copy) id shareSaveCompletionBlock;              //@synthesize shareSaveCompletionBlock=_shareSaveCompletionBlock - In the implementation block
+(BOOL)shouldRetryShareSaveOnError:(id)arg1 ;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)initWithShare:(id)arg1 ;
-(void)setShareSaveCompletionBlock:(id)arg1 ;
-(id)shareSaveCompletionBlock;
-(CKShare *)share;
-(void)setShare:(CKShare *)arg1 ;
-(void)main;
@end
