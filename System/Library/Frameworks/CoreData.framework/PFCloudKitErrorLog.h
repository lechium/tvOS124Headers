/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:41:58 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface PFCloudKitErrorLog : NSObject {

	NSMutableArray* _entries;

}

@property (nonatomic,readonly) NSArray * entries; 
-(void)logEncounteredError:(id)arg1 withAnnotation:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSArray *)entries;
@end

