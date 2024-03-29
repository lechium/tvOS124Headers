/*
* This header is generated by classdump-dyld 1.0
* on Saturday, August 24, 2019 at 9:46:10 PM Mountain Standard Time
* Operating System: Version 12.4 (Build 16M568)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMVisionEngineNode.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface AXMSourceNode : AXMVisionEngineNode <NSSecureCoding> {

	NSMutableArray* _nodeQueue_resultHandlers;
	BOOL _shouldProcessRemotely;

}

@property (assign,nonatomic) BOOL shouldProcessRemotely;              //@synthesize shouldProcessRemotely=_shouldProcessRemotely - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)nodeInitialize;
-(void)setShouldProcessRemotely:(BOOL)arg1 ;
-(void)produceImage:(id)arg1 ;
-(void)triggerWithContext:(id)arg1 cacheKey:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)resultHandlers;
-(BOOL)shouldProcessRemotely;
-(void)addResultHandler:(/*^block*/id)arg1 ;
-(void)removeResultHandler:(/*^block*/id)arg1 ;
-(void)removeAllResultHandlers;
-(void)_nodeQueue_addResultHandler:(/*^block*/id)arg1 ;
-(void)_nodeQueue_removeResultHandler:(/*^block*/id)arg1 ;
-(void)_nodeQueue_removeAllResultHandlers;
@end

