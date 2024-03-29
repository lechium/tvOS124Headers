/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:41 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary;

@interface SCNSceneDatabase : NSObject <NSSecureCoding> {

	NSMutableDictionary* _db;

}
+(id)lookUpKeyForObjectNamed:(id)arg1 class:(Class)arg2 ;
+(id)sceneDatabase;
+(BOOL)supportsSecureCoding;
-(void)addInstance:(id)arg1 withName:(id)arg2 class:(Class)arg3 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

