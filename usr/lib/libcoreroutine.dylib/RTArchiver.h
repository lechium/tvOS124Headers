/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:25 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTArchiver : NSObject {

	archiveRef _archive;
	BOOL _valid;

}

@property (assign,nonatomic) BOOL valid;              //@synthesize valid=_valid - In the implementation block
+(BOOL)extractArchiveAtURL:(id)arg1 error:(id*)arg2 ;
-(void)setValid:(BOOL)arg1 ;
-(id)initWithOutputURL:(id)arg1 compress:(BOOL)arg2 ;
-(void)closeArchive;
-(void)addDirectoryToArchive:(id)arg1 ;
-(void)addFileToArchive:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)valid;
@end

