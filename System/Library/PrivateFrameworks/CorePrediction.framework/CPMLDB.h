/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/CorePrediction.framework/CorePrediction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CPMLAlgorithmProtocol, OS_dispatch_queue;
#import <CorePrediction/CorePrediction-Structs.h>
@class CPMLSchema, NSMutableArray, NSMutableDictionary, NSMutableString, NSDictionary, NSString, NSObject;

@interface CPMLDB : NSObject {

	unsigned long long* repFields;
	unsigned long long maxFieldCount;
	unsigned commitCountMax;
	unsigned currentCommitCount;
	unsigned rowCount;
	double* cardinality;
	double* min;
	double* max;
	double* mean;
	double* sumOfX;
	double* sumOfXX;
	double* sigma;
	CPMLSchema* cpSchema;
	NSMutableArray* indexer;
	NSMutableDictionary* vectorListCardinality;
	NSMutableString* dbTableName;
	double currentTimeInterval;
	double minTimeToLogIndex;
	int _openCPMLDBOptions;
	NSDictionary* _cInfo;
	NSString* _trainingModelFileAndPath;
	NSString* _trainingFile;
	id<CPMLAlgorithmProtocol> _thedelegate;
	NSObject*<OS_dispatch_queue> _dispatch_queue;
	sqlite3Ref db;
	NSString* _dbFileName;

}

@property (readonly) CPMLSchema * cpSchema; 
@property (nonatomic,readonly) sqlite3Ref db; 
@property (readonly) NSString * dbFileName;                //@synthesize dbFileName=_dbFileName - In the implementation block
+(id)getConfigurationFromPlist:(id)arg1 ;
-(void)restart;
-(id)initWithDBName:(id)arg1 withPlistPath:(id)arg2 withWriteOptions:(int)arg3 ;
-(id)initWithDBName:(id)arg1 withConfiguration:(id)arg2 withWriteOptions:(int)arg3 ;
-(id)getDelegate;
-(void)flushDB;
-(id)fileProtectionClassRequest:(id)arg1 ;
-(id)getDispatchQueue;
-(void)removeTrainingRowData:(double)arg1 ;
-(unsigned long long)getColumnCount;
-(int)getYColumnPosition;
-(unsigned long long)getCombinedRemapTableCardinality:(unsigned)arg1 ;
-(unsigned long long)getRowCount;
-(BOOL)isColumnContinousData:(unsigned)arg1 ;
-(unsigned long long)getCardinality:(unsigned)arg1 ;
-(int)getSchemaType:(unsigned long long)arg1 ;
-(double)getMeanFor:(unsigned)arg1 ;
-(double)getStdDevFor:(unsigned)arg1 ;
-(double)getMinFor:(unsigned)arg1 ;
-(double)getMaxFor:(unsigned)arg1 ;
-(id)getRemapTable;
-(void)setCPMLAlgorithm:(id)arg1 ;
-(id)getColumnName:(unsigned long long)arg1 ;
-(int)getVectorContent:(unsigned long long)arg1 ;
-(BOOL)logNSDictionary:(id)arg1 ;
-(id)initWithDBName:(id)arg1 dataFromFile:(id)arg2 withPlistPath:(id)arg3 withWriteOptions:(int)arg4 ;
-(void)doInitialize:(id)arg1 withConfiguration:(id)arg2 withWriteOptions:(int)arg3 ;
-(void)createTable:(id)arg1 withSchema:(id)arg2 withExistingTable:(BOOL)arg3 ;
-(void)insertIntoTable:(id)arg1 withTuple:(id)arg2 ;
-(void)initMaxSizeStatistics:(unsigned long long)arg1 ;
-(BOOL)loadStatisticTable;
-(void)initStatisticsTable;
-(void)indexTable:(id)arg1 withColumn:(id)arg2 ;
-(void)loadTables;
-(void)doInitCommon:(id)arg1 withDict:(id)arg2 withFileExists:(BOOL*)arg3 withWriteOptions:(int)arg4 ;
-(void)doInitializeWithDataFile:(id)arg1 dataFromFile:(id)arg2 withConfiguration:(id)arg3 withWriteOptions:(int)arg4 ;
-(id)prepInsertStatementForMainTable;
-(double)updateStatisticsString:(id)arg1 colPosition:(unsigned long long)arg2 ;
-(void)updateStatistics;
-(BOOL)logNSArray:(id)arg1 ;
-(void)updateStatisticsReal:(double)arg1 colPosition:(unsigned long long)arg2 ;
-(void)execSQLCommand:(id)arg1 ;
-(double)columnQueryFor:(unsigned)arg1 withQuery:(id)arg2 ;
-(void)dropCommands:(id)arg1 ;
-(void)removeTrainingRow:(id)arg1 ;
-(id)initWithDBName:(id)arg1 dataFromFile:(id)arg2 withConfiguration:(id)arg3 withWriteOptions:(int)arg4 ;
-(BOOL)logCTypesV:(void*)arg1 ;
-(BOOL)logNSObjectV:(id)arg1 ;
-(BOOL)logBatchNSArray:(id)arg1 ;
-(BOOL)logBatchNSDictionary:(id)arg1 ;
-(BOOL)logNSDataFloat:(id)arg1 ;
-(BOOL)logNSDataDouble:(id)arg1 ;
-(void)addColumnToTable:(id)arg1 withNewColumn:(id)arg2 ;
-(void)queryDatabase:(id)arg1 whereMatch:(id)arg2 ;
-(void)updateTable:(id)arg1 withAttribute:(id)arg2 whereMatch:(id)arg3 ;
-(void)deleteRow:(id)arg1 whereMatch:(id)arg2 ;
-(void)deleteAllRows:(id)arg1 ;
-(void)printFormat:(id)arg1 ;
-(id)extractRow:(id)arg1 ;
-(CPMLSchema *)cpSchema;
-(id)addValues:(int)arg1 ;
-(sqlite3Ref)db;
-(NSString *)dbFileName;
-(void)setDispatchQueue:(id)arg1 ;
-(void)dealloc;
-(BOOL)reset;
@end

