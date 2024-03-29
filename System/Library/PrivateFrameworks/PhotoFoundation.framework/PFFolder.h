/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:50:03 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/PhotoFoundation.framework/PhotoFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoFoundation/PFFile.h>

@class NSMutableArray;

@interface PFFolder : PFFile {

	BOOL _isLeaf;
	NSMutableArray* _files;
	NSMutableArray* _folders;

}

@property (nonatomic,retain) NSMutableArray * files;                //@synthesize files=_files - In the implementation block
@property (nonatomic,retain) NSMutableArray * folders;              //@synthesize folders=_folders - In the implementation block
@property (assign,nonatomic) BOOL isLeaf;                           //@synthesize isLeaf=_isLeaf - In the implementation block
-(void)addFile:(id)arg1 ;
-(NSMutableArray *)files;
-(void)setFiles:(NSMutableArray *)arg1 ;
-(BOOL)isLeaf;
-(void)addFolder:(id)arg1 ;
-(NSMutableArray *)folders;
-(void)setFolders:(NSMutableArray *)arg1 ;
-(void)addFiles:(id)arg1 ;
-(void)addFolders:(id)arg1 ;
-(void)setIsLeaf:(BOOL)arg1 ;
-(id)init;
@end

