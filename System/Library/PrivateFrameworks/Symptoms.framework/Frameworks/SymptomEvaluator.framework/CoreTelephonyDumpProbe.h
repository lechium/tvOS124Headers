/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:16 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SymptomEvaluator/NetDiagnosticProbe.h>

@protocol CoreTelephonyDumpProbeDelegate, OS_dispatch_source;
@class NSString, NSObject, NSMutableArray;

@interface CoreTelephonyDumpProbe : NetDiagnosticProbe {

	BOOL _archiveDumpUponEnd;
	BOOL _deleteCTDumpFilesAfterArchive;
	BOOL _deleteArchiveAfterComplete;
	BOOL _coreDumpEnabled;
	BOOL _basebandTraceEnabled;
	BOOL _observingCoreTelephonyDumpBegin;
	BOOL _observingCoreTelephonyDumpEnd;
	BOOL _gotFilteredOut;
	double _startDumpTimeout;
	double _endDumpTimeout;
	id<CoreTelephonyDumpProbeDelegate> _delegate;
	double _previousDumpTimestamp;
	NSString* _previousDumpFolderPath;
	NSString* _previousDumpFolderPrefix;
	unsigned long long _maximumFileSizeToArchive;
	NSString* _dumpReason;
	NSObject*<OS_dispatch_source> _beginTimeoutTimer;
	NSObject*<OS_dispatch_source> _endTimeoutTimer;
	NSObject*<OS_dispatch_source> _archiveTimeoutTimer;
	NSMutableArray* _archivePaths;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> beginTimeoutTimer;                //@synthesize beginTimeoutTimer=_beginTimeoutTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> endTimeoutTimer;                  //@synthesize endTimeoutTimer=_endTimeoutTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> archiveTimeoutTimer;              //@synthesize archiveTimeoutTimer=_archiveTimeoutTimer - In the implementation block
@property (nonatomic,retain) NSMutableArray * archivePaths;                                  //@synthesize archivePaths=_archivePaths - In the implementation block
@property (assign,nonatomic) BOOL observingCoreTelephonyDumpBegin;                           //@synthesize observingCoreTelephonyDumpBegin=_observingCoreTelephonyDumpBegin - In the implementation block
@property (assign,nonatomic) BOOL observingCoreTelephonyDumpEnd;                             //@synthesize observingCoreTelephonyDumpEnd=_observingCoreTelephonyDumpEnd - In the implementation block
@property (assign,nonatomic) BOOL coreDumpEnabled;                                           //@synthesize coreDumpEnabled=_coreDumpEnabled - In the implementation block
@property (assign,nonatomic) BOOL basebandTraceEnabled;                                      //@synthesize basebandTraceEnabled=_basebandTraceEnabled - In the implementation block
@property (assign,nonatomic) BOOL gotFilteredOut;                                            //@synthesize gotFilteredOut=_gotFilteredOut - In the implementation block
@property (retain) id<CoreTelephonyDumpProbeDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double previousDumpTimestamp;                                   //@synthesize previousDumpTimestamp=_previousDumpTimestamp - In the implementation block
@property (nonatomic,copy) NSString * previousDumpFolderPath;                                //@synthesize previousDumpFolderPath=_previousDumpFolderPath - In the implementation block
@property (nonatomic,copy) NSString * previousDumpFolderPrefix;                              //@synthesize previousDumpFolderPrefix=_previousDumpFolderPrefix - In the implementation block
@property (assign,nonatomic) unsigned long long maximumFileSizeToArchive;                    //@synthesize maximumFileSizeToArchive=_maximumFileSizeToArchive - In the implementation block
@property (assign,nonatomic) BOOL archiveDumpUponEnd;                                        //@synthesize archiveDumpUponEnd=_archiveDumpUponEnd - In the implementation block
@property (assign,nonatomic) BOOL deleteCTDumpFilesAfterArchive;                             //@synthesize deleteCTDumpFilesAfterArchive=_deleteCTDumpFilesAfterArchive - In the implementation block
@property (assign,nonatomic) BOOL deleteArchiveAfterComplete;                                //@synthesize deleteArchiveAfterComplete=_deleteArchiveAfterComplete - In the implementation block
@property (assign,nonatomic) double startDumpTimeout;                                        //@synthesize startDumpTimeout=_startDumpTimeout - In the implementation block
@property (assign,nonatomic) double endDumpTimeout;                                          //@synthesize endDumpTimeout=_endDumpTimeout - In the implementation block
@property (nonatomic,copy) NSString * dumpReason;                                            //@synthesize dumpReason=_dumpReason - In the implementation block
-(id)probeOutputFilePaths;
-(void)netDiagnosticTaskStatusChangedFor:(id)arg1 toStatus:(int)arg2 ;
-(NSObject*<OS_dispatch_source>)beginTimeoutTimer;
-(void)setBeginTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)endTimeoutTimer;
-(void)setEndTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)archiveTimeoutTimer;
-(void)setArchiveTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setStartDumpTimeout:(double)arg1 ;
-(void)setEndDumpTimeout:(double)arg1 ;
-(BOOL)archiveDumpUponEnd;
-(NSString *)previousDumpFolderPath;
-(void)archiveDumpFolderWithDumpTimestamp:(double)arg1 folderPath:(id)arg2 folderPrefix:(id)arg3 ;
-(void)setGotFilteredOut:(BOOL)arg1 ;
-(BOOL)gotFilteredOut;
-(void)setPreviousDumpFolderPath:(NSString *)arg1 ;
-(void)setPreviousDumpFolderPrefix:(NSString *)arg1 ;
-(void)setPreviousDumpTimestamp:(double)arg1 ;
-(double)previousDumpTimestamp;
-(BOOL)startCoreTelephonyDumpArchive:(id)arg1 ;
-(BOOL)getBasebandTraceEnabledState:(BOOL*)arg1 coreDumpEnabled:(BOOL*)arg2 ;
-(void)stopCoreTelephonyDumpMonitoring;
-(void)startCoreTelephonyDump:(double)arg1 ;
-(void)waitForCoreTelephonyDumpEnd:(double)arg1 ;
-(double)startDumpTimeout;
-(double)endDumpTimeout;
-(NSString *)previousDumpFolderPrefix;
-(unsigned long long)maximumFileSizeToArchive;
-(void)setMaximumFileSizeToArchive:(unsigned long long)arg1 ;
-(void)setArchiveDumpUponEnd:(BOOL)arg1 ;
-(BOOL)deleteCTDumpFilesAfterArchive;
-(void)setDeleteCTDumpFilesAfterArchive:(BOOL)arg1 ;
-(BOOL)deleteArchiveAfterComplete;
-(void)setDeleteArchiveAfterComplete:(BOOL)arg1 ;
-(NSString *)dumpReason;
-(void)setDumpReason:(NSString *)arg1 ;
-(BOOL)coreDumpEnabled;
-(void)setCoreDumpEnabled:(BOOL)arg1 ;
-(BOOL)basebandTraceEnabled;
-(void)setBasebandTraceEnabled:(BOOL)arg1 ;
-(NSMutableArray *)archivePaths;
-(void)setArchivePaths:(NSMutableArray *)arg1 ;
-(BOOL)observingCoreTelephonyDumpBegin;
-(void)setObservingCoreTelephonyDumpBegin:(BOOL)arg1 ;
-(BOOL)observingCoreTelephonyDumpEnd;
-(void)setObservingCoreTelephonyDumpEnd:(BOOL)arg1 ;
-(void)setDelegate:(id<CoreTelephonyDumpProbeDelegate>)arg1 ;
-(id<CoreTelephonyDumpProbeDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
@end

