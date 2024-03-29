/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:56 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CommonUtilities.framework/CommonUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CUTFileCopierDelegate;
@class NSURL;

@interface CUTFileCopier : NSObject {

	BOOL _shouldCancel;
	BOOL _didErrorOccur;
	BOOL _inProgress;
	unsigned _operation;
	id<CUTFileCopierDelegate> _delegate;
	NSURL* _inputURL;
	NSURL* _outputURL;
	id _identifier;
	void* _BOMCopier;

}

@property (assign) void* _BOMCopier;                                //@synthesize BOMCopier=_BOMCopier - In the implementation block
@property (assign) BOOL inProgress;                                 //@synthesize inProgress=_inProgress - In the implementation block
@property (assign) unsigned operation;                              //@synthesize operation=_operation - In the implementation block
@property (__weak) id<CUTFileCopierDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSURL * inputURL;                         //@synthesize inputURL=_inputURL - In the implementation block
@property (copy,readonly) NSURL * outputURL;                        //@synthesize outputURL=_outputURL - In the implementation block
@property (readonly) id identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL wasCancelled;                   //@synthesize shouldCancel=_shouldCancel - In the implementation block
@property (nonatomic,readonly) BOOL didErrorOccur;                  //@synthesize didErrorOccur=_didErrorOccur - In the implementation block
-(void)_fillOutputURLFromInputURL;
-(NSURL *)inputURL;
-(id)_temporaryCopierPath;
-(void)_worker_doCopy;
-(void)_main_copierFinishedWithResult:(id)arg1 ;
-(void*)_BOMCopier;
-(void)set_BOMCopier:(void*)arg1 ;
-(id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned)arg4 delegate:(id)arg5 ;
-(BOOL)didErrorOccur;
-(BOOL)wasCancelled;
-(BOOL)inProgress;
-(void)setInProgress:(BOOL)arg1 ;
-(void)dealloc;
-(id)identifier;
-(void)setDelegate:(id<CUTFileCopierDelegate>)arg1 ;
-(id<CUTFileCopierDelegate>)delegate;
-(void)cancel;
-(void)start;
-(void)setOperation:(unsigned)arg1 ;
-(unsigned)operation;
-(void)cleanup;
-(NSURL *)outputURL;
@end

