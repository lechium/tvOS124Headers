/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:02 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject, NSString;

@interface MAPropertyAccessReporter : NSObject {

	NSMutableDictionary* _countByTuple;
	NSMutableDictionary* _countByPropertyKey;
	NSObject*<OS_dispatch_queue> _serialQueue;
	unsigned long long _accessCount;
	NSString* _dumpPath;

}

@property (nonatomic,retain) NSMutableDictionary * countByTuple;                    //@synthesize countByTuple=_countByTuple - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * countByPropertyKey;              //@synthesize countByPropertyKey=_countByPropertyKey - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (assign,nonatomic) unsigned long long accessCount;                        //@synthesize accessCount=_accessCount - In the implementation block
@property (nonatomic,retain) NSString * dumpPath;                                   //@synthesize dumpPath=_dumpPath - In the implementation block
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dumpReportToLogForGraph:(id)arg1 ;
-(void)reportAccessOfPropertyKey:(id)arg1 node:(BOOL)arg2 domain:(unsigned short)arg3 label:(unsigned short)arg4 forGraph:(id)arg5 valueClass:(Class)arg6 ;
-(NSMutableDictionary *)countByTuple;
-(NSMutableDictionary *)countByPropertyKey;
-(void)setCountByTuple:(NSMutableDictionary *)arg1 ;
-(void)setCountByPropertyKey:(NSMutableDictionary *)arg1 ;
-(unsigned long long)accessCount;
-(void)setAccessCount:(unsigned long long)arg1 ;
-(NSString *)dumpPath;
-(void)setDumpPath:(NSString *)arg1 ;
-(id)init;
@end

