/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:40 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSKeyedArchiver.h>

@class NSDictionary;

@interface SCNKeyedArchiver : NSKeyedArchiver {

	NSDictionary* options;

}

@property (nonatomic,copy) NSDictionary * options; 
+(id)archivedDataWithRootObject:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
-(NSDictionary *)options;
-(void)setOptions:(NSDictionary *)arg1 ;
@end
