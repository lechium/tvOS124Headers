/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:45:05 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreML/CoreML-Structs.h>
@interface MLSaver : NSObject
+(BOOL)saveModelToArchive:(MLModelOutputArchiver*)arg1 model:(id)arg2 error:(id*)arg3 ;
+(BOOL)saveModelToArchive:(MLModelOutputArchiver*)arg1 model:(id)arg2 compilerOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)saveModelToAssetAtURL:(id)arg1 model:(id)arg2 error:(id*)arg3 ;
@end

