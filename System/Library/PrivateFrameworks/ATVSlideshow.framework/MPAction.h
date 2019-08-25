/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:49:44 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol MPActionSupport;
@class NSObject, MCAction;

@interface MPAction : NSObject <NSCoding, NSCopying> {

	NSObject*<MPActionSupport> _parentObject;
	MCAction* _action;
	NSObject* _targetObject;

}

@property (nonatomic,retain) NSObject * targetObject;              //@synthesize targetObject=_targetObject - In the implementation block
+(id)action;
-(void)setParent:(id)arg1 ;
-(id)parentDocument;
-(void)configureTarget;
-(void)setTargetObject:(NSObject *)arg1 ;
-(NSObject *)targetObject;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(id)arg1 ;
-(id)key;
-(id)parent;
@end
