/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:48:36 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleServiceToolkit/ASTSealablePayload.h>

@class NSNumber, NSDictionary, NSArray;

@interface ASTTestResult : ASTSealablePayload {

	NSNumber* _statusCode;
	NSDictionary* _data;
	NSArray* _files;
	double _testDuration;
	NSNumber* _allowCellularSizeThreshold;
	NSNumber* _testId;
	NSDictionary* _predicates;
	NSDictionary* _dictionary;

}

@property (nonatomic,retain) NSDictionary * predicates;                          //@synthesize predicates=_predicates - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionary;                        //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSNumber * testId;                                //@synthesize testId=_testId - In the implementation block
@property (nonatomic,retain) NSNumber * statusCode;                              //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,retain) NSDictionary * data;                                //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSArray * files;                                    //@synthesize files=_files - In the implementation block
@property (assign,nonatomic) double testDuration;                                //@synthesize testDuration=_testDuration - In the implementation block
@property (nonatomic,retain) NSNumber * allowCellularSizeThreshold;              //@synthesize allowCellularSizeThreshold=_allowCellularSizeThreshold - In the implementation block
+(id)resultWithTestId:(id)arg1 parameters:(id)arg2 ;
-(void)setStatusCode:(NSNumber *)arg1 ;
-(NSArray *)files;
-(void)setFiles:(NSArray *)arg1 ;
-(void)setPredicates:(NSDictionary *)arg1 ;
-(NSDictionary *)predicates;
-(double)testDuration;
-(id)generatePayload;
-(NSNumber *)allowCellularSizeThreshold;
-(NSNumber *)testId;
-(BOOL)sealWithFileSigner:(/*^block*/id)arg1 error:(id*)arg2 ;
-(void)setAllowCellularSizeThreshold:(NSNumber *)arg1 ;
-(void)sealWithSealableFiles:(id)arg1 ;
-(void)sealWithPayload:(id)arg1 signature:(id)arg2 ;
-(id)initWithTestId:(id)arg1 parameters:(id)arg2 ;
-(void)setTestDuration:(double)arg1 ;
-(id)init;
-(NSDictionary *)dictionary;
-(NSDictionary *)data;
-(void)setData:(NSDictionary *)arg1 ;
-(NSNumber *)statusCode;
@end

