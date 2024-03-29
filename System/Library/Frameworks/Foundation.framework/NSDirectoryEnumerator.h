/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:39 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSDictionary;

@interface NSDirectoryEnumerator : NSEnumerator

@property (copy,readonly) NSDictionary * fileAttributes; 
@property (copy,readonly) NSDictionary * directoryAttributes; 
@property (readonly) unsigned long long level; 
-(NSDictionary *)fileAttributes;
-(NSDictionary *)directoryAttributes;
-(void)skipDescendents;
-(id)nextObject;
-(unsigned long long)level;
-(void)skipDescendants;
@end

