/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:46 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/FMCoreLite.framework/FMCoreLite
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSData;

@interface FMDataArchiver : NSObject {

	BOOL _backedUp;
	BOOL _createDirectories;
	long long _dataProtectionClass;
	NSURL* _fileURL;
	NSData* _unitTestData;

}

@property (nonatomic,retain) NSURL * fileURL;                            //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,copy) NSData * unitTestData;                        //@synthesize unitTestData=_unitTestData - In the implementation block
@property (assign,nonatomic) long long dataProtectionClass;              //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
@property (assign,nonatomic) BOOL backedUp;                              //@synthesize backedUp=_backedUp - In the implementation block
@property (assign,nonatomic) BOOL createDirectories;                     //@synthesize createDirectories=_createDirectories - In the implementation block
+(id)defaultClasses;
-(long long)dataProtectionClass;
-(void)setDataProtectionClass:(long long)arg1 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setBackedUp:(BOOL)arg1 ;
-(void)setCreateDirectories:(BOOL)arg1 ;
-(void)setUnitTestData:(NSData *)arg1 ;
-(id)readDataOfClasses:(id)arg1 error:(id*)arg2 ;
-(id)underlyingDataWithError:(id*)arg1 ;
-(NSData *)unitTestData;
-(id)saveObject:(id)arg1 ;
-(unsigned long long)dataWritingOptionForDataProtectionClass:(long long)arg1 ;
-(BOOL)backedUp;
-(void)injectUnitTestData:(id)arg1 ;
-(id)readDictionaryAndClasses:(id)arg1 error:(id*)arg2 ;
-(id)readArrayAndClasses:(id)arg1 error:(id*)arg2 ;
-(id)saveArray:(id)arg1 ;
-(id)saveDictionary:(id)arg1 ;
-(BOOL)saveArray:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveDictionary:(id)arg1 error:(id*)arg2 ;
-(BOOL)createDirectories;
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
@end

