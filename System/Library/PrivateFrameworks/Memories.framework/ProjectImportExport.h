/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:07 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface ProjectImportExport : NSObject {

	NSMutableArray* _exportedProjectList;

}

@property (retain) NSMutableArray * exportedProjectList;              //@synthesize exportedProjectList=_exportedProjectList - In the implementation block
+(id)sharedInstance;
-(void)setExportedProjectList:(NSMutableArray *)arg1 ;
-(NSMutableArray *)exportedProjectList;
-(void)refreshExportedProjectFileList;
-(BOOL)haveExportedProjectNamed:(id)arg1 ;
-(void)undeleteExportedProject:(id)arg1 ;
-(void)deleteExportedProject:(id)arg1 ;
-(void)deleteExportedProjectWithName:(id)arg1 ;
-(id)init;
@end
