/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/_NSFileWatcherFileHandleInfo.h>

@interface _NSFileWatcherDirectoryFileHandleInfo : _NSFileWatcherFileHandleInfo {

	InodeDevPair inodeDevPair;

}
-(BOOL)isDirectory;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)close;
@end
