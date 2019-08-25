/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:09 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class NSURL;

@interface AXMModelDetectorNode : AXMEvaluationNode {

	NSURL* _modelURL;

}

@property (nonatomic,retain) NSURL * modelURL;              //@synthesize modelURL=_modelURL - In the implementation block
+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(NSURL *)modelURL;
-(void)nodeInitialize;
-(BOOL)requiresVisionFramework;
-(BOOL)preloadModelIfNeeded:(id*)arg1 ;
-(void)setModelURL:(NSURL *)arg1 ;
-(void)evaluate:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

