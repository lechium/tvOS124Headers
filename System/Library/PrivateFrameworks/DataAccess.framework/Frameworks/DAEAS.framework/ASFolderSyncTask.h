/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:47:21 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DAEAS/ASTask.h>

@class NSString;

@interface ASFolderSyncTask : ASTask {

	NSString* _previousSyncKey;
	BOOL _requireChangedFolders;
	int _numDownloadedElements;
	long long _dataclasses;
	BOOL _isSpinning;

}

@property (assign,nonatomic) BOOL requireChangedFolders;              //@synthesize requireChangedFolders=_requireChangedFolders - In the implementation block
@property (assign,nonatomic) long long dataclasses;                   //@synthesize dataclasses=_dataclasses - In the implementation block
-(void)finishWithError:(id)arg1 ;
-(long long)taskStatusForExchangeStatus:(int)arg1 ;
-(int)commandCode;
-(id)requestBody;
-(BOOL)getTopLevelToken:(char*)arg1 outStatusCodePage:(char*)arg2 outStatusToken:(char*)arg3 ;
-(BOOL)processContext:(id)arg1 ;
-(long long)dataclasses;
-(void)setDataclasses:(long long)arg1 ;
-(void)_setSpinning:(BOOL)arg1 ;
-(id)initWithPreviousSyncKey:(id)arg1 ;
-(BOOL)requireChangedFolders;
-(void)setRequireChangedFolders:(BOOL)arg1 ;
-(int)numDownloadedElements;
-(void)dealloc;
@end

